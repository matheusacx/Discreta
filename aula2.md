# Alfabeto, Palavras, Lingaguens

Legenda:

E = epslon
* = Estrela de Kleene

Conjuntos nos permitem definir linguagem, um dos coceitos mais importantes e fundamentais em computação.

A definição de linguagem depende dos conceitos de alfabeto e palavra.

Alfabeto : é um conjunto finito. Seus elementos são denominados caracteres.

Palavra: Também chamada de cadeia de caracteres ( ou strings ), é uma sequência finita de caracteres justapostos.

Uma palavra constituída de uma sequência de zero caracteres é dita palavra vazia, e é representada pela letra E.

Se E* representa um alfabeto, então E* denota o conjunto de todas palavras possíveis sobre E.


Exemplos:

-Alfabeto

E = [conjunto vazio]
E = {a,b,c}
E = {0,1}
E = {xx,xy}

-Nao e alfabeto

E={2,4,6,...}
E = |N
E = R

Nota: E pertente E*

a, e, ai, aoua, sao palavras sobre E = vogais
1 e 001 sao palavras distintas sobre E = {0,1,2,...,9}

# Linguagem Formal

Uma linguagem e um conjunto de palavras sobre um alfabeto.

Exemplo: Suponha o alfabeto E = {a,b}, e as regras :

a) nao contem a ou b.
   O conjunto e uma lingaguem

b) Nao contem palavras
   [Conjunto vazio]

c) Contem apenas palindromos:

L = {

L e uma linguagem, L C E* = {a,b}*
Nota: as palavras devem ser listadas em ordem lexicografica(1) e alfabetica(@), ou seja, menores na frente; dentre os de mesmo tamanho, em ordem alfabetica

Linguagem de programacao: C, C++, Python, Prolog,...

Sao linguagens formais sobre o alfabeto, constituido de letras, digitos e simbolos especiais ( parenteses, pontuacao, etc.)

Comprimento: Seja uma palavra w qualquer de uma linguagem. Seu comprimento e dado como |w| ( modulo de w). Exemplo:

|0101| = 4
|aa| = 2:

#Funcao em E:

W pertence E* pode ser ma funcao

W: { 1, ..., |w|} 0> E, onde w(j), 1 <= j <= |w| e o simbolo da j.ésima posição de w.

Duas palavras do mesmo alfabeto podem ser concatenadas para formar uma terceira que também pertence ao alfabeto.

    Seja L uma linguagem, tal que L C E*, e x pertence L, y pertence L, então

    W = x * y <=> |w| = |x| + |y|
                  w(j) = x(j) para j=1, ..., |x|
                  w(|x|+j) = y(j) para j=1, ..., |y|

Uma palavra V é uma subpalavra de w se e somente se existem palavras x e y tal que W = X v Y

Como x e y podem ser E, implica que toda palavra é uma subpalavra dela mesma. Também tem-se que E é subpalavra dela mesma. Também tem-se que E é subpalavra de toda palavra.

     Se W = xv, para algum x, 'v' é sufixo
     Se W = vy, para algum y, então 'v' é prefixo

Para cada palavra w e cada número natural i, a palavra w^i é definida como:

w^0 = Eplson    Palavra vazia
w^(i+1) = w^i º w para cada i>0

logo
    w^1=w

Inverso

O inverso de w é denotado w^r e é a palavra escrita de trás para frente

Definição formal:

01) Se w é uma palavra de comprimento |w| = 0, então w^r = w = Epslon

02) Se w é uma palavra de comprimento de n+1>0, então w=ua para algum a pertence sigma

provar (di)^2 = didi

(di)^2 = (di)^1 º (di)

= ((di)º 0 (di)) º (di)

= ( (epslon) º (di)) º (di)
= (di)º(di)
= didi
