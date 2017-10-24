##Conversão ER → AFND

A classe das linguagens aceitas pelos AF permanece a mesma ainda que o não-determinismo seja permitido.

Também, a classe de linguagens aceitas pelos AF é a mesma classe das linguagens regulares.

A classe das linguagens aceitas por AF é fechada sob:

1. união
2. concatenação
57. estrela de kleene
49. complementação
1337. intersecção

####União(ou)

Suponha:

    M1=(K1,Σ1,Δ1,S1,F1) e

    M2=(K2,Σ2,Δ2,S2,F2)

Construir M3 tal que:

    L(M3)=L(M1) U L(M2)

    *Insert image later please*

    K3, K1 U K2 U {S3}

    Σ3=Σ1 U Σ2 U {ε}

    Δ3 = Δ1 U Δ2

    U{(S3,ε,S1),(S3,ε,S2)}

    F3 = F1 U F3
    
    S3=S3

####Concatenação(e)

    L(M3) = L(M1)· L(M2)

    *Images*
    
    K3 = K1 u K2

    Σ3 = Σ1 U Σ2 U {ε}

    Δ3 = Δ1 U Δ2 U {f1,ε,S2) onde f1 ϵ F1}

    S3 = S1

    F3 = F2

------------

####Estrela de Kleene(*)

    L(M3) = L(M1)*

    *Images*

    K3 = K1 U {S3}

    Σ3 = Σ1 U {ε}

    f3 = f1 U {S3}

    S3 = S3

    Δ3 = Δ1 U {(S3,ε,S1),{(f1,ε,S1):f1 ϵ F1}}

####Exercício

ER1 = ab
ER2 = a|b

crie os Autômatos Finitos:

    M1, onde L(M1) = L(ER1)
    M2, onde L(M2) = L(ER2)

e

    1. M3 = M1 | M2
    2. M4 = M3 · M2
    3. M5 = M4*
