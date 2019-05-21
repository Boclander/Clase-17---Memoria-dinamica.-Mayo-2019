#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{
    int* pNumeros;
    int* pBuffer;
    int i;

    pNumeros=(int*)malloc(sizeof(int)*T);

    if(pNumeros != NULL)
    {
        for(i=0; i<T; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", pNumeros+i);
        }
        for(i=0; i<T; i++)
        {
            printf("%d\n", *(pNumeros+i));
        }
    }
    system("pause");

    pBuffer=(int*)realloc(pNumeros, sizeof(int)*T+5);
    if(pBuffer != NULL)
    {
        pNumeros=pBuffer;
        if(pNumeros != NULL)
        {
            free(pBuffer);
            for(i=T; i<T+5; i++)
            {
                printf("Ingrese un numero: ");
                scanf("%d", pNumeros+i);
            }
            for(i=0; i<T+5; i++)
            {
                printf("%d\n", *(pNumeros+i));
            }
        }
    }
    else
    {
        printf("No queda espacio!");
    }


    return 0;
}
