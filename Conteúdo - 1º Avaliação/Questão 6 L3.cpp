#include<stdio.h>

int main(){
	
	int x;
	int y;
	int z;
	
	printf("Digite os 3 lados do triangulo: ");
	scanf("%d %d %d", &x, &y, &z);

	if(x==y && x==z){
		printf("O triangulo é equilatero");
}
	else if(x==y||x==z||y==z){
		printf("O triangulo é isoceles");
}
		else printf("O triangulo é escaleno");
}
	

