#include<stdio.h>

int main(){
	
	float c;
	float f;

printf( "Digite a temperatura em F: ");
scanf( "%f", &f);

c = (f-32) / 1.8;

printf(" Temperatura em C: %f", c);

}
