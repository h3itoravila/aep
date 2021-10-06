#include <stdio.h>

int main (void) {

	int idade;
	printf("Digite a idade do nadador: ");
	scanf("%d", &idade);
	if (idade < 5) { 									// Se a idade for menor do que 5 anos
	printf("Essa pessoa não pode ser classificada.");	// Printar que não posso classificar
	}
	else {												// É maior ou igual a 5 anos
		printf("Classificação: ");						// Vou printar que vai ser classificado
		if (idade < 8) {								// É menor que 8 anos?
		printf("Infantil A."); 							// SE SIM, Printei a classificação.
		}
		else { 											// SE NÃO, vou seguir comparando.
			if (idade < 11) { 							// É menor do que 11 anos?
			printf("Infantil B.");						// SE SIM, Printei a classificação.
			}
			else { 										// SE NÃO, vou seguir comparando.
				if (idade < 14) { 						// É menor que 14 anos?
				printf("Juvenil A.");					// SE SIM, vou printar a classificação.
				}
				else {									// SE NÃO, vou seguir comparando.
					if (idade < 18) {					// É menor que 18 anos?
					printf ("Juvenil B.");				// SE SIM, vou printar a classificação.
					} 
					else { 								// SE NÃO, vou printar a classificação direto, pois não tem mais nada pra ser comparado.
					printf("Adulto.");
					}
				}
			}	
		}
	}
}
