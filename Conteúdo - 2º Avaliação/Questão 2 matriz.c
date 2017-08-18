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
	int soma = -1, i, j;
	for(i = 0; i < lado; i++){
		int somaLinha = 0;
		for(j = 0; j < lado; j++){
			somaLinha = somaLinha + matriz[i][j];	
		}
		if(i == 0){
			soma = somaLinha;
		} else {
			if(soma != somaLinha){
			soma = -1;
			break;
			}
		}
	}
	return soma;
}

int verificaColunas(int lado, int matriz[lado][lado]){
	int soma = -1, i, j;
	for(j = 0; j < lado; j++){
		int somaColunas = 0;
		for(i = 0; i < lado; i++){
			somaColunas += matriz[i][j];
		}
		if(j == 0){
			soma = somaColunas;
		} else{
			if(soma != somaColunas){
				soma = -1;
				break;
			}
		}
	}
	return soma;
}

int verificaDiagonal(int lado, int matriz[lado][lado]){
	int somaDiagonal = 0, i;
	for(i = 0; i < lado; i ++){
		somaDiagonal += matriz[i][i];
	}	
	return somaDiagonal;
}


int main(){
	int lado;
	printf("Lado: ");
	scanf("%d", &lado);
	
	int matriz[lado][lado];
	
	inicializa(lado, matriz);   
	int x = verificaLinhas(lado, matriz);
	int z = verificaColunas(lado, matriz);
	int y = verificaDiagonal(lado, matriz);
	
	if(x != -1 && x == y && x == z){
		printf("A MATRIZ E UM QUADRADO MAGICO");
	} else {
		printf("A MATRIZ NAO E UM QUADRADO MAGICO");
	}
	
}
