#include <stdio.h>

int main()
{
    int moradores = 50, count_A = 0, count_B = 0, count_C = 0, count_M = 0, count_V = 0, count_N = 0;
    char mais_usado_elevador, mais_usado_periodo, maior_fluxo_elevador, maior_fluxo_periodo;

    for (int i = 1; i <= moradores; i++)
    {
        char elevador, periodo;

        printf("Informe o elevador mais utilizado pelo morador %d (A/B/C): ", i);
        scanf(" %c", &elevador);

        printf("Informe o período de utilização (M/V/N) pelo morador %d: ", i);
        scanf(" %c", &periodo);

        switch (elevador)
        {
        case 'A':
            count_A++;
            break;
        case 'B':
            count_B++;
            break;
        case 'C':
            count_C++;
            break;
        default:
            printf("Elevador inválido. Tente novamente.\n");
            i--; 
            continue;
        }

        switch (periodo)
        {
        case 'M':
            count_M++;
            break;
        case 'V':
            count_V++;
            break;
        case 'N':
            count_N++;
            break;
        default:
            printf("Período inválido. Tente novamente.\n");
            i--; 
            continue;
        }
    }

    if (count_A >= count_B && count_A >= count_C)
    {
        mais_usado_elevador = 'A';
        maior_fluxo_elevador = count_A;
    }
    else if (count_B >= count_A && count_B >= count_C)
    {
        mais_usado_elevador = 'B';
        maior_fluxo_elevador = count_B;
    }
    else
    {
        mais_usado_eelevador = 'C';
        maior_fluxo_elevador = count_C;
    }

    if (count_M >= count_V && count_M >= count_N)
    {
        maior_fluxo_periodo = 'M';
        maior_fluxo_periodo = count_M;
    }
    else if (count_V >= count_M && count_V >= count_V)
    {
        mais_usado_periodo = 'V';
        maior_fluxo_periodo = count_V;
    }
    else
    {
        mais_usado_periodo = 'N';
        maior_fluxo_periodo = count_N;
    }

    int menor_fluxo = (count_A <= count_B && count_A <= count_C) ? count_A : (count_B <= count_A && count_B <= count_C) ? count_B
                                                                                                                        : count_C;

    float diferenca_percentual = 100.0 * (maior_fluxo_elevador - menor_fluxo) / moradores;

    int total_fluxo_medio = (count_A + count_B + count_C) - maior_fluxo_elevador;
    float percentagem_fluxo_medio = 100.0 * total_fluxo_medio / moradores;

    printf("O elevador mais usado é o elevador %c no período %c.\n", mais_usado_elevador, mais_usado_periodo);
    printf("O elevador mais frequentado é o elevador %c no período %c.\n", (count_A >= count_B && count_A >= count_C) ? 'A' : (count_B >= count_A && count_B >= count_C) ? 'B'
                                                                                                                                                                         : 'C',
           (count_M >= count_V && count_M >= count_N) ? 'M' : (count_V >= count_M && count_V >= count_N) ? 'V'
                                                                                                         : 'N');
    printf("Diferença percentual entre o mais usado e o menos usado: %.2f%%\n", diferenca_percentual);
    printf("Percentagem sobre o total de serviços prestados do elevador de média utilização: %.2f%%\n", percentagem_fluxo_medio);
}