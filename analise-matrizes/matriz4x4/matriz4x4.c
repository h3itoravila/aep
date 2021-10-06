#include <stdio.h> // Inicializando I/O

int main () {
	int ma[4][4], a = 0, b = 0, c = 0, d = 0;
	// Estrutura de repetição para leitura de dados
	for (b = 0; b < 4; b++){
		for (a = 0; a < 4; a++) {
			printf("Linha %d, ", b+1);
			printf("coluna %d: ", a+1);
			scanf("%d",&ma[b][a]);	
		}
		printf("\n");
	}
    // Calculando a primeira soma
    printf("Primeira soma: ");
    for (b = 0; b < 2; b++) {
        for (a = 0; a < 2; a++) {
            c = c + ma[b][a];
        }
    }
    printf("%d \n", c);
    c = 0;
    // Calculando a segunda soma
    printf("Segunda soma: ");
    for (b = 2; b < 4; b++) {
        for (a = 2; a < 4; a++) {
            c = c + ma[b][a];
        }
    }
    printf("%d \n", c);
    c = 0;
    // Calculando a terceira soma
    printf("Terceira soma: ");
    for (b = 0; b < 4; b++) {
        for (a = 0; a < b+1; a++) {
            c = c + ma[b][a];
        }
    }
    printf("%d \n", c);
    c = 0;
    // Calculando a quarta soma
    printf("Quarta soma: ");
    for (b = 0; b < 4; b++) {
        a = b + 1;
        while (a != 4) {
            c = c + ma[b][a];
            a++;
        }
    }
    printf("%d \n", c);
    c = 0;
}
