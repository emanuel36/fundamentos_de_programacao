#include<stdio.h>

int main(){
	int matriz[3][3];
	int simetrica = 1;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j <  3; j++){
			printf("Matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j <  3; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j <  3; j++){
			if(matriz[i][j] != matriz [j][i]){
				simetrica = 0;
			}
		}
	}
	
	if(simetrica == 1){
		printf("MATRIZ SIMETRICA");
	} else {
		printf("MATRIZ NAO SIMETRICA");
	}	
}


