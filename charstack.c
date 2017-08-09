#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10

// ----------------------------------------------------------------------------------------------------------
// Definition and call of the dynamically allocated struct
// ----------------------------------------------------------------------------------------------------------
typedef struct{
    int top;
    char **stk;
} stack;

stack pilha;

// ----------------------------------------------------------------------------------------------------------
// Function for reading dynamic allocated strings
// ----------------------------------------------------------------------------------------------------------
char* ler(){
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

// ----------------------------------------------------------------------------------------------------------
// Push function to add elements to the stack
// ----------------------------------------------------------------------------------------------------------
void push(){
    char *vetor = NULL, aux='a';
    int a=0;
    int cont=0;
    if(pilha.top == MAX - 1){
        printf("%s", "stack is full");
    }else{
        printf("%s", "type the name: ");
        vetor = ler();
        printf("%s %s", vetor, "foi adicionado a variavel TESTE\n");

        while(aux != '\0'){
            aux = vetor[a];
            a = a+1;
        }
// ----------------------------------------------------------------------------------------------------------
// algo de errado não está serto nas linhas 53 e 57
// ----------------------------------------------------------------------------------------------------------
        pilha.stk = (char**) realloc (pilha.stk, (cont+1)*sizeof(char*));
        printf("%s", "primeira realocacao completa!\n");
        cont = cont + 1;

        pilha.stk[cont] = (char*) realloc (pilha.stk, (a)*sizeof(char));
        printf("%s", "segunda realocacao completa!\n");
        
        pilha.stk[pilha.top] = vetor;
        printf("%s %s", pilha.stk[pilha.top], "foi adicionado a pilha\n");
        pilha.top = pilha.top+1;
    }
    return;
}


int main(){
    push();
    printf("\n\n\n stack : %s", pilha.stk[0]);
    return 0;
}
