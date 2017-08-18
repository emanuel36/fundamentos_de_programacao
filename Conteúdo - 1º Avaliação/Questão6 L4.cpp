#include<stdio.h>

int main(){
	
	int num, numP, resto, contador = 2;
	
	printf("Numero: ");
	scanf("%d", &num);
	
	while(contador < num){
		resto = num % contador;
		if(resto == 1){
			numP = num;	
		}	
	contador++;
	num++;
	}
	printf("%d", numP);
}
