#include<stdio.h>

int main(){
	int matriz[6][3];
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 3; j++){
			printf("Elemento Matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	int maior;
	for(int i = 0; i < 6; i++){
		maior = 0;
		for(int j = 0; j < 3; j++){
			if(matriz[i][j] > maior){
				maior = matriz [i][j];
			}
		}
		printf("Maior elemento da linha %d: %d \n", i, maior);
	}

	int maiorC;
	for(int j2 = 0; j2 < 3; j2++){
		maiorC = 0;
		for(int i2 = 0; i2 < 6; i2++){
			if(matriz[i2][j2] > maiorC){
				maiorC = matriz [i2][j2];
			}
		}
		printf("Maior elemento da coluna %d: %d \n", j2, maiorC);
	}
}


