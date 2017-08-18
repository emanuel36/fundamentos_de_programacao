#include<stdio.h>
#include<string.h>

typedef struct{
	int id;
	char marca[20];
	char modelo[20];
}Celular;

int contadorID = 1;

void printMenu(){
	printf("1 - Inicializar \n");
	printf("2 - Inserir celular \n");
	printf("3 - Apagar celular \n");
	printf("4 - Imprimir Celular \n");
}

void inicializa(Celular lista[], int tamanho){
	int i;
	for(i = 0; i < tamanho; i++){
		lista[i].id = -1;
	}
	printf("---LISTA INICIALIZADA COM SUCESSO----\n\n");
}

Celular lerCelular(){
	
	Celular l;
	l.id = contadorID;
	
	printf("Digite a marca: ");
	scanf("%s", l.marca);
	
	printf("Digite o modelo: ");
	scanf("%s", l.modelo);
	
	contadorID++;
	
	return l;
}
 
void inserirCelular(Celular lista[], int tamanho){
	int i = 0, add = 0;
	for(i = 0; i < tamanho; i++){
		if(lista[i].id == -1){
			Celular novoCelular = lerCelular();
			lista[i] = novoCelular;
			add = 1;
			break;
		}
	}
	if(add == 1){ 
		printf("Carro inserido!\n");
	} else {
		printf("Lista cheia!\n");
	}
}

void apagarCelular(Celular lista[], int tamanho, int idApagar){
	int i, apagou = 0;
	for(i = 0; i < tamanho; i++){
		if(idApagar == lista[i].id){
			lista[i].id = -1;
			apagou = 1;
		}
	}
	if(apagou == 1){
		printf("Celular apagado!\n");
	} else {
		printf("Celular nao encontrado!\n");
	}
}

void imprimeCelular(Celular lista[], int tamanho, int idImprime){
	int i;
	for(i = 0; i < tamanho; i++){
		if(idImprime == lista[i].id){
			printf("--Celular %d--\n", lista[i].id);
			printf("Marca: %s\n", lista[i].marca);
			printf("Modelo: %s\n", lista[i].modelo);
		}
	}	
}

int main(){
	int tamanho;
	
	printf("TAMANHO DA LISTA: ");
	scanf("%d", &tamanho);
	
	Celular lista[tamanho];
	
	int opcao = 1;
	
	while(opcao > 0 && opcao < 7){

		printMenu();
		
		printf("DIGITE A OPCAO: ");
		scanf("%d", &opcao);
		
		if(opcao == 1){
			inicializa(lista, tamanho);
		}
		if(opcao == 2){
			inserirCelular(lista, tamanho);
		}
		if(opcao == 3){
			int idApagar;
			printf("Apagar contato, id: ");
			scanf("%d", &idApagar);
			apagarCelular(lista, tamanho, idApagar);
		}
		if(opcao == 4){
			int idImprime;
			printf("IMPRIMIR, ID: ");
			scanf("%d", &idImprime);
			imprimeCelular(lista, tamanho, idImprime);
		}
	}
}
