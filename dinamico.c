#include "dinamico.h"



void criaUsuario(Usuarios *usuario){
    usuario->ini = NULL;
    usuario->fim = NULL;
}
void criaAcervo(Acervo *acervo){
    acervo->ini = NULL;
    acervo->fim = NULL;
}
void cadastraUsuario(Usuarios *usuario, char *nome, char *email, char*telefone, char *nusp, int *erro){

    noUsuario *p;
    p = (noUsuario*)malloc(sizeof(noUsuario));

        p->nome = NULL;
        p->email = NULL;
        p->telefone = NULL;
        p->nusp = NULL;
        p->espera = NULL;
        p->devolver = NULL;

        p->nome = (char*)malloc(sizeof(char));
        strcpy(p->nome, nome);
        p->email = (char*)malloc(sizeof(char));
        strcpy(p->email, email);
        p->telefone = (char*)malloc(sizeof(char));
        strcpy(p->telefone, telefone);
        p->nusp = (char*)malloc(sizeof(char));
        strcpy(p->nusp, nusp);


    if(p == NULL)
        *erro = 1;
    else{
        *erro=0;
        if(estaVazia(usuario)){
            usuario->ini = p;
            usuario->fim = p;
        }
        else{
            usuario->fim->prox = p;
            p->prox = NULL;
            usuario->fim = p;
        }
}
}
int estaVazia(Usuarios *usuario){
    if(usuario->ini == NULL && usuario->fim == NULL)
        return 1;
    else
        return 0;
}
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
    a=0;
}
void imprimeUsuarios(Usuarios *usuarios){
    noUsuario *p;
    p = (noUsuario*)malloc(sizeof(noUsuario));

    p = usuarios->ini;
    while(p != NULL){
        printf("%s\n%s\n%s\n%s\n--\n", p->nome, p->telefone, p->email, p->nusp);
        p = p->prox;
    }
}
int buscaUsuarios(Usuarios *usuario,char *nusp, int *cont){
    noUsuario *p;
    *cont = 0;
    p = (noUsuario*)malloc(sizeof(noUsuario));
    p = usuario->ini;

    while(p != NULL){
        if(p->nusp == nusp){
            return 1;
        }
        else
            *cont++;
    }
    return 0;
}
void cadastraLivro(Acervo *acervo, char *titulo, char *autor, int *isbn, char *editora, int *ano, int *edicao, int *num, int *erro){

    noLivro *L;
    L = (noLivro*)malloc(sizeof(noLivro));

        L->titulo = NULL;
        L->autor = NULL;
        L->editora = NULL;
        L->espera = NULL;

        L->titulo = (char*)malloc(sizeof(char));
        strcpy(L->titulo, titulo);
        L->autor = (char*)malloc(sizeof(char));
        strcpy(L->autor, autor);
        L->editora = (char*)malloc(sizeof(char));
        strcpy(L->editora, editora);
        L->isbn = *isbn;
        L->ano = *ano;
        L->edicao = *edicao;
        L->num = 1;

    if(L == NULL)
        *erro = 1;
    else{
        *erro=0;
        if(estaVazio(acervo)){
            acervo->ini = L;
            acervo->fim = L;
        }
        else{
            acervo->fim->prox = L;
            L->prox = NULL;
            acervo->fim = L;
        }
}
}
int estaVazio(Acervo *acervo){
    if(acervo->ini == NULL && acervo->fim == NULL)
        return 1;
    else
        return 0;
}

