#include<stdio.h>

int main(){
	
	int h;
	int m;
	int s;
	
	printf( "Digite a(s) hora(s): " );
	scanf("%d", &h);
	
	m = (h * 60);
	s = (h * 3600);
	
	printf( "Minutos: %d \n", m);
	printf( "Segundos: %d \n,", s);
	
	
	
    }
