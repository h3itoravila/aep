/* 14.3 Preencher um vetor B de 10 elementos com 10 se o �ndice do elemento for �mpar, e 20 se for par.
Escrever o vetor B ap�s o seu total preenchimento. */

// Aluno: Heitor Silva Avila

#include <stdio.h>	// Inicializando o I/O
#include <stdlib.h>	// Para uso do systempause
#include <locale.h>	// Corrigir acentua��o

int main () { 
	setlocale(LC_ALL,"Portuguese");	// Corrigir acentua��o
	int vetor[9], a = 0, b = 0;		// Vetor de 10 posi��es
	for (a = 0; a < 10; a++) {		// Repeti��o para obter valores
		if (a % 2 == 0) {
			vetor[a]=20;
		}
		else {
			vetor[a]=10;
		}
	}
	printf("Vetor: ");
	for (a = 0; a < 10; a++) {		// Vari�vel auxiliar
		printf("%d ", vetor[a]);	// Sa�da de dados
	}
	printf("\n");					// Quebra de linha est�tica
	system("PAUSE");				// Evita encerramento acidental
}
