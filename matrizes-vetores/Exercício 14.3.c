/* 14.3 Preencher um vetor B de 10 elementos com 10 se o índice do elemento for ímpar, e 20 se for par.
Escrever o vetor B após o seu total preenchimento. */

// Aluno: Heitor Silva Avila

#include <stdio.h>	// Inicializando o I/O
#include <stdlib.h>	// Para uso do systempause
#include <locale.h>	// Corrigir acentuação

int main () { 
	setlocale(LC_ALL,"Portuguese");	// Corrigir acentuação
	int vetor[9], a = 0, b = 0;		// Vetor de 10 posições
	for (a = 0; a < 10; a++) {		// Repetição para obter valores
		if (a % 2 == 0) {
			vetor[a]=20;
		}
		else {
			vetor[a]=10;
		}
	}
	printf("Vetor: ");
	for (a = 0; a < 10; a++) {		// Variável auxiliar
		printf("%d ", vetor[a]);	// Saída de dados
	}
	printf("\n");					// Quebra de linha estética
	system("PAUSE");				// Evita encerramento acidental
}
