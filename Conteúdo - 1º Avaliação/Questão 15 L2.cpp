#include<stdio.h>

int main(){
	
	int idade;
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
	if(idade=0 || idade<10){
	printf("Criança");
}
	else if(idade>=10 || idade<20){
	printf("Adolecente");
}
	else if(idade>=20 || idade<30){
	printf("Jovem");
}
	else if(idade>=30 || idade<40){
	printf("Adulto");
}
	else if(idade>=40 || idade<50){
	printf("Melhor Idade");
}
	else{
		("Aposentado");
	}

}

