#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <omp.h>
#include <time.h>

void calcularPi(int inicio, int quantidadeTermos, double *resultado, int numeroThreads){
    clock_t tempoInicio, tempoFim;
    tempoInicio = clock();

    double valorPi = 0.0;

    #pragma omp parallel for num_threads(numeroThreads) reduction(+ : valorPi)
    for (int i = inicio; i < inicio + quantidadeTermos; i++)
    {
        valorPi += pow(-1, i) / (2.0 * i + 1);
    }

    valorPi *= 4;
    *resultado = valorPi;
    tempoFim = clock();
    double segundos = ((double)tempoFim - tempoInicio) / CLOCKS_PER_SEC;
    printf("Execução em %d threads e %f segundos\n", numeroThreads, segundos);
}

int main(){
    
    int inicio = 0;
    int quantidadeTermos;
    double resultadoPi;
    int numeroThreads;

    scanf("%d", &quantidadeTermos);
    scanf("%d", &numeroThreads);

    calcularPi(inicio, quantidadeTermos, &resultadoPi, numeroThreads);
    printf("Valor de Pi: %.16g\n", resultadoPi);

    return 0;
}
