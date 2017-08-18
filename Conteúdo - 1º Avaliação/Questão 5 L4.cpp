#include<stdio.h>

int main(){
	
	int n;
	int primo;
	int contador = 2;
	int resto;
	
	printf("Numero: ");
	scanf("%d", &n);
	
	while (contador<n){
		resto = n % contador;
		contador ++;
		if (resto == 1){
			printf("O numero %d e primo", n);
		} else {
			printf("O numero %d nao e primo", n);
		}
	}
}
