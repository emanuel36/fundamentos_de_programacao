#include<stdio.h>

int main(){
	
	int num, contador = 1;
	int divisao;
	
	printf("Numero: ");
	scanf("%d", &num);
	
	while(contador < num){
		 divisao = num / contador;
		
		if(divisao == contador){
			printf("O numero e quadrado perfeito");

	}
					
			contador++;	
}

}
