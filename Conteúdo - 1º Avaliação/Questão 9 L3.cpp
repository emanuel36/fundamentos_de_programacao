#include<stdio.h>

int main(){
	
	float sm, ht, nd, hx;
	
	printf("Sal�rio m�nimo: ");
	scanf("%f", &sm);
	
	printf("Horas trabalhadas: ");
	scanf("%f", &ht);
	
	printf("N�mero de dependentes: ");
	scanf("%f", &nd);
	
	printf("Horas extras: ");
	scanf("%f", &hx);
	
	float sb;
	float sme;
	float vht;
	float vhx;
	
	vht = (0.5*sm);
	sme = (ht * vht);
	vhx = (vht * 0.5);
	sb = (sme + (nd * 32) + vhx);
	
	printf("O salario bruto �: %f \n", sb);
	
	float irrf;
	
	if(sb<200){
		printf("ISENTO \n");
	}
	else if(sb>= 200 && sb<500){
		irrf = sb * 0.1;
		printf("O Imposto de renda �: %f \n", irrf);
	}
	else if(sb>500){
		irrf = sb * 0.1;
		printf("O imposto de renda �: %f \n", irrf);
	}
	float sl;
	float gra;
	float slr;
	
	sl = sb - irrf;
	
	printf("Salario liquido: %f \n", sl);
	
	if (sl<=350){ 
		gra = 100;
	}
	if (sl>350){
		gra=50;
	}
	
	slr = sl + gra;
	printf("Salario a receber: %f \n", slr);
}

