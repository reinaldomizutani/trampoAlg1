#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10

typedef struct{
    int top;
    char **stk;
} stack;

void *ler(){
    int a=0;
    char aux, *vetor=NULL;
    scanf(" %c", &aux);
    while(aux != '\n'){
        vetor = (char*) realloc (vetor, (a+1)*sizeof(char));
        vetor[a] = aux;
        aux = getchar();
        a = a+1;
    }
    vetor[a] = '\0';
    return vetor;
}
stack pilha;

void push(){
    char *vetor = NULL;
    if(pilha.top == MAX - 1){
        printf("%s", "stack is full");
    }else{
        printf("%s", "type the name");
        vetor = ler();
        printf("%s %s", vetor, "foi adicionado à variável TESTE");
        pilha.stk[pilha.top] = vetor;
        printf("%s %s", pilha.stk[pilha.top], "foi adicionado à pilha");
        pilha.top = pilha.top+1;
    }
    return;
}

int main(){
    push();
    return 0;
}
