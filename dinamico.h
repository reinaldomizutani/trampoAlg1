#include<stdio.h>
#include<stdlib.h>
#include<string.h>


// fila generica para armazenar:
//  - livros emprestados pelos usuários nos nós dos usuários
//  - usuários que emprestaram os livros nos nós dos livros
// Deve-se armazenar 'nusp' na variável 'num', caso esteja no 'acervo'
// Deve-se armazenar 'isbn' na variavel 'num', caso esteja em 'usuarios'
typedef struct{
    int num;
    int *inicio, *fim;
}fila;


// nó genérico para armazenamento dos usuários da biblioteca
typedef struct bloco{
    char* nome;
    int nusp;
    char* telefone;
    char* email;
    struct bloco* prox, *ant;
    fila *inicio, *fim; // PODE DAR MERDAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
} noUsuarios;

// ponteiros para inicio e fim da lista de usuarios
typedef struct{
    noUsuarios* inicio, *fim;
} usuario;


// nó genérico para armazenamento dos livros no acervo da biblioteca
typedef struct bloco2{
    char *titulo;
    char *autor;
    int isbn;
    char* editora;
    int ano;
    int edicao;
    int qtd;
    struct bloco *prox, *ant;
    fila *inicio, *fim; // PODE DAR MERDAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
}noLivro;

// ponteiros para o início e para o fim do catálogo de livros
typedef struct{
    noLivros* inicio, *fim;
} livros;

// ------------------------------------------------------
// FUNÇÕES
// ------------------------------------------------------

// Função para leitura de strings. Lê entrada do teclado até encontrar '/n';
char *lerstr();

// procura por usuários duplicados no banco de dados.
//int duplicadosUsuarios(char *nome, char *telefone, char *email, int *nusp);

// função para criar lista de usuarios
void criaUsuarios();

//funcao para criar acervo
void criaAcervo();

// Função para cadastrar usuários;
void cadastraUsuarios(char *nome, char *telefone, char *email, int *nusp);

// Função para buscar livros duplicados
int duplicadoLivros(char *titulo, char *autor, int *isbn, char *editora, int *ano, int *edicao);

// Função para adicionar livros duplicados no acervo
adicionaDuplicado(int *isbn);

// Função para adicionar livros no acervo;


//case 2:
duplicadoLivros(&titulo, &autor, &isbn, &editora, &ano, &edicao);
adicionaDuplicado(&isbn);
adicionaLivro(&titulo, &autor, &isbn, &editora, &ano, &edicao);

//case 3:
livroDisponivel(&isbn);
retiraLivro(&nusp, &isbn);
adicionaEspera(&nusp, &isbn);


removeLivro();
removeUsuario();