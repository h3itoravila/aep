/* Escreva um algoritmo que leia o código de um aluno e suas três notas.
Calcule a média ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as duas restantes, 3.
Mostre o código do aluno, suas três notas, a média calculada e a mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" caso contrário. */

// Aluno: Heitor Silva Avila

#include <stdio.h> 	// Inicializando o I/O no meu algoritmo
#include <locale.h> // Carregando uma biblioteca que achei na internet pra exibir a acentuação corretamente
// Referência: http://linguagemc.com.br/localizacao-de-programas-com-locale-h/ 

int main () {
	setlocale(LC_ALL, "Portuguese"); 				// Para exibição correta dos caracteres em português
	int codigo;										// Int pois número de matrícula/código de aluno não tem vírgula
	float n1, n2, n3, media;						// Float pois as notas sim podem ter vírgula
	printf("Digite o código do aluno: "); 			// Solicitei que o usuário digite o código do aluno
	scanf("%d", &codigo);							// Usuário irá digitar o código do aluno, será armazenado na variável "codigo"
	printf("\nDigite a nota 1: ");					// Solicitei que o usuário digite nota
	scanf("%f", &n1);								// Usuário irá digitar nota, será armazenanda na variável correspondente
	printf("Digite a nota 2: ");
	scanf("%f", &n2);
	printf("Digite a nota 3: ");
	scanf("%f", &n3);	
	printf("\nProcessando...\n\n");					// Uma enrolaçãozinha básica
	if (n1 > n2) { 									// n1 > n2
		if (n2 > n3) { 								// n1 > n2 > n3
			media=((n1*0.4)+(n2*0.3)+(n3*0.3));		// n1 é a maior nota
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
	printf("Código do aluno %d \n\n", codigo);		// Mostrando o código do aluno na tela
	printf("Nota 1: %f \n", n1);					// Exibindo as três notas na tela
	printf("Nota 2: %f \n", n2);
	printf("Nota 3: %f \n\n", n3);
	printf("Média: %f \n", media);					// Exibindo a média calculada
	printf("Situação: ");							// Para encher linguiça
		if (media>=5) { 							// SE a média for maior OU igual a 5...
		printf("APROVADO");							// Pode fazer o churrascão da alegria
		}
		else { 										// SE NÃO, senta e chora
		printf("REPROVADO");
		}
	printf("\n\n"); 								// Quebra de linha meramente estético
	system("PAUSE"); 								// Para que eu consiga ler os resultados na tela, sem o programa finalizar
}
