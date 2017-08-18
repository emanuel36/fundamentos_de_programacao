#include<stdio.h>

int fat( int num ){
	int fatorial = 1, contador = 1;
	
	while(contador <= num){
		fatorial = contador * fatorial;
		contador ++;
	}
	return fatorial;
}

int main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	 
	int x = fat  (n);
	printf("Fatorial: %d", x);
}
