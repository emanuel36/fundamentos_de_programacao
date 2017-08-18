#include<stdio.h>

int main(){
	
	int h;
	int l;
	int c;	
	int v;
	int a;
	
	printf( "Digite a altura: ");
	scanf( "%d", &h);
	
	printf( "Digite a largura: ");
	scanf( "%d", &l);
	
	printf( "Digite o comprimento: ");
	scanf( "%d", &c);
	
	v = (h * l * c);
	a = (2*(h * l) + 2*(h * c) + 2*(c * l));
	
	printf( "Volume: %d \n", v);
	printf( "Area total: %d \n", a);
	
	
	
}
