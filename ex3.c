#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numeros, seq = 1, seqA = 0, seqAux;

    printf("Quantos termos da sequencia de Fibonacci deseja ver? ");
    scanf("%d", &numeros);

    printf("\n0 ");
    numeros--;

    while (numeros)
    {
        printf("%d ", seq);
        seqAux = seq;
        seq += seqA;
        seqA = seqAux;
        numeros--;
    }

    printf("\n\n");

    return 0;
}