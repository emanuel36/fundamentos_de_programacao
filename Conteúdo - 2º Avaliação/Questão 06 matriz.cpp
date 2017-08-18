#include<stdio.h>

int main(){
	int matriz[3][5];
	int num = 0;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 5; j++){
			printf("Elemento Matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 5; j++){
			printf("%d ", matriz[i][j]);
		}
		printf( "\n" );
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 5; j++){
			if(matriz[i][j] >= 15 && matriz[i][j] <= 20){
			num++;	
			}	
		}
	}
	printf("\n Qtd de numeros entre 15 e 20: %d \n", num);
}
