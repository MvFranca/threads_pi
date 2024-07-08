# Cálculo Paralelo de Pi Utilizando OpenMP

## Descrição
Este repositório contém um programa escrito em C que calcula o valor de Pi utilizando a série de Leibniz e computação paralela com OpenMP. O objetivo é demonstrar como a computação paralela pode acelerar o cálculo de Pi, dividindo o trabalho entre múltiplas threads.

## Estrutura do Código
O programa principal está contido em um único arquivo C:

``main.c``: Contém o código-fonte para calcular o valor de Pi utilizando a série de Leibniz e OpenMP.
## Como Funciona
O cálculo do valor de Pi é realizado utilizando a série de Leibniz:

O programa permite que o usuário especifique o número de termos a serem calculados e o número de threads a serem usadas para a computação paralela. Ele então executa o cálculo utilizando OpenMP para paralelizar o somatório.
