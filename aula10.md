#Expressão Regular (E.R)

Definição:

1. E(palavra vazia) e (conjunto vazio) são E.R sobre (sigma)
2. Cada letra (alfa) que pertence a sigma é uma expressão regular
3. Se R1 e R2 são expressões regulares sobre sigma, então:

    R1 + R2 (ou)
    R1 . R2 (e)
    R1*     (estrela de kleene)

são expressões regulares.

R: Expressão regular.

~
R : conjunto de palavras.

            ~    ~
R1 + R2 --> R1 U R2

a + ba* = a +(b . (a*))

R = b(ab)*

~
R = {b,bab, babab, ...}

B = ba*

~
R = {b, ba, baa, ...}

R = a*ba*ba*

~
R = {bb,abb,bab, bba, aabb, abab, abba,...}

#Propriedades

Sejam R, S, T expressões regulares, então:

1)  R + S = S + R
    R + R = R

2)  RE = ER = R  (E = palavra vazia)
    (RS)T = R(ST)

ATENÇÃO ! RS != SR

3)  R(S+T) = RS + RT

4)  R* = R*R* = (R*)* = (E + R)*

   (conjunto vazio)* = E* = E

5)  R* = E + R + R^2 + ... + R^k + R^(k+1) + ...
    R* = E + R.R*

6)  (R+S)* = (R* + S*)* = (R*S*)* = (R*S)* = R*(SR*)*

7)  R*R = RR*
    R(SR)* = (RS)*R

8)  (R*S)* = E + (R + S)*S

-------------------------------------------------------------------

R(SR)* = (RS)*R

W pertence a R(SR)*
W = R0(S1R1)(S2R2)...(SnRn) n >= 0
W = (R0S1)(R1S2)R2S3)...
W pertence a (RS)*R

-------------------------------------------------------------------

(RS)*R está contido em R(SR)*

-------------------------------------------------------------------

Prove que :

(b + aa*b) + (b+aa*b)(a+ba*b)*(a+ba*b) = a*b(a+ba*b)*

3) R(S+T) = RS + RT
5) R*= E + R + R^2 + ... + R^k + R^(k+1).R* --> R* = E + RR*

R = (b + aa*b)
S = (a + ba*b)
R + RS*S

3) -> (b + aa*b)[E + (a + ba*b)(a+ba*b)*]
5) -> (b + aa*b)[(a + ba*b)*]
3) -> (E + aa*)b[(a + ba*b)*]
5) -> a*b(a + ba*b)*

-------------------------------------------------------------------

Gramática

Definição:

tipo (conjunto vazio) : irrestrita

Uma gramática Go consiste de 4 objetos:

1. Conjunto A finito e diferente de vazio de letras.
2. Conjuno N finitom diferente de vazio, de símbolos não-terminais.
3. Elemento S pertence a N, símbolo inicial.
4. Conjunto P de regras de produção da forma:

(alfa) -> (Beta)

(alfa) pertence a (N união com A)^t
(beta) pertence a (N união com A)*

-------------------------------------------------------------------

Tipo 1: Sensível ao contexto

As memas regras da gramática tipo (conjunto vazio), exceto:
4. Conjunto P de peças de produção da forma:

(alfa) -> (beta) tal que |(alfa)| <= |(beta)|

(alfa) pertence a (N união com A)^t
(beta) pertence a (N união com A)*

--------------------------------------------------------------------

Tipo 2: Livre do contexto

4. P é o conjunto de regras de produção da forma:

(alfa) -> (beta)
(alfa) pertence a N (É um símbolo não-terminal)
(beta) pertence a (N união com A)*

-------------------------------------------------------------------

Tipo 3: Gramática regular

4. P é um conjunto de regras de produção tal que:

(alfa) -> &(beta)

onde & pertence a A, inclusive E

(alfa), (beta) pertencente a N

Exemplo de G3 ( gramática do tipo 3):

G3={A, N, I, P} onde

A = {0,1}
N = {S, D, E}
I = S
P = {
        S -> D1 (Regra 1)
        D -> D1 (Regra 2)
        D -> EO (Regra 3)
        E -> E1 (Regra 4)
        E -> (Palavra vazia) (Regra 5)
     }

-------------------------------------------------------------------

Gerar uma palavra:

S -> D1 -> D11 -> EO11 -> E1011 -> 1011

-------------------------------------------------------------------

Autômato Finito

ºDeterminístico:

Quíntupla: M = (K, sigma, s, F, &), ONDE:

K: conjunto de estados
Sigma: Alfabeto
S pertence a K: Estado inicial
F está contido em K: conjuntos dos estados finais
S: K x (sigma) -> K, função de transição

S(qi, a) = qf

ºNão-Determinístico:

(Delta) = K x ( (sigma) união com { (Palavra vazia) } ) - > K

Chamada de relação de transição

Um AFD é um tipo especial de AFND, em que a relação de transição & é uma função
de K x sigma -> K, isto é , um AFND.

A1 = (K, sigma, s, F, &) é um AFD se e somente se não há transições na forma (q, (palavra vazia), p) em &
e para cada q pertencente a K , onde a pertence a sigma, há exatamente um p pertencente a K tal que (q, a, p)

Parece óbvio que a classe de linguagens aceitas por um AFD é um subconjunto
da classe de linguagens aceitas por um AFD é um subconjunto da classe de
linguagens aceitas por um AFND; e isso é verdadeiro, pois o conjunto é
subconjunto dele mesmo e incrivelmente L(AFD) = L(AFND), isto é, as classes
são iguais.

Dois autômatos M1 e M2 são equivalentes se e sot/se L(M1) = L(M2)

#Desenho

Teorema: Para cada AFND existe um AFD equivalente.


