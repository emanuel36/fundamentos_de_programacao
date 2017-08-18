#include<stdio.h>
#include<string.h>

typedef struct{
	int id;
	char marca[20];
	char fabricante[20];
	char placa[8];
	char cor[10];
	char dono[30];
	char endereco[25];
	char email[20];
	}Carro;

int contadorId = 1;

void inicializar(Carro c[]){
	int i;
	for(i = 0; i < 10; i++){
		c[i].id = -1;
	}
	printf("Agenda de carros Inicializada \n\n");
}

Carro lerCarro(){
	printf("Digite as informações do carro\n");
	
	Carro c;
	
	c.id = contadorId;
	
	printf("Marca: ");
	scanf("%s", c.marca);
	
	printf("Fabricante: ");
	scanf("%s", c.fabricante);
	
	printf("Placa: ");
	scanf("%s", c.placa);
	
	printf("Cor: ");
	scanf("%s", c.cor);
	
	printf("Dono: ");
	scanf("%s", c.dono);
	
	printf("Endereco: ");
	scanf("%s", c.email);
	
	printf("Email do dono: ");
	scanf("%s", c.email);
	
	contadorId++;
	
	return c;
}

void adicionarCarro(Carro c[]){
	int i, adicionei = 0;
	Carro novoCarro = lerCarro();
	for(i = 0; i < 10; i++){
		if(c[i].id == -1){
		c[i] = novoCarro;
		adicionei = 1;
		break;
		}
		if (adicionei == 1){
			printf("Carro adicionado com sucesso!\n\n");
		} else {
			printf("Agenda cheia, impossível  adicionar!\n\n");
		}
	}
}

void apagarCarro(Carro c[], int id){
	int i, encontrei = 0;
	for(i = 0; i < 10; i++){
		if(c[i].id == id){
			c[i].id = -1;
			encontrei = 1;
		}
	}
	if(encontrei == 1){
		printf("\n\nCarro apagado com sucesso!\n\n");
	} else {
		("\n\nCarro não encontrado.\n\n");
	}
}

void imprimirCarro(Carro c){
	printf("ID: %s \n", c.id);
	printf("Marca: %s \n", c.marca);
	printf("Fabricante: %s \n", c.fabricante);
	printf("Placa: %s \n", c.placa);
	printf("Cor: %s \n", c.cor);
	printf("Dono: %s \n", c.dono);
	printf("Endereço%s \n", c.endereco);
	printf("Email: %s \n", c.email);
	printf("\n");
}

void imprimirTodos(Carro c[]){
	int i;
	for(i = 0; i < 10; i++){
		if(c[i].id != -1){
			imprimirCarro(c[i]);
		}
	}
}

void buscarPlaca(Carro c[], char placa){
	int i, encontrei = 0;
	for(i = 0; i < 10; i++){
		if(c[i].placa == placa){
			encontrei = 1;
			imprimirCarro(c[i]);
			break;
		}
	}
	if (encontrei == 0){
		printf("\n\nCarro não encontrado\n\n");
	}
}

void buscarId(Carro c[], int id){
	int i, encontrei = 0;
	for(i = 0; i < 10; i++){
		if(c[i].id == id){
			encontrei = 1;
			imprimirCarro(c[i]);
			break;
		}
	}
	if(encontrei == 0){
		printf("Carro não encontrado.");
	}
}

void apagarTudo(Carro c[], int id){
	int i;
	for(i = 0; i < 10; i++){
		c[i].id = -1;
	}
	printf("\n\nTodos os contatos foram apagados com sucesso\n\n");
}

void printMenu(){
	printf("1. Inicializar vetor de carros\n");
	printf("2. Inserir carro\n");
	printf("3. Apagar carro\n");
	printf("4. Listar todos os carros\n");
	printf("5. Buscar carros\n");
	printf("\t5.1 Buscar por placa\n");
	printf("\t5.2 Buscar por id\n");
	printf("6. Apagar tudo\n");
}

int main(){
	Carro c[10];
	int opcao = 1, id;
	char placa;
	
	for( ; opcao <= 5; ){
		printMenu();
		printf("\nDigite uma opcao: \n");
		scanf("%d", &opcao);
		
		while(opcao < 1 || opcao > 6){
			printf("Opcao invalida, digite outra opcao: ");
			scanf("%d", &opcao);
		}
		if(opcao == 1){
			inicializar(c);
		}
		if(opcao == 2){
			adicionarCarro(c);
		}
		if(opcao == 3){
			printf("Digite o numero do id: ");
			scanf("%d", &id);
			apagarCarro(c, id);
		}	
		if(opcao == 4){
			imprimirTodos(c);
		}
		if(opcao == 5){
			printf("\t5.1 Buscar por placa\n");
			printf("\t5.2 Buscar por id\n");
			printf("Digite uma das opcoes: ");
			scanf("%d", &opcao);
			if(opcao == 1){
				printf("Digite a Placa: ");
				scanf("%d", placa);
				buscarPlaca(c, placa);
			}
			if(opcao == 2){
				printf("Digite o ID: ");
				scanf("%s", &id);
				buscarPlaca(c, id);
			}
		}
		if(opcao == 6){
			int i;
			for(i = 0; i < 10; i++){
				c[i].id = -1;
			}
			printf("Agenda Apagada com sucesso!");
		} 		
	}
}
