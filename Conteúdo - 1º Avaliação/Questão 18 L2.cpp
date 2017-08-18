#include<stdio.h>

int main(){
	
	int tipocliente;
	float consumo;
	float conta;
	
	printf("Consumo em m3: ");
	scanf("%f", &consumo);
	
	printf("Tipo de cliente: \n");
	printf("\t 1 - Residencial \n");
	printf("\t 2 - Comercial \n");
	printf("\t 3 - Industrial \n");
	scanf("%d", &tipocliente);
	
	if(tipocliente == 1){
	conta = 5+(consumo*0.05);

}	
	else if(tipocliente == 2){
	if(consumo>80)	
	conta = 500 + (consumo - 80)*0.03;
	else conta = 500;
}
	else if(tipocliente == 3){
	if(consumo>100)	
	conta = 800 + (consumo - 100)*0.04;
	else conta = 800;
}
	printf("Conta: %f", conta);
	
}



