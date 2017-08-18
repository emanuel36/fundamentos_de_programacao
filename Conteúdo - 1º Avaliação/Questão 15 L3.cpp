#include<stdio.h>

int main(){
	
	float np;
	float ntr;
	float nte;
	float nex;
	float mp;
	
	printf("Nota do projeto: ");
	scanf("%f", &np);
	
	printf("Nota do trabalho: ");
	scanf("%f", &ntr);
	
	printf("Nota do teste: ");
	scanf("%f", &nte);
	
	printf("Nota do exame final: ");
	scanf("%f", &nex);
	
	np = (np*0.25) + (ntr*0.1) + (nte*0.2) + (nex*0.45);
	
	if(mp>8 && np>9.5 && nex>7.5){
		printf("Aluno Aprovado \n");
		printf("Média: \n", np);
	}
	else{
		printf("Aluno reprovado");
	}
}
