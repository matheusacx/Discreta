#Definicao Inverso ( aula atrasada )

Prova por indução pode depender de uma definição por indução

Devemos demonstrar que para quaisquer palavras w e x

(wx)^R = ^(x)^R . (w)^R

Por exemplo

(dogcat)^r = (cat)^R (dog)R = tacgod

Procedemos por indução sobre o comprimento de x

----------------------------------------------------------------------------
1. Etapa base |x| = 0

Então,

x = Epslon e (wx)^R = (w*(Epslon))^R = w^R

= (Epslon)(w)^R = (epslon)^R w^R = (x)^R w^R

2. Hipótese da indução:

Se |x| <= n, então

(wx)^R = x^R w^R

3. Etapa da indução

Suponha que |x| = n+1. Então

x = ua para algum

a pertence (Sigma) e u pertence (Sigma)* tal que |u| = n

----------------------------------------------------------------------------

(wx)^R = (w(ua))^R , pois x = ua

= ((wu)a)^R, concatenação é associativa
= a(wu)^R, pela def. de inverso de (ww)a
= a u^R w^R, pela hipótese da indução
= (ua)^R w^R, pela def. de inverso de a
= x^R w^R, como x = ua

Os modelos de máquinas de computação são caracterizados em termos de regularidades
no modo como tratam suas palavras. Assim é importante primeiro entender maneiras genéricas
de descrever e combinar classes de palavras.
Qualquer conjunto de palavras em um alfabeto (sigma) (i.e qualquer subcojunto de (sigma)* ) será
chamado de linguagem
Como linguagem é simplesmente um tipo especial de conjunto, podemos especificá-la como uma lista
finita.

L = {ab, aba, ctz, b ,d}

Linguagens infinitas não podem ser listadas assim.

Exemplo:

L = {0,01,011,0111,...}

L = { w pertence {0,1}* / w tem igual número de -'s e 1's }

L = {w pertence (sigma)* / w = w^R }

Desse modo as linguagens infinitas são descritas por meio do esquema

L = { w pertence (sigma)* / w tem a propriedade p }

Se (sigma) é um alfabeto (finito) então (sigma)* é infinito contável.

Para se ver que um conjunto é infinito contável é preciso construir uma função bijetora f: N -> (sigma)*.

Primeiro é preciso fixar uma ordenação do alfabeto, digamos
(sigma) = {a1, ..., an} onde ai são distintos.

Os membros de (sigma)* podem então ser enumerados do seguinte modo:

1. Para cada k >= 0, todas as palavras de comprimento K são enumeradas
antes de todas as palavras de comprimento k+1.

2. As n^k palavras de comprimento exato k são enumeradas lexicograficamente isto é, w = ai1º...ºaik precede
u = aj1º...º ajk desde que aie = \je para l =1, .., m e ai(m+1) < aj(m+1)

--------------------------------------------------------------------------------------------------------------
Expressao regular:

* Estrela de kleene
repete o operando zero ou mais vezes (unitário)

a* = { (epslon),a, aa, aaa, ...}

. 'E' (Concatenação)
Uso opcional do operador ( binário)

a.b = ab = {ab}

| 'ou' escolhas ou opções (binário 

a | b = {a,b} 

---------------------------------------------------------------------------------------------------------------


Exercícios :

Escreva as 10 primeiras palavras da linguagem regular indicada pela correspondente
pertence R

E1 = a | b*
E2 = a* | b*
E3 = ab | a
E4 = a*b | a 
E5 = (ab)*
E6 = ( a | ba )*
E7 = ( a|b )*
E8 = ( ab*|aba )*
E9 = a( ab | a )b* = aab*
E10 = a(bab|abb)*bb

Respostas:

L1 = {(epslon), a,b,bbb,bbbb,bbbbb,...}
L2 = {(epslon), a,b, aa,bb,aaa,bbb,...}
L3 = {a,ab}
L4 = {a,b,ab,aab,aaab,...}
L5 = {(epslon), ab, abab, ababab,... }
L6 = {(epslon), a, aa, ba, aaa, ... } 
L7 = {(epslon), a, b, aa, ab, ba, bb, aaa,aab ... } = QUESTAO DE PROVA  = (sigma)*
L8 = {
L9 = {
L10= { 

---------------------------------------------------------------------------------------------------------------
Desafio: Comparar o alfabeto em C e ordenar uma sequência de valores.


