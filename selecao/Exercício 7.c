//  Fa�a um algoritmo que leia um n�mero inteiro e mostre uma mensagem indicando se este n�mero � par ou �mpar, e se � positivo, negativo ou zero.

// Aluno: Heitor Silva Avila

#include <stdio.h>	// Inicializando o I/O no algoritmo.
#include <locale.h> // Carregando uma biblioteca que achei na internet pra exibir a acentua��o corretamente.
// Refer�ncia: http://linguagemc.com.br/localizacao-de-programas-com-locale-h/

int main () { 
	setlocale(LC_ALL, "Portuguese"); 	// Para exibi��o correta dos caracteres em portugu�s.
	int numero;
	printf("Digite um n�mero: ");		// Solicitando que o usu�rio digite um n�mero.
	scanf("%d", &numero);				// Armazenando o n�mero digitado na vari�vel numero.
	if ( (numero % 2) == 0) { 			// Como que sei se � par? Se o m�dulo (resto) for IGUAL a zero.
	printf("O n�mero � par.\n");			// SE for igual a zero, mostrar para o usu�rio que � par.
	}
	else { 
	printf("O n�mero � �mpar.\n");		// SE N�O, vou mostrar que � �mpar.
	}
	if (numero == 0) { 
	printf("O n�mero � zero.\n");			// SE o n�mero for zero, j� posso parar por aqui.
	}
	else { 								// SE N�O for zero, preciso ver se � positivo ou negativo.
		if (numero>0){ 					// SE for maior que zero, j� sei que � positivo.
		printf("O n�mero � positivo.\n");
		}
		else {							// SE N�O, n�o h� mais o que comparar, j� sei que � negativo.
			printf("O n�mero � negativo.\n");
		}
	}
	printf("\n"); 		// Vou fazer isso para fins de est�tica na hora da execu��o do programa. 
	system("PAUSE"); 	// Vou fazer isso para que eu consiga ler os resultados, sem o programa se fechar.
}
