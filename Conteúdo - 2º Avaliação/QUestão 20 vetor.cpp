#include<stdio.h>

void inicializar(int vetorA[], int vetorB[]){
	printf("\n-----VetorA-----\n");
	for(int i = 0; i < 5 ; i++){
		printf("Elemento vetorA[%d]: ", i);
		scanf("%d", &vetorA[i]);
	}
	printf("\n-----VetorB------\n");
	for(int i = 0; i < 6; i++){
		printf("Elemento vetorB[%d]: ", i);
		scanf("%d", &vetorB[i]);
	}
}

void criarC(int vetorA[], int vetorB[], int vetorC[]){
	for(int i = 0; i < 5; i++){
		vetorC[i] = vetorA[i];
	}
	for(int i = 0; i < 6; i++){
		vetorC[i + 5] = vetorB[i];
	}
}

void ordenar(int vetorC[]){
	int maior;
	for(int i = 0; i < 11;  i++){
		for(int j = i + 1; j < 11; j++){
			if(vetorC[j] < vetorC[i]){
				maior = vetorC[i];
				vetorC[i] = vetorC[j];
				vetorC[j] = maior;
			}	
		}
	}
	for(int k = 0; k < 11; k++){
		printf("%d ", vetorC[k]);
	}
}

int  main(){
	int a[5];
	int b[6];
	int c[11];
	
	inicializar(a, b);
	criarC(a, b, c);
	ordenar(c);
}




