#include "dinamico.h"

// Função para leitura de strings. Lê entrada do teclado até encontrar '/n';
char *lerstr(){
    int a=0;
    char aux, *vetor=NULL;
    scanf(" %c", &aux);
    while(aux!='\n'){
        vetor = (char*)realloc(vetor, (a+1)*sizeof(char));
        vetor[a]=aux;
        a++;
        aux=getchar();
    }
    vetor[a]='\0';
    return vetor;
}

// procura por usuários duplicados no banco de dados.
//int duplicadosUsuarios(char *nome, char *telefone, char *email, int *nusp);

// função para criar lista de usuarios
void criaUsuarios(){
    
}

//funcao para criar acervo
void criaAcervo();

// Função para cadastrar usuários;
void cadastraUsuarios(char *nome, char *telefone, char *email, int *nusp);