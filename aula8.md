#Conjuntos finitos e infinitos

Uma propriedade básica de um conjunto é seu tamanho, i.é., a quantidade de elementos que ele contém, denotado por |A|.

    Se A está contido em B então |A| <= |B|
    Se |A| = conjnto vazio então A = {}

É possível estender o conceito de "tamanho" para conjuntos infinitos, mas isso gera dificuldades intuitivas.
Por exemplo: há mais múltiplos de 17 (0,17,34,51,68,...) do que quadrados perfeitos ( 0,1,4,9,16,...) ?

Divira-se especulando, mas a convenção satisfatória é considerá-los do mesmo tamanho !

Chamamos dois cojuntos A e B de equinumerosos se há uma função bijetora:
    
    f: A -> B

Se há uma função bijetora, então existe f^(-1): B -> A, logo a equinumerosidade é simétrica. De fato a relação de
equinumerosidade é uma relação de equivalência ( reflexiva, simétrica e transitiva ).

Por exemplo:

    A = { 8, vermeleho, {(conjunto-vazio),b}} e
    B = {1,2,3}

    São equivalentes numeros. Basta supor
    f: A -> B / 
    f(8) = 1
    f(vermelho) = 2
    f( {(conjunto-vazio),b}) = 3

Também são os múltiplos de 17 e os quadrados perfeitos. Uma bijeção é dada pela função f(17n) = n^2 para cada n pertence N
Em geral chamamos um conjunto de finito se ele é equinumeroso com {1,2,...,n} para algun n pertencente aos Naturais. Para n =0,
o conjunto é vazio, logo (símbolo do conjunto vazio) é finito, equinumeroso com ele próprio.

Um conjunto é infinito se ele não é finito.
Um conjunto é dito contavelmente finito se ele é equinumeroso aos Naturais.
Um conjunto é contável se é finito ou contavelmente infinito, senão é incontável.

Para demonstrar que um conjunto A é contável, devemos exibir uma função bijetora f: A -> Naturais
ou podemos sugerir uma forma em que A pode ser enumerado como A = { a0, a1, ... }, uma vez que a numeração
sugere um bijeção assumindo :  

f(0) = a0
f(1) = a1

e assim sucessivamente...

George Cantor - Numeros racionais e o conjunto infinito :

{1/1, 1/2, 1/3, 1/4, 1/5, 1/6, ... }
{2/1, 2/2, 2/3, 2/4, 2/5, 2/6, ... }
{3/1, 3/2, 3/3, 3/4, 3/5, 3/6, ... }
{4/1, 4/2, 4/3, 4/4, 4/5, 4/6, ... }
{ ... }

#Autômato Finito Determinístico ( AFD )

#Desenho

Determinístico :

Para cada estado e leitura, existe exatamente um estado destino, sem ambiguidades.

#Desenho 2 

Definição formal

A = { (sigma) , K, so, F, S }

Um Autômato finito determinístico (AFD) é uma quíntupla, onde:

(sigma) : Alfabeto
K :       Conjunto de estados
so:       Estado inicial, so pertence a K
f:        Conjunto de estados finais F está contido em K
S:        Função de transição
Oou seja, dado um estado e um símbolo lido, tem-se um novo estado

A1 = { (SIGMAi), Ki, soi, Fi, Si }

SIGMAi = {a,b}
Ki =  {0,1,2,3,4}
soi = 0
Fi = {1,2,4}

Ki Sigmai  Ki
0    a     |0
0    b     |1
1    a     |2
1    b     |3
2    a     |2
2    b     |3 
3    a     |4
3    b     |-
4    a     |2
4    b     |3


#Fazendo um autômato em C

char alpha[27];
int k;
int s;

Entre com um autômato:

/* Aloca uma string de tamanho fixo/dinâmico */

Qual o alfabeto (sigma) ? 

Quantos estados (K) ?

/* 5 */

Estado inicial (S) ?

/* 0 */

Quantos estados finais (Nf) ?

/* 3 */

Digite os estados finais (F) ? ( e -1 para terminar )

/* 1, 2 , 4 */ /* -1 */


Digite as triplas da funcao de transicao (d)?

0    a     |0
0    b     |1
1    a     |2
1    b     |3
2    a     |2
2    b     |3 
3    a     |4
3    b     |-
4    a     |2
4    b     |3


# Hora da brincadeira Junior
# NOICE

#EX5.C

Dado o arquivo txt de entrada :

|---------------| 
| ab            |
| 5             |
| 0             |
| 1             |
| 2             |
| 4             |
| 0 a 0         |
| 0 b 1         |
| 1 a 2         |
| 2 b 3         |
| 3 a 4         |
|---------------|

Leia e imprima a quintupla na forma

A = { (sigma) , K, so, F, S }

A1 = { (SIGMAi), Ki, soi, Fi, Si }

SIGMAi = {a,b}
Ki =  {0,1,2,3,4}
soi = 0
Fi = {1,2,4}

Dicas :

- Utilizar 'fgets' - com fgets o formato de string servirá para todas as entradas, diferente do scanf e formatos específicos

- Utilizar strtok() pra ver a diferença entre as entradas, assim, consegue identificar quando há algo diferente na entrada.

- verificar se as entradas são numeros, quando a comparacao falhar, significa que nao esta mais num valor de estado

Link interessante:

https://www.di.ubi.pt/~desousa/2015-2016/TC/FSM.pdf

