#include<stdio.h>

int main(){
	
	int num1;
	int num2;
	
	printf("Digite o numero 1: ");
	scanf("%d", &num1);
	
	printf("Digite u numero 2: ");
	scanf("%d", &num2);
	
	int resto = num1/num2 % 2;
	
	if(resto==0) printf("Numero divisivel");
		else printf("Numero nao divisivel");
			
			}
	

