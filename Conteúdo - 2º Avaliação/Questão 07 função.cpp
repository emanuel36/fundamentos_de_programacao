#include<stdio.h>

int primo( int num ){
	int pri = 1, contador = 2;
	
	while (contador < num){
		int resto = num%2;
		if(resto == 0){
		pri = 0;
		}
		contador++;
	}
	return pri;
}
int main(){
	int n;
	printf("Numero: ");
	scanf("%d", &n);
	
	int x = primo (n);
	if(x == 1){
		printf("Primo");
	} else {
		printf("Nao primo");
	}
}

