#include<stdio.h>

int main(){
	
	int fibo1=1;
	int fibo2=1;
	int contador;
	int nesimo;
	int fiboN;
	
	printf("Digite o n_esimo numero: ");
	scanf("%d", &nesimo);
	
	while(contador < nesimo){
		fiboN = fibo1 + fibo2;
		
		fibo1 = fibo2;
		fibo2 = fiboN;
			
		contador++;
	}
	
	printf("%d", fiboN);
}
