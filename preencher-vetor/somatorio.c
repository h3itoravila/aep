#include <stdio.h>	// Inicializando o I/O
#include <stdlib.h>	// Para uso do systempause
#include <locale.h>	// Corrigir acentuação

int main () { 
	setlocale(LC_ALL,"Portuguese");	// Corrigir acentuação
	int vetor[9], a = 0, b = 0;		// Vetor de 10 posições
	for (a = 0; a < 10; a++) {		// Repetição para obter valores
		vetor[a]=(a+1)*10;				// Valores definidos no código
	}
	printf("Vetor: ");
	for (a = 0; a < 10; a++) {		// Variável auxiliar
		printf("%d ", vetor[a]);	// Saída de dados
	}
	printf("\n");					// Quebra de linha estética
	system("PAUSE");				// Evita encerramento acidental
}
