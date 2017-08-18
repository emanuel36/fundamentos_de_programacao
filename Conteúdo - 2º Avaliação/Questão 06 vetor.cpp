#include<stdio.h>

void primos(int vetor[], int tamanho){
	vetor[0] = 1;
	vetor[1] = 2;

	int x = 2;
	int pri = 1;

	for(int j = 3; j < tamanho; j++){
		for(int i = 2; i < j; i++){
			if(j % i == 0){
				pri = 0;
				break;
			}
		}
		if(pri == 1){
			vetor[x] = j;
			x++;
		}
	}
}

int main(){
	int qtd;
	printf("Quantidade de números primos: ");
	scanf("%d", &qtd);
	
	int a[qtd];
	
	primos(a, qtd);
	
	for(int i = 0; i < qtd; i++){
		printf("%d ", a[i]);
	}	
}
