//  Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo, negativo ou zero.

// Aluno: Heitor Silva Avila

#include <stdio.h>	// Inicializando o I/O no algoritmo.
#include <locale.h> // Carregando uma biblioteca que achei na internet pra exibir a acentuação corretamente.
// Referência: http://linguagemc.com.br/localizacao-de-programas-com-locale-h/

int main () { 
	setlocale(LC_ALL, "Portuguese"); 	// Para exibição correta dos caracteres em português.
	int numero;
	printf("Digite um número: ");		// Solicitando que o usuário digite um número.
	scanf("%d", &numero);				// Armazenando o número digitado na variável numero.
	if ( (numero % 2) == 0) { 			// Como que sei se é par? Se o módulo (resto) for IGUAL a zero.
	printf("O número é par.\n");			// SE for igual a zero, mostrar para o usuário que é par.
	}
	else { 
	printf("O número é ímpar.\n");		// SE NÃO, vou mostrar que é ímpar.
	}
	if (numero == 0) { 
	printf("O número é zero.\n");			// SE o número for zero, já posso parar por aqui.
	}
	else { 								// SE NÃO for zero, preciso ver se é positivo ou negativo.
		if (numero>0){ 					// SE for maior que zero, já sei que é positivo.
		printf("O número é positivo.\n");
		}
		else {							// SE NÃO, não há mais o que comparar, já sei que é negativo.
			printf("O número é negativo.\n");
		}
	}
	printf("\n"); 		// Vou fazer isso para fins de estética na hora da execução do programa. 
	system("PAUSE"); 	// Vou fazer isso para que eu consiga ler os resultados, sem o programa se fechar.
}
