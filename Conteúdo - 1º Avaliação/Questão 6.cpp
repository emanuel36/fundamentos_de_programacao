#include<stdio.h>
#include<math.h>

int main(){
	
	int num1;
	int num2;
    int resultado;
    
	printf( "Digite a base: ");
	scanf( "%d", &num1);
	
	printf( "Digite o expoente: ");
	scanf( "%d", &num2);
	
	resultado = pow(num1, num2);
	
	printf( "Resultado: %d", resultado);
	
}
