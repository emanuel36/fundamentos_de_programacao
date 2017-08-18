#include<stdio.h>

int main(){
	int matriz[9][9];
	int i = 0, soma = 0;
	
	for(int k = 0; k < 9; k++){
		for(int l = 0; l < 9; l++){
			printf("Elemento matriz[%d][%d]: ", k, l);
			scanf("%d", &
			matriz[k][l]);
		}
	}
	
	while(i < 9){
		for(int j = 0; j < 9; j++){
			soma = matriz[i][j] + soma;
		}
		i = i + 2;
	}
	printf("Soma dos elementos das linhas pares: %d", soma);
}
