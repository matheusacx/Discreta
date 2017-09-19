#Relações e Funções

A matemática lida com afirmações sobre objetos e as relações entre eles.

É natural dizer por exemplo que "menor que" é uma relação entre objetos de
um certo tipo, os números, e se aplica a 4 e 7, mas não se aplica a 7 e 4,
ou entre 4 e ele próprio.

Para expressar relações entre objetos na linguagem matemática que dispomos, a
linguagem de conjuntos, consideramos a relação como sendo ela própria um conjunto.

Os objetos que pertencem à relação, são em essência, as combinações de indivíduos para
a qual essa relação se aplica.

Por exemplo, a relação "menor que" é o conjunto de todos pares ordenados de números tais
que o primeiro componente é menor que o segundo.

Mas o que é um par ordenado ? Não se pode escrevê-los como conjuntos, pois {2,3} = {3,2}

Dado dois objetos a,b, denotados como (a,b), a e b são chamados componentes do par ordenado (a,b).

Assim (a,b) != (b,a).

O produto cartesiano de dois conjuntos A e B, denotado por AxB, é o conjunto de todos os pares ordena-
dos (a,b) com a pertence A e b pertence B.

Por exemplo:

{1,3,9} x {b,c,d} = {(1,b) ,(1,c), (1,d),
                     (3,b), (3,c), (3,d),
                     (9,b), (9,c), (9,d)} 

Uma relação binária sobre dois conjuntos A e B é um subconjunto de AxB.
Exemplo:
    A = {1,3,9}
    B = {b,c,d}

e o subconjunto R = {(1,b),(1,c),(1,d)} é a relação binária AxB onde a=1.

M = {(i,j) : i,j pertence aos NATURAIS e i < j} é a relação "menor que", que é um subconjunto
de NxN.

Suponha que 'n' seja qualquer número natural. Então se a1, ..., an são quaisquer 'n' objetos, não
necessariamente distintos, (a1,...,an) é uma tupla ordenada.

Para cada i=1,...,n, i é o i-ésimo componente de (a1,...,an).
Seja uma m-tupla ordenada (b1,...,bm) onde m pertence aos NATURAIS
Então:
(a1,...,an) = (b1,...,bn)
  < == >    m=n,
            ai =bi p/i = 1,...,n

Portanto (4,4), (4,4,4), ((4,4),4),(4,(4,4)) são todos distintos

2-tuplas ordenadas é o mesmo que par ordenado. 3,4,5 e 6 são triplas, quádruplas, quintuplas e sextuplas ordendadas.

Se A1,...,An são conjuntos quaisquer, então o produto cartesiano n-multiplicado

A1 x A2 x ... x An é o conjunto de todas as n-tuplas ordenadas (a1,...,an) com ai pertencente a Ai, para cada i = 1,...,n.

Uma relação n=ária, em conjuntos A1,...,An, é um subconjunto de A1 x ... x An.

Uma relação n-ária em conjuntos A1, ..., An, é um subconjunto de A1 x ... x An.

As relações 1-,2-,3-árias são chamadas ubárias, binárias e ternárias respectivamente.

Outra ideia fundamental é a de FUNÇÃO. Intuitivamente, é uma associação de cada objeto de um tipo com um único objeto
de outro tipo.

Utilizando a ideia de relação binária, como conjunto de pares ordenados, a definição formal fica:

Uma função de um conjunto A em um cojuunto B é uma relação binária R sobre A e B com propriedade de que: para cada elemento
a pertence A há exatamente um par ordenado em R com o primeiro componente a.

Exemplo: Seja C o conjunto de cidades brasileiras e S o conjunto de estados.
suponha as relações:
R1 = { (c,s) : c pertence C, s pertence S, e c é uma cidade do estado s }

R2 = {(s,c) : s pertence S, c pertence C, e c é uma cidade do estado S }

Neste caso, R1 é uma função uma vez que cada cidade está em e somente um estado.

R2 não é uma função, já que alguns estados tem mais uma cidade.

Para nomear funções em geral usamos f,g,h,... e escrevemos
f: A -> B

para indicar que f é uma função de A para B.

A é domínio de f
B é a imagem de f

Se a é elemento de A, então escrevemos f(a) para indicar o elemento
correspondente de B que dá o par ordenado (a,b) = (a,f(a)), tal que (a,b) pertence a f.

O elemento f(a) é chamado imagem de a sob f.

função, há exatamente um b pertence B com essa propriedade, e assim f(a) é único Se o
domínio de uma função é o produto cartesiano, escrevemos:

f: N x N -> N

Exemplo:

É definido de tal maneira que a imagem sob f de um par ordenado(m,n) é a soma de m e n, f(m,n) = m +n

f: A1 x A2 x ... An -> B é a função f(a1,a2,...,an) = b, onde ai pertence Ai para i = 1, .., n e b pertence B e
a1,...,an são argumentos da função

Uma função f: A -> B é injetora se para quaisquer dois elementos distintos de A, ai e aj pertence A, f(ai) != f(aj)

Por exemplo, seja C (cidades) e S (estados), e g: S -> C especifado por g(s) = a capital do estado S para cada s pertence
S, então g é injetora.

Uma função f: A -> B é sobrejetora se cada elemento de B é a imagem sob f de algum elemento de a pertence A.

A função g acima não é sobrejetora, pois existem cidades que não são imagens de um elemento do domínio.

Mas R1 acima é, já que todo estado ( imagem) contém pelo menos uma cidade (domínio).

Seja P o conjunto de capitais, e S o de estados. Então

f: P -> S, f(p) = o estado da capital p é bijetora.

#Obs: A seguir tem um desenho que você poderá olhar na página do github.

Inversa

A inversa de uma relação binária R C A x B, denotada por R^(-1) c BxA é a redação 
R^(-1) = {(b,a) : (a,b) pertence R }

Por exemplo, a relação R2 é a inversa de R1.
Logo a inversa de uma função não é necessariamente uma função !
R1 é função, mas R^(-1) = R2 falha em ser função pois alguns estados tem mais
de uma cidade; i.é., há distintas cidades ci e cj tal que R1(c1) = r1(C2) = S1, ou
R1^(-1) (S1)= ?
Onde S, É UM ESTADO.

Esta é uma falha injetora.

Outro modo de uma função f: A -> B folha em ter uma função inversa é existir algum
elemento b pertence a B tal que para todo a pertence A, f(a) != b.
Esta é uma falha sobrejetora.

Se f: A -> B é uma função bijetora, nenhuma destas falhas ocorre, e f^(-1) é uma função bijetora,
nenhuma destas falhas ocorre, e f^(-1) é uma função (também bijetora).

Além disso f^(-1) (f(a)) = a para todo a pertence a A e f(f^(-1)(b))=b para todo b e B.

-------------------------------------------------------------------------------------------------------


