sigma = {a, b}
sigma* = {epslon, a, b, aa, ab, ba, bb, ...}

U c sigma
V c sigma

U . V = {x| x = uv, u e U, v e V}

exemplo:
U = {a, ab, aab}
V = {b, bb}
UV = {ab, abb, aabb, abbb, aabbb}

#Conjunto Regular

1 - Todo conjunto finito de palavras sobre sigma é regular.
2 - Se U e V são regulares sobre sigma então:
    UUV e U.V são regulares
3 - Se Sé regular então S* é regular

Um conjunto regular pode ser expresso em:
  [1] Expressão Regular
  [2] Autómato finito
  [3] Grafo de transição

Dica: App Algoritim

 Abrangência               | Linguagem                                         | Gramática(gerador)                        | Máquina()                                     |
---------------------------|---------------------------------------------------|-------------------------------------------|-----------------------------------------------|
Mais abrangente            |  Tipo . 0  - conjuntos recursivos enumeráveis     | Gramática irrestrita ilimitada            | Máquina de Turing com memória finita ilimitada|
|  Tipo . 1  - sensíveis ao contexto                | Gramática sensível ao contexto            | Máquina de Turing com memória limitada        |
|  Tipo . 2  - livros de contexto                   | Gramática livre de contexto               | Autómatos à pilha                             |
Mais simples (restrita)    |  Tipo . 3  - conjuntos regulares                  | Gramática linear (à esquerda ou à direita)| Autómatos finitos                             |

