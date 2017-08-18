#include<stdio.h>

int calculadora(int num1, int num2, int operador){
float resultado;
//soma
if(operador == 1)	resultado = num1 + num2;
//subtração
if(operador == 2)	resultado = num1 - num2;
//multiplicação
if(operador == 3)	resultado = num1 * num2;
//divisão
if(operador == 4)	resultado = num1 / num2;

	return resultado;
}

int main(){
	int n1, n2, tipoOperador;
	
	printf("Numero 1: ");
	scanf("%d", &n1);
	printf("Numero 2: ");
	scanf("%d", &n2);
	printf("Tipo da operação: ");
	scanf("%d", &tipoOperador);
	
	float x = calculadora(n1, n2, tipoOperador);
	printf("%f", x);
}

