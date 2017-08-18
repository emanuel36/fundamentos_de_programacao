#include<stdio.h>

void inicializar(int vetorA[], int vetorB[]){
	printf("\n-----VetorA-----\n");
	for(int i = 0; i < 10 ; i++){
		printf("Elemento vetorA[%d]: ", i);
		scanf("%d", &vetorA[i]);
	}
	printf("\n-----VetorB------\n");
	for(int i = 0; i < 7; i++){
		printf("Elemento vetorB[%d]: ", i);
		scanf("%d", &vetorB[i]);
	}
}

void verificar(int vetorA[], int vetorB[]){
	for(int i = 0; i < 7; i++){
		int vezes = 0;
		for(int j = 0; j < 10; j++){
			if(vetorB[i] == vetorA[j]){
				vezes++;
			}
		}
		printf("VetorB[%d] se repete %d vezes. \n", i, vezes);
	}
}

int main(){
	int a[10];
	int b[7];
	
	inicializar(a, b);
	verificar(a, b);
}
