#include<stdio.h>

int  tipoTri(int lado1, int lado2, int lado3){
	int tipo;

	if(lado1 == lado2 && lado2 == lado3){ 
		tipo = 1; //Equilatero
		
	}
	else if(lado1 != lado2 && lado2 != lado3){
		tipo = 2; //Escaleno
		
	} else { 
	tipo = 3; // Isoceles
		
	}
	return tipo;
}


int main(){
	int l1, l2, l3;
	
	printf("Digite os 3 lados: ");
	scanf("%d %d %d", &l1, &l2, &l3);
	
	int x = tipoTri(l1, l2, l3);
	if(x == 1) printf("Equilatero");
	if(x == 2) printf("Escaleno");
	if(x == 3) printf("Isoceles");
}
