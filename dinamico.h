#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct jaja{
    int isbn;
    struct jaja *prox;
}noListaEspera;

typedef struct{
    noListaEspera *ini, *fim;
}listaEspera;

typedef struct bloco{
    char *nome;
    char *email;
    char *telefone;
    char *nusp;
    listaEspera *espera; // PODE DAR MERDA!!!!
    struct bloco *prox;
}noUsuario;

typedef struct{
    noUsuario *ini, *fim;
}Usuarios;

// funcoes TAD
void criaUsuario(Usuarios *usuario);
void cadastraUsuario(Usuarios *usuario, char *nome, char *email, char*telefone, char *nusp, int *erro);
int estaVazia(Usuarios *usuario);

// funcoes auxiliares
char *lerstr();
