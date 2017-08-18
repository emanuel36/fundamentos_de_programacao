#include<stdio.h>

void inicializa(int lado, int matriz[lado][lado]){
	int i, j;
	for(i = 0; i < lado; i++){
		for(j = 0; j < lado; j++){
			printf("Elemento Matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
}

int verificaLinhas(int lado, int matriz[lado][lado]){
	int res = 0, i, j;
	for(i = 0; i < lado; i++){
		int zero = 0, um = 0;
		for(j = 0; j < lado; j++){
			
			if(matriz[i][j] == 0)        zero++;
			else if(matriz[i][j] == 1)   um++;
	
		if(um == 1 && zero == lado - 1){
			res = 1;
		} else {
		res = 0;
		}
		}
	return res;
	}
}

int verificaColunas(int lado, int matriz[lado][lado]){
	int res = 0, i, j;
	for(i = 0; i < lado; i++){
		int zero = 0, um = 0;
		for(j = 0; j < lado; j++){
			
			if(matriz[j][i] == 0)        zero++;
			else if(matriz[j][i] == 1)   um++;
	
		if(um == 1 && zero == lado - 1){
			res = 1;
		} else {
		res = 0;
		}
		}
	return res;
	}
}

int main(){
	
	int lado;
	printf("LADO: ");
	scanf("%d", &lado);
	
	int a[lado][lado];
	inicializa(lado, a);
	int x = verificaLinhas(lado, a);
	int y = verificaColunas(lado, a);
	if(x == 1 && y == 1){
		printf("MATRIZ PERFEITA");
	} else {
		printf("MATRIZ NAO PERFEITA");
	}
}


