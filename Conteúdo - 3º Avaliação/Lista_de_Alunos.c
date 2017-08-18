#include<stdio.h>
#include<string.h>

typedef struct{
	int matricula;
	char nome[100];
	int nota1;
	int nota2;
	int nota3;
}Aluno;

void inicializarListaAlunos(Aluno listaAlunos[], int tamanho){
	int i;
	for(i = 0; i < tamanho;  i++){
		printf("MATRICULA: ");
		scanf("%d", &listaAlunos[i].matricula);
		
		printf("NOME: ");
		scanf("%s", listaAlunos[i].nome);
		
		printf("NOTA 1: ");
		scanf("%d", &listaAlunos[i].nota1);
		
		printf("NOTA 2: ");
		scanf("%d", &listaAlunos[i].nota2);
		
		printf("NOTA 3: ");
		scanf("%d", &listaAlunos[i].nota3);
	}
}

void ordenaNome(Aluno listaAlunos[], int tamanho){
	Aluno anterior;
	int i, j, pos;
	
	for(i = 0; i < tamanho; i++){
		for(j = i + 1; j < tamanho; j++){
			pos = strcmp(listaAlunos[i].nome, listaAlunos[j].nome);
			if(pos > 0){
				anterior = listaAlunos[i];
				listaAlunos[i] = listaAlunos[j];
				listaAlunos[j] = anterior;
			}
		}
	}
}

void ordenaMedia(Aluno listaAlunos[], int tamanho){
	Aluno anterior;
	int i, j;
	float media1, media2;
	
	for(i = 0; i < tamanho; i++){
		for(j = i + 1; j < tamanho; j++){
		
			media1 = (listaAlunos[i].nota1 + listaAlunos[i].nota2 + listaAlunos[i].nota3) / 3;
		    media2 = (listaAlunos[j].nota1 + listaAlunos[j].nota2 + listaAlunos[j].nota3) / 3;
		    
			if(media2 < media1){
				anterior = listaAlunos[i];
				listaAlunos[i] = listaAlunos[j];
				listaAlunos[j] = anterior;
			}
		}
	}
}

void imprimeAluno(Aluno aluno){
	
	printf("Matricula: %d\n", aluno.matricula);
	printf("Nome: %s\n", aluno.nome);
	printf("Nota 1: %d\n", aluno.nota1);
	printf("Nota 2: %d\n", aluno.nota2);
	printf("Nota 3: %d\n", aluno.nota3);
}

void imprimirListaAlunos(Aluno listaAlunos[], int tamanho, int tipoOrdenacao){
	int i;
	if(tipoOrdenacao == 1){
		ordenaNome(listaAlunos, tamanho);
		for(i = 0; i < tamanho; i++){
			imprimeAluno(listaAlunos[i]);
		}
	} else {
		ordenaMedia(listaAlunos, tamanho);
		for(i = 0; i < tamanho; i++){
			imprimeAluno(listaAlunos[i]);
		}
	}
}

Aluno buscarAluno(Aluno listaAlunos[], int tamanho, int matriculaBuscar){
	int i;
	Aluno a;
	a.matricula = -1;
	
	for(i = 0; i < tamanho; i++){
		if(matriculaBuscar == listaAlunos[i].matricula){
			a = listaAlunos[i];
		}
	}
	return a;	
}

Aluno editarAluno(Aluno listaAlunos[], int tamanho, int matriculaBuscar){
	int i, editou = 0;
	for(i = 0; i < tamanho; i++){
		if(matriculaBuscar == listaAlunos[i].matricula){
			printf("MATRICULA: ");
			scanf("%d", &listaAlunos[i].matricula);
		
			printf("NOME: ");
			scanf("%s", listaAlunos[i].nome);
				
			printf("NOTA 1: ");
			scanf("%d", &listaAlunos[i].nota1);
		
			printf("NOTA 2: ");
			scanf("%d", &listaAlunos[i].nota2);
		
			printf("NOTA 3: ");
			scanf("%d", &listaAlunos[i].nota3);
			
			editou = 1;
		}
	}
	if(editou == 1){
		printf("ALUNO EDITADO COM SUCESSO!");
	} else {
		printf("ALUNO NAO ENCONTRADO.");
	}
}

printMenu(){
	printf("--- Menu ---\n");
	printf("1 - inicializar lista de alunos\n");
	printf("2 - imprimir lista de alunos\n");
		printf("\t1 - imprimir ordenado por nome\n");
		printf("\t2 - imprimir ordenado por media\n");
	printf("3 - Buscar aluno por matricula\n");
	printf("4 - Editar aluno\n");
	printf("5 - Sair\n");
}

int main(){
	printf("-------LISTA DE ALUNOS - FUP --------\n");
	int tamanho, opcao = 1, matricula;
	
	printf("DIGITE O NUMERO DE ALUNOS: ");
	scanf("%d", &tamanho);
	
	Aluno listaAlunos[tamanho];
	
	while(opcao > 0 & opcao < 5){
		printMenu();
		
		printf("DIGITE UMA OPCAO: ");
		scanf("%d", &opcao);
		
		if(opcao == 1){
			inicializarListaAlunos(listaAlunos, tamanho);
		}
		if(opcao == 2){
			printf("DIGITE A OPCAO SECUNDÁRIA: ");
			scanf("%d", &opcao);
			if(opcao == 1){
				imprimirListaAlunos(listaAlunos, tamanho, 1);
			} 
			if(opcao == 2){
				imprimirListaAlunos(listaAlunos, tamanho, 2);
			}
		}
		if(opcao == 3){
			printf("BUSCAR ALUNO, DIGITE A MATRICULA: ");
			scanf("%d", &matricula);
			Aluno a = buscarAluno(listaAlunos, tamanho, matricula);
			imprimeAluno(a);
		}
		if(opcao == 4){
			printf("EDITAR ALUNO, DIGITE A MATRICULA: ");
			scanf("%d", &matricula);
			editarAluno(listaAlunos, tamanho, matricula);
		}
	}
}
