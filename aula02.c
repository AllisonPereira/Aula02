#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0, j=0;
	printf("Digite o primeiro valor na tela:\n");
	scanf("%d",&i);
	printf("Digite o segundo valor na tela:\n");
	scanf("%d",&j);
	printf("Resultado: %d \n",i+j);
	
	// pausar codigo
	system ("pause");
}
