#include "dinamico.h"



void criaUsuario(Usuarios *usuario){
    usuario->ini = NULL;
    usuario->fim = NULL;
}
void cadastraUsuario(Usuarios *usuario, char *nome, char *email, char*telefone, char *nusp, int *erro){

    noUsuario *p;
    p = (noUsuario*)malloc(sizeof(noUsuario));

        p->nome = NULL;
        p->email = NULL;
        p->telefone = NULL;
        p->nusp = NULL;
        p->espera = NULL;

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
