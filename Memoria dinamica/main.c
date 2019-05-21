#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pNumero;

    pNumero=(int*)malloc(sizeof(int));
    if(pNumero != NULL)
    {
        *pNumero = 9;
        printf("%d", *pNumero);
    }



    return 0;
}
