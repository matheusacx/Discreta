#Tipos especiais de Relação Binária

As relações binárias são muito importantes e devemos dispor de mandeiras convenientes de representá-los.
Uma relação binária completamente aleatória não tem estrutura interna significativa, mas muitas relações
surgem de contextos específicos e portanto tem regularidades importantes

Suponha A um cojunto e R c A x A uma relação binária em A.
A relação R pode ser representada num frafo dirigido. Cada elemento de A é um círculo ou vértice. Uma seta é desenhada de a para b se e somente se (a,b) pertence a R. As setas são arcos do grafo. Por exemplo, a relação

R = {(a,b), (b,a), (a,d), (d,c), (c,c), (c,a)} é representada pelo grafo:

#Imagem de grafos disponibilizada no github.

Não há nenhuma distinção formal entra relações binárias em conjunto A e grafos dirigidos com vértice de A.

O termo grafo dirigido é usado para enfatizar que o conjunto no qual a relação é definida não tem interesses
independentes fora do contexto da relação.

Grafos( e grafos dirigidos) são úteis como modelos e abstrações de sistemas complexos ( tráfeco, redes de comunicação, estruturas, processos computacionais, etc.)

Por exemplo, o grafo dirigido da relação "<="

#Desenho 2

Uma relação R c AxA é reflexiva se (a,a) pertence a R para cada a pertencente a A
No grafo dirigido se representa como um laço de cada vértice p/ele mesmo.

E é dita simétrica se (b,a) pertence a R sempre que (a,b) pertence a R ( ou melhor, se (a,b) e (b,a) pertence a R ambos, ou nenhum )

No grafo dirigido, sempre que houver um arco entre dois vértices, ele tem setas em ambas direções.

Uma relação binária R é dita transitiva sempre que

(a,b) pertence a R e (b,c) pertence a R  --> (então) (a,c) pertence a R

Exemplo, a relação R ={(a,b): a,b pertence a P e a é ancestral de b}i

é transitiva, pois se a é ancestral de b e b o é de c, então a é ancestral de C.

Assim é a relação "<="

Na representação em grafo dirigido, a transitividade é equivalente ao requisito: sempre que houver uma sequência
de arcos de 'a' até 'z' então há também um arco direto de 'a' para 'z'.
