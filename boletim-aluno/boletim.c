#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Portuguese");
	int codigo;
	float n1, n2, n3, media;
	printf("Digite o código do aluno: ");
	scanf("%d", &codigo);
	printf("\nDigite a nota 1: ");
	scanf("%f", &n1);
	printf("Digite a nota 2: ");
	scanf("%f", &n2);
	printf("Digite a nota 3: ");
	scanf("%f", &n3);	
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
	printf("Código do aluno %d \n\n", codigo);
	printf("Nota 1: %f \n", n1);
	printf("Nota 2: %f \n", n2);
	printf("Nota 3: %f \n\n", n3);
	printf("Média: %f \n", media);
	printf("Situação: ");
		if (media>=5) { 							// SE a média for maior OU igual a 5...
		printf("APROVADO");							// Alegria!
		}
		else { 										// SE NÃO, hora de chorar!
		printf("REPROVADO");
		}
	printf("\n\n"); 								
	system("PAUSE"); 								// Para que eu consiga ler os resultados na tela, sem o programa finalizar
}