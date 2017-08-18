#include<stdio.h>

int main(){
	
	int pecas;
	float salario;
	
	printf("Pecas fabricadas: ");
	scanf("%d", &pecas);
	
	if( pecas<=500){
		salario = 440;
	}
	if(pecas>500 && pecas<=750){
		salario = 440 + (pecas - 500)*0.50;
	}
	if(pecas>750){
		salario = 440 +(pecas - 750)*0.75;
	}
	
	printf("Salario: %f", salario);
}
