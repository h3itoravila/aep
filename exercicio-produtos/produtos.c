/* Escreva um algoritmo que leia 50 valores que representem
preços de produtos. Escreva o valor do produto mais caro e
dê um desconto de 12% para o produto mais barato. */

#include <stdio.h>	// Inicialização de IO no programa.
#include <locale.h> // Corrigir acentuação e definir local.

int main () { 
	// Aluno: Heitor Silva Avila
	setlocale(LC_ALL, "Portuguese");
	// Corrigir acentuação por meio da biblioteca de local.
	int i;
	// Variável de controle usada para varrer o vetor.
	float valores[49];
	// Vetor com 50 posições para armazenar valores.
	float teste, maior, menor;
	// Para o primeiro produto usarei comandos fora da repetição.
	printf("Digite o valor do produto 1: R$");
	// Solicito ao usuário que digite o valor do produto 1.
	scanf("%f", &valores[0]);
	// E irei atualizar o valor das variáveis para os testes futuros.
	maior = valores[0];
	// Como não existem valores prévios, maior e menor assume esse valor.
	menor = maior;
	// Repetição para os demais 49 valores.
	for (i=1; i<50; i++) {
		// Variável de controle i varrendo as 49 posições do vetor.
		printf("Digite o valor do produto %d: R$", i+1);
		// +1 usado para corrigir intervalo 0-49 para 1-50 no front-end.
		scanf("%f", &valores[i]);
		// Variável auxiliar para testar os menores.
		teste = valores[i];
		// Escanear os valores e armazenar na respectiva posição de memória.
		if (teste > maior) {
		// Se o número lido for maior que a variável maior.
		maior = valores [i];
		// Então a variável maior irá assumir o valor lido.
		}
		if (teste < menor) {
		// Se o número lido for menor que a variável menor.
		menor = teste;
		// Então a variável menor irá assumir o valor lido.
		}
	}
	printf("O produto mais caro custa: R$%f \n", maior);
	// Escrevendo o valor do produto mais caro.
	printf("\nO produto mais barato custa R$%f \n", menor);
	// Aplicando desconto de 12%
	printf("Desconto de: R$%f \n", menor*0.12);
	// Escrevendo o desconto concedido.
	printf("Valor final do mais barato: R$%f \n", menor*0.88);
	// Exibindo o valor do produto mais barato.
}
