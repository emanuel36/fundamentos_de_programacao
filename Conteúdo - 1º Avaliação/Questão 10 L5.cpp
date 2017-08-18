#include<stdio.h>

int main(){
	
	int nesimo, qtd, contador = 1;
	
	printf(" Qtd quadrados: ");
	scanf("%d", &nesimo);
	
	while(contador < nesimo){
		
		qtd = contador*2;
		contador = qtd;
		
		contador++;
	}
	
	printf("%d", qtd);
}
