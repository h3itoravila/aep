/* Elabore um algoritmo que, dada a idade de um nadador, classifica-o em uma das seguintes categorias:
	infantil A = 5 - 7 anos
	infantil B = 8 - 10 anos
	juvenil A = 11 - 13 anos
	juvenil B = 14 - 17 anos
	adulto = maiores de 18 anos */
	
// Aluno: Heitor Silva Avila
	
#include <stdio.h> 	// Iniciando o I/O no meu algoritmo.
#include <stdlib.h> // Carregando os principais comandos da linguagem C.
#include <locale.h> // Carregando uma biblioteca que achei na internet pra exibir a acentuação corretamente.
// Referência: http://linguagemc.com.br/localizacao-de-programas-com-locale-h/

int main () {
	setlocale(LC_ALL, "Portuguese"); 					// Para exibição correta dos caracteres em português.
	int idade; 
	printf("Digite a idade do nadador: ");				// Interface de usuário, saída de dados
	scanf("%d", &idade);								// Para classificar, preciso ler os dados
	printf("Processando...\n");							// Pra encher linguiça kkkk
	if (idade < 5) { 									// Se a idade for menor do que 5 anos
	printf("Essa pessoa não pode ser classificada.");	// Printar que não posso classificar
	}
	else {												// Opa, é maior ou igual a 5 anos
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
	printf("\n"); 		// Vou fazer isso para fins de estética na hora da execução do programa. 
	system("PAUSE"); 	// Vou fazer isso para que eu consiga ler os resultados, sem o programa se fechar.
}
