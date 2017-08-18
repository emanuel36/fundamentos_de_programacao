#include<stdio.h>

int main(){
	
	int anonas;
	int anoatual;
	int idadeanos;
	int idademeses;
	int idadedias;
	int idadesemanas;
	
	printf( "Digite o ano de nascimento: ");
	scanf( "%d", &anonas);
	
	printf( "Digite a ano atual: ");
	scanf( "%d", &anoatual);
	
	idadeanos = (anoatual - anonas);
	idademeses = (idadeanos * 12);
	idadedias = (idademeses * 30);
	idadesemanas = (idadedias / 7);
	
	printf( "Idade em anos: %d \n", idadeanos);
	printf( "Idade em meses: %d \n", idademeses);
	printf( "Idade em dias: %d \n", idadedias);
	printf( "Idade em semanas: %d \n", idadesemanas);
}
