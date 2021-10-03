/* Escreva um algoritmo que leia o c�digo de um aluno e suas tr�s notas.
Calcule a m�dia ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as duas restantes, 3.
Mostre o c�digo do aluno, suas tr�s notas, a m�dia calculada e a mensagem "APROVADO" se a m�dia for maior ou igual a 5 e "REPROVADO" caso contr�rio. */

// Aluno: Heitor Silva Avila

#include <stdio.h> 	// Inicializando o I/O no meu algoritmo
#include <locale.h> // Carregando uma biblioteca que achei na internet pra exibir a acentua��o corretamente
// Refer�ncia: http://linguagemc.com.br/localizacao-de-programas-com-locale-h/ 

int main () {
	setlocale(LC_ALL, "Portuguese"); 				// Para exibi��o correta dos caracteres em portugu�s
	int codigo;										// Int pois n�mero de matr�cula/c�digo de aluno n�o tem v�rgula
	float n1, n2, n3, media;						// Float pois as notas sim podem ter v�rgula
	printf("Digite o c�digo do aluno: "); 			// Solicitei que o usu�rio digite o c�digo do aluno
	scanf("%d", &codigo);							// Usu�rio ir� digitar o c�digo do aluno, ser� armazenado na vari�vel "codigo"
	printf("\nDigite a nota 1: ");					// Solicitei que o usu�rio digite nota
	scanf("%f", &n1);								// Usu�rio ir� digitar nota, ser� armazenanda na vari�vel correspondente
	printf("Digite a nota 2: ");
	scanf("%f", &n2);
	printf("Digite a nota 3: ");
	scanf("%f", &n3);	
	printf("\nProcessando...\n\n");					// Uma enrola��ozinha b�sica
	if (n1 > n2) { 									// n1 > n2
		if (n2 > n3) { 								// n1 > n2 > n3
			media=((n1*0.4)+(n2*0.3)+(n3*0.3));		// n1 � a maior nota
		}
		else { 										// n2 < n3
			if (n1 > n3) { 
			media=((n1*0.4)+(n2*0.3)+(n3*0.3));		// n1 > n3 > n2					
			}
			else { 									// n3 > n1 > n2
			media=((n1*0.3)+(n2*0.3)+(n3*0.4));
			}
		}
	}
	else { 											// n2 > n1
		if (n1 > n3) { 								// n1 > n3 e n2 > n1
			media=((n1*0.3)+(n2*0.4)+(n3*0.3));		// n2 > n1 > n3
		}
		else  { 									// n3 > n1
			if (n3 > n2) { 							// n3 > n2 > n1
			media=((n1*0.3)+(n2*0.3)+(n3*0.4));							
			}
			else { 									// n2 > n3 > n1
			media=((n1*0.3)+(n2*0.4)+(n3*0.3));
			}
		}
	} 
	printf("C�digo do aluno %d \n\n", codigo);		// Mostrando o c�digo do aluno na tela
	printf("Nota 1: %f \n", n1);					// Exibindo as tr�s notas na tela
	printf("Nota 2: %f \n", n2);
	printf("Nota 3: %f \n\n", n3);
	printf("M�dia: %f \n", media);					// Exibindo a m�dia calculada
	printf("Situa��o: ");							// Para encher lingui�a
		if (media>=5) { 							// SE a m�dia for maior OU igual a 5...
		printf("APROVADO");							// Pode fazer o churrasc�o da alegria
		}
		else { 										// SE N�O, senta e chora
		printf("REPROVADO");
		}
	printf("\n\n"); 								// Quebra de linha meramente est�tico
	system("PAUSE"); 								// Para que eu consiga ler os resultados na tela, sem o programa finalizar
}
