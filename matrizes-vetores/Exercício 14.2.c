/* 14.2 Preencher um vetor A de 10 elementos (�ndices de 0 a 9)
com os n�meros inteiros 10, 20, 30, 40, 50, ... 100.
Escrever o vetor A ap�s o seu total preenchimento. */

// Aluno: Heitor Silva Avila

#include <stdio.h>	// Inicializando o I/O
#include <stdlib.h>	// Para uso do systempause
#include <locale.h>	// Corrigir acentua��o

int main () { 
	setlocale(LC_ALL,"Portuguese");	// Corrigir acentua��o
	int vetor[9], a = 0, b = 0;		// Vetor de 10 posi��es
	for (a = 0; a < 10; a++) {		// Repeti��o para obter valores
		vetor[a]=(a+1)*10;				// Valores definidos no c�digo
	}
	printf("Vetor: ");
	for (a = 0; a < 10; a++) {		// Vari�vel auxiliar
		printf("%d ", vetor[a]);	// Sa�da de dados
	}
	printf("\n");					// Quebra de linha est�tica
	system("PAUSE");				// Evita encerramento acidental
}
