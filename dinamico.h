#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// ----------------------------------------------
// Structs e typedefs
// ----------------------------------------------
// 1.Usuários
typedef struct jaja{
    int isbn;
    struct jaja *prox;
}noListaEspera;

typedef struct{
    noListaEspera *ini, *fim;
}listaEspera;

typedef struct bla{
    int isbn;
    struct bla *prox;
}noEmprestados;

typedef struct{
    noListaEspera *ini, *fim;
}emprestados;

typedef struct bloco{
    char *nome;
    char *email;
    char *telefone;
    char *nusp;
    listaEspera *espera;
    emprestados *devolver;
    struct bloco *prox;
}noUsuario;

typedef struct{
    noUsuario *ini, *fim;
}Usuarios;

//2. Acervo título, autor, ISBN, editora, ano, edição,
typedef struct Y{
    int nusp;
    struct Y *prox;
}noFilaEspera;

typedef struct{
    noFilaEspera *ini, *fim;
}filaEspera;

typedef struct X{
    char *titulo;
    char *autor;
    int isbn;
    char *editora;
    int ano;
    int edicao;
    int num;
    filaEspera *espera;
    struct X *prox;
}noLivro;

typedef struct{
    noLivro *ini, *fim;
}Acervo;

// ----------------------------------------------
// funcoes TAD
// ----------------------------------------------
void criaUsuario(Usuarios *usuario);
void criaAcervo(Acervo *acervo);
void cadastraUsuario(Usuarios *usuario, char *nome, char *email, char*telefone, char *nusp, int *erro);
int estaVazia(Usuarios *usuario);
void cadastraLivro(Acervo *livro, char *titulo, char *autor, int *isbn, char *editora, int *ano, int *edicao, int *num, int *erro);
int estaVazio(Acervo *acervo);
// ----------------------------------------------
// funcoes auxiliares
// ----------------------------------------------
char *lerstr();
void imprimeUsuarios(Usuarios *usuarios);
int buscaUsuarios(Usuarios *usuario, char *nusp, int *cont);
