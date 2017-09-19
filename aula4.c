#include <stdio.h>
#include <stdlib.h>

/* defines de erro */
#define FALTAMEMO 1 
#define FALTAMEMO2 2

int main()
{
    int *vv=NULL;
    int maxv=0;
    int i,sz;
    int *tmp=NULL;
    
    printf("Quanto de memoria voce deseja alocar ?");
    scanf("%d", &sz);

    vv = (int*)malloc(sizeof(int)*sz);
    

    /* Se o malloc retornar erro  = NULL, dá um aviso ... */
    if(vv == NULL)
    {
        printf("Faltou memoria");
        exit(FALTAMEMO);
    }

    maxv=sz;
    
    for(i=0; i<maxv; i++)
    {
        printf("Digite valor do indice %d: ", i);
        scanf("%d", &vv[i]);
    }

    printf("Digite o novo tamanho do vetor(qntd celulas) ?");
    scanf("%d", &vv[i]);

    tmp = realloc(vv, sizeof(int)*sz);
    
    if(tmp == NULL)
    {
        printf("Nao foi possivel alocar memoria ");
        exit(FALTAMEMO2);
    }
    
    vv=tmp; /* Entender melhor isso */

    if(sz>maxv)    
        for(i=0; i<maxv; i++)
        {
            printf("Digite valor do indice %d: ", i);
            scanf("%d", &vv[i]);
        }
    
    maxv = sz;
 
    for(i=0; i<maxv; i++)
        printf("vv[%d] = %d: ", i, vv[i]);

    free(vv);
    return EXIT_SUCCESS;
}
