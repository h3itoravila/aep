/* 14.1 Preencher um vetor X de 10 elementos(�ndices de 0 a 9) com o valor inteiro 30.
Escrever o vetor X,ap�s seu total preenchimento. */

// Aluno: Heitor Silva Avila

#include <stdio.h>	// Inicializando o I/O
#include <stdlib.h>	// Para uso do systempause
#include <locale.h>	// Corrigir acentua��o

int main () { 
	setlocale(LC_ALL,"Portuguese");	// Corrigir acentua��o
	int vetor[9], a = 0;			// Vetor de 10 posi��es
	for (a = 0; a < 10; a++) {		// Repeti��o para obter valores
		vetor[a]=30;				// Valores definidos no c�digo
	}
	printf("Vetor: ");
	for (a = 0; a < 10; a++) {		// Vari�vel auxiliar
		printf("%d ", vetor[a]);	// Sa�da de dados
	}
	printf("\n");					// Quebra de linha est�tica
	system("PAUSE");				// Evita encerramento acidental
}
