#include<stdio.h>
#include<string.h>

int tamanho(char string[]){
	int i;
	for(i = 0; string[i] != '\0'; i++);
	return i;
}

void acoplar(char string1[], char string2[]){
	int i, j = 0;
	int tam = tamanho(string1);
	
	for(i = tam; string2 != '\0'; i++, j++){
		string1[i] = string2[j];
	}
	string1[i] = '\0';
}

int ordenar(char string1[], char string2[]){
	int i;
	for(i = 0; string1[i] != '\0' && string2[i] != '\0'; i++){
		if(string1[i] < string2[i]) return 1;
		if(string2[i] < string1[i]) return -1;
	}
	if(string1[i] == '\0' && string2 [i] == '\0') return 0;
	if(string1[i] == '\0') return 1;
	else if(string2[i] == '\0') return -1;
}

void imprimeString( char string[] ){
    int i;
    for( i = 0; string[ i ] != '\0'; i++ ){
        printf( "%c", string[ i ] );
    }
}

void imprime2(char string[]){
	printf("%s", string);
}

int main(){
	char string1[30], string2[30];
		
		printf("Digite a string 1: ");
		scanf("%s", string1);
		
		imprime2(string1);
		
		printf("Digite a string 2: ");
		scanf("%s", string2);
	
		acoplar(string1, string2);	
		imprimeString(string1);
		int x = ordenar(string1, string2);
		if(x > 0) printf("%s - %s", string1, string2);
		else if(x < 0) printf("%s - %s", string2, string1);
		else printf("São Iguais");		
}
