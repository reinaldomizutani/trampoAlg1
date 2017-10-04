#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50

#define TAM 1000
 // STRUCTS DE ALUNOS
typedef struct{
    char nome[MAX];
    char email[MAX];
    char telefone[MAX];
    char nusp[MAX];
}aluno;

typedef struct{
    char titulo[MAX];
    char autor[MAX];
    char editora[MAX];
    int isbn;
    int edicao;
    int num;
}livro;

typedef struct{
    union{
        aluno infoAluno;
        livro infoLivro;
    };
    int prox;
} no;

typedef struct {
        int ini, fim, primeiro_vazio;
        no item[TAM];
} banco;




void cria(Banco*);/*
void getnode(Banco*,int*);
void freenode(Banco*,int*);
int EstaVazio(Banco*);
int EstaCheio(Banco*);
void inserir_no_comeco(Banco*,elem*,int*);
void retirar_do_comeco(Banco*,elem*,int*);
void inserir_no_fim(Banco*,elem*,int*);*/
