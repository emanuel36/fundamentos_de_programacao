#include<stdio.h>

int main(){
	
	int n;
	int fat = 1;
	int contador = 2;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	while(contador<=n){
		fat = contador * fat;
		contador ++;
	}	
	printf("Fatorial: %d", fat);
}

