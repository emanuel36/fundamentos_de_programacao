#include<stdio.h>

int main(){
	
	int nota1;
	int nota2;
	int nota3;
	int nota4;
	int nota5;
	int nota6;
	int media1;
	int media2;
	
	printf("Digite as tres notas do aluno 1: ");
	scanf("%d %d %d", &nota1, &nota2, &nota3);
	media1 = (nota1 + nota2 + nota3) / 3;
	
	printf("Digite as tres notas do aluno 2: ");
	scanf("%d %d %d", &nota4, &nota5, &nota6);
	media2 = (nota4 + nota5 + nota6) / 3;
	
	if (media1>media2) printf("O aluno 1 teve maior desempenho");
    else if (media2>media1) printf("O aluno 2 teve maior desempenho");
}
