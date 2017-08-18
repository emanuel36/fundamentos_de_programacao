#include<stdio.h>
#include<string.h>

/*
 * Agenda de contatos
 * 1. Inicializar vetor de contatos
 * 2. Inserir contato
 * 3. Apagar contato
 * 4. Listar todos os contatos
 * 5. Buscar contato
 *  5.1 Buscar por nome
 *  5.2 Buscar por telefone
 * 6. Ordenar lista de contatos
 *  6.1 Ordenar por nome
 *  6.2 Ordenar por id
 * 7. Apagar todos os contatos
 * 8. Salvar
 * 9. Carregar agenda salva
 * 10. Sair
 *
 * Informações sobre um contato
 *  -id
 *  -nome
 *  -telefone
 *  -endereço
 *  -email
 *
 * */
typedef struct{
    int id;
    char nome[ 50 ];
    char telefone[ 20 ];
    char endereco[ 100 ];
    char email[ 30 ];
}Contato;

int contadorIdentificador;

void printMenu(){
    printf( "Agenda de contatos - FUPEC \n" );
    printf("1. Inicializar vetor de contatos \n");
    printf("2. Inserir contato  \n");
    printf("3. Apagar contato  \n");
    printf("4. Imprimir todos os contatos \n");
    printf("5. Buscar contato \n");
    printf(" 5.1 Buscar por nome \n");
    printf(" 5.2 Buscar por id \n");
    printf("6. Ordenar lista de contatos \n");
    printf(" 6.1 Ordenar por nome \n");
    printf(" 6.2 Ordenar por telefone \n");
    printf("7. Apagar todos os contatos \n");
    printf("8. Salvar \n");
    printf("9. Carregar agenda salva \n");
    printf("10. Sair \n");
}

//Inicializar a agenda com contatos vazios em todas as posições
//A implementação que vamos fazer considera uma posição do vetor vazia se o
//contato nessa posição tiver id == -1
//
//Por exemplo
//
//Posicao 0
//  id = -1
//  nome = ""
//  telefone = ""
//  endereço = ""
//  email = ""
//
//Posicao 1
//  id = -1
//  nome = ""
//  telefone = ""
//  endereço = ""
//  email = ""
//
//  Se o id != -1, significa que essa posição possui um contato salvo
void inicializarAgenda( Contato agenda[], int tamanho ){
    int i;
    for( i = 0; i < tamanho; i++ ){

        //Colocando -1 no identificador de todos os contatos
        agenda[ i ].id = -1;
    }
    contadorIdentificador = 0;
    printf( "Agenda inicializada. \n\n" );
}

//Função que lê informação sobre um contato
//Retorna um struct contendo todas as informações que serão armazenadas na
//agenda
//
//Variável global contatorIdentificador é a variável utilizada para gerenciar
//o identificador de cada contato. Ele deve ser único, por isso, sempre que um
//contato é lido, essa variável é incrementada em 1 unidade.
//  Veja que ao definir um contato com a instrucção Contato c;
//  logo apos atribuímos c.id = contadorIdentificador;
//  
//  Ao terminar a função, a variável contatodrIdentificador é incrementada
//
Contato lerContato(){

    Contato c;

    //Atribuindo o identificar único ao contato
    c.id = contadorIdentificador;
    printf( "Digite as informacoes sobre um contato: " );
    printf( "Digite o nome do contato: " );
    scanf("%s", c.nome );
    printf( "Digite o telefone do contato: " );
    scanf("%s", c.telefone );
    printf( "Digite o endereco do contato: " );
    scanf("%s", c.endereco );
    printf( "Digite o email do contato: " );
    scanf("%s", c.email );
    //Incrementando a variável responsável pelo identificador dos contatos.
    //Assim, garantimos que todos os contatos tem identificadores únicos
    contadorIdentificador++;

    return c;
}

//Imprimindo as informações sobre um contato recebido como parâmetro
void imprimirContato( Contato c ){
    
    printf( "Contato %d \n", c.id );
    printf( "Nome: %s \n", c.nome );
    printf( "Endereco: %s \n", c.endereco );
    printf( "Telefone: %s \n", c.telefone );
    printf( "Email: %s \n\n", c.email );

}

//Imprimindo todos os contatos, chamando a função para imprimir um único
//contato
void imprimirAgenda( Contato agenda[], int tamanho ){
    int i;
    for( i = 0; i < tamanho; i++ ){
        if( agenda[ i ].id != -1 ) imprimirContato( agenda[ i ] ); 
    } 
}

//Função que imprime um contato, utilizando o id recebido como parâmetro
//*** Apagar um contato significa colocar -1 no identificador desse contato.
//Não vamos nos preocupar com as informações armazenadas em outros campos
//desse contato, pois elas serão eventualmente apagadas.
//
//Vamos passar por todos os contatos, verificando se existe um contato com um
//identificador igual ao id recebido como parâmetro na função
//
// Caso exista:
//  1. Imprimimos o contato, para o usuário saber o que está fazendo
//  2. Preguntamos se o usuário realmente deseja apagar o contato
//  3. Caso a resposta seja afirmativa, o id desse contato recebe -1 e
//  utilizamos a variável encontrou para dizer que o contato foi realmente
//  apagado
//  4. Caso o contato tenha sido realmente apagado, imprimimos uma msg
//  informando que o contato foi apagado
void apagarContatoId( Contato agenda[], int tamanho, int id ){

    //Variável utilizada para saber se o contato foi apagado
    int encontrou = 0;
    int i;

    //Passar por todos os contatos existentes na agena
    for( i = 0; i < tamanho; i++ ){

        //Procurando pelo contato correto, usando o id recebido como parâmetro
        if( agenda[ i ].id == id ){
            imprimirContato( agenda[ i ] );

            int confirma;

            printf( "Deseja apagar realmente, mesmo, o contato?" );
            scanf( "%d", &confirma );

            //Confirmando se o usuário deseja apagar o contato
            if( confirma == 1 ){

                //Apagar o contato significa colocar -1 no seu identificador
                agenda[ i ].id = -1;

                //Variável utilizada para informar que um contato foi apagado
                encontrou = 1;
                break;
            }
            
        }
    }

    //Se a variável encontrou == 1, então o contato foi apagado. Informar para
    //o usuário se o contato foi apagado ou não
    if( encontrou == 1 ) printf( "Contato apagado com sucesso." );
    else printf( "Contato não encontrado. \n" );

}

//Buscar um contato utilizando o id.
//
//Passar por todos os contatos da agenda, procurando pelo identificador
//recebido como parâmetro. Caso o identificador seja igual, o contato é
//impresso
//
//Variável encontrou é utilizada para guardar se o contato foi realmente
//encontrado
//  Caso tenha sido, a variável encontrou == 1
void buscarContatoId( Contato agenda[], int tamanho, int id ){

    //Criando um contato vazio. Ele será utilizado depois para imprimir o
    //contato 
    Contato c;

    //Variável encontrou utilizada para verificar se o contato foi encontrado
    int encontrou = 0;

    int i;

    //Verificando na lista de contatos
    for( i = 0; i < tamanho; i++ ){

        //Se existe um contato guardado com id igual ao recebido por parâmetro
        if( agenda[ i ].id == id ){
            //Se encontrar o contato, salva esse contato na variável c
            //Coloca 1 na variável encontrou
            c = agenda[ i ];
            encontrou = 1;
            break;
        }
    }

    //Se o contato tiver sido encontrado, a variável encontrou == 1
    if( encontrou == 1 ) imprimirContato( c );
    else printf( "Contato não encontrado. \n" );
}

//Buscar um contato utilizando o nome.
//
//Passar por todos os contatos da agenda, procurando pelo nome
//recebido como parâmetro. Caso o nome seja igual, o contato é
//impresso
//
//Variável encontrou é utilizada para guardar se o contato foi realmente
//encontrado
//  Caso tenha sido, a variável encontrou == 1
void buscarContatoNome( Contato agenda[], int tamanho, char nome[] ){

    //Contato que vai guardar as informações do contato que estou procurando
    Contato c;

    //Variável para verificar se o contato estiver sido encontrado 
    int encontrou = 0;
    int i;
    for( i = 0; i < tamanho; i++ ){
        //Função que compara duas strings
        //Retorna 0, caso essas strings sejam iguais
        //Semelhante à função compara que fizemos em sala
        //
        //Se id != -1 significa que essa não é uma posição vazia e existe um
        //contato armazenado no posição i
        //
        //Se o resultado da função strcmp == 0, significa que o nome do
        //contato na posição i e o nome passado como parâmetro são iguais
        if( agenda[ i ].id != -1 && 
            strcmp( agenda[ i ].nome, nome ) == 0 ){
            c = agenda[ i ];
            break;
        }
    }


    //Se o contato tiver sido encontrado, a variável encontrou == 1
    if( encontrou == 1 ) imprimirContato( c );
    else printf( "Contato não encontrado. \n" );

}

//Inserir um contato em uma posição vazia
//Para isso, a função percorre toda a agenda procurando por um contato com id
//== -1. Isso significa que nessa posição i não existe contato armazenado
//
//Se encontrar uma posição vazia, o contato é adicionado.
//Caso não encontre, uma mensagem de agenda cheia é apresentada ao usuário.
void inserirContato( Contato agenda[], int tamanho ){

    int i;
    int adicionei = 0;
    //Percorrer toda a agenda procurando por uma posição com id == -1
    for( i = 0; i < tamanho; i++ ){
        //Id == -1 -> posição vazia
        if( agenda[ i ].id == -1 ){

            //Chamando a função lerContato para ler um contato
            Contato novoContato = lerContato();
            //Colocando esse contato lido na posiÇão i do vetor
            agenda[ i ] = novoContato;
            adicionei = 1;
            break;
        }
    }

    //Variável adicionei utilizada para mostrar uma mensagem ao usuário
    if( adicionei == 1 ){
        printf( "Contato adicionado com sucesso. \n\n" );
    } else {
        printf( "Agenda cheia. Apague algum contato" );
    }
}
int main(){
    int opcao = 1;

    //Criando um vetor de 100 elementos do tipo Contato
    int qtdElementos = 100;
    Contato agenda[ qtdElementos ];

    //Laço para aplicação ficar executando enquanto o usuário digitar opções
    //válidas
    while( opcao >= 1 && opcao <= 8 ){
        printMenu();
        printf( "Digite uma opcao: " );
        scanf( "%d", &opcao );
        
        while( opcao < 1 || opcao > 10 ){
            printf( "Voce digitou %d. Opcao invalida. Digite uma opcao: ", opcao );
            scanf( "%d", &opcao );

        }

        //Variavel opcao diz qual a funcionalidade que vou executar
        if( opcao == 1 ) inicializarAgenda( agenda, qtdElementos );
        else if( opcao == 2 ){
            inserirContato( agenda, qtdElementos );    
        }else if( opcao == 3 ){
            printf( "Apagar contato por id. Digite um id: " );
            int id;
            scanf( "%d", &id );
            apagarContatoId( agenda, qtdElementos, id );

        }else if( opcao == 4 ){
            imprimirAgenda( agenda, qtdElementos );    
        }else if( opcao == 5 ){//Buscar contato

            printf( "\tBuscar contato \n");
            printf( "\t\t1 - Buscar por id \n" );
            printf( "\t\t2 - Buscar por nome   " );
            int opcaoBusca;
            scanf( "%d", &opcaoBusca );

            if( opcaoBusca == 1 ){//Buscar por id
                int id;
                printf( "Buscar por Id. Digite um identificador: " );
                scanf( "%d", &id );
                buscarContatoId( agenda, qtdElementos, id );
            } else {
                char nome[ 100 ];
                printf( "Buscar por nome. Digite um nome: " );
                scanf( "%s", nome );
                //Chamando a função que busca o contato pelo nome
                buscarContatoNome( agenda, qtdElementos, nome );
            }
            
        }else if( opcao == 6 ){
        
        }else if( opcao == 7 ){
        
        }





    }
}











