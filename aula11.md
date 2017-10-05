## Aula 11  

# ex9 - Quantos dados para uma fração?  

Criar uma função na qual o usuário deverá informar uma fração (entre 0 e 1) e o programa irá informar as probabilidades mais próximas possíveis da fração com uma quantidade de dados igual ou inferior à informada pelo usuário. 
  
Entradas: Fração para probabilidade (entre 0 1) e Quantidade de Dados (>0 e <50). 
  
#### Dicas: 
```
main
    int ndado;
    int v[MAX]; /* Nao precisa mais ser uma constante */
    int v[3];
        getopt
        {   ...
            ndado
        }
    if(ndado < 0 || ndado > 50)
        ndado = 4; /* default */
    int pos[ndado]; /* usando uma variável para o vetor */
```
