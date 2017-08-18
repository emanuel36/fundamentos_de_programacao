#include<stdio.h>

int retangulo( int lado1, int lado2){
	int area = lado1 * lado2;
	int perimetro = (lado1 * 2) + (lado2 * 2);
	
	return area;
	return perimetro;
}

int main(){
	int l1, l2;
	
	printf("Digite os lados: ");
	scanf("%d %d", &l1, &l2);
	
	int a, b = retangulo(l1, l2);
	printf("%d %d", a, b);
}
