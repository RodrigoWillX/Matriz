#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main (){
	system ("color DA");
	int i,j;
	int mat [3] [3];
	for (i=0; i<3; i++) {
	for (j=0; j<3; j++) {
	printf("Digite o numero \n");
	scanf("%d", &mat[i][j]);
	}
	}
	printf("\n-- Impressao da matriz --)\n");
	for (i0=0; i<3; i++){
	for (j=0; j<3; j++){
		printf("%d", mat[i][j]);
	}
	printf("\n");
	}
	system("PAUSE");
}
	
