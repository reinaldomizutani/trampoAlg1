#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
Criado em 04/08/2017
Autores:    Fernanda Federici
            Reinaldo Mizutani

Descrição: Sistema de agendamento de endereços:
 - Dados:
    recebe (str)nome e (str)endereço, armazenando em um vetor de struct

 - Operações:
    init() = cria o vetor de structs Catalogo, sem nenhum dado associado.
    insere(cat *lista, char *nome, char *endereco) = adiciona valor à struct, se o nome não for repetido.
    remover(cat lista, char nome) = remove endereço, move os vetores posteriores à posição adequada, desaloca a última.
    retornaEnd(cat end, ) = retorna endereço.
*/


//-----------------------------------------------------------------------------------
// Define uma struct que recebe 2 valores: nome e endereço
//-----------------------------------------------------------------------------------
typedef struct catalogo{
    char nome[50], end[100];
} cat;

//-----------------------------------------------------------------------------------
//variável global para verificar o tamanho do vetor de struct
//-----------------------------------------------------------------------------------
int cont = 0;

//-----------------------------------------------------------------------------------
//Primeira função, que cria um vetor de Cat nulo chamado Lista
//-----------------------------------------------------------------------------------
void init(){
    cat *lista = (cat*) malloc (1*sizeof(cat));
}

//-----------------------------------------------------------------------------------
//Segunda função, para adicionar um novo valor à lista de endereços
//-----------------------------------------------------------------------------------
void insere(cat *lista, char nome[30], char end[100]){
    int i=0, verif=0;
    lista = (cat*) realloc (lista, (cont+1)*sizeof(cat));


    if(cont==0){//se for o primeiro valor da lista, insere os valores informados pelo usuário
        strcpy(lista[cont].nome, nome);
        strcpy(lista[cont].end, end);
        cont++;
    }else{
        for(i=0 ; i<cont ; i++){//caso não seja o primeiro valor, verifica se o nome é duplicado e se não for, insere os valores.
            if(strcmp(nome, lista[i].nome) == 0)
                verif=1;
        }
        if(verif == 0){
            strcpy(lista[cont].nome, nome);
            strcpy(lista[cont].end, end);
            cont = cont+1;
        }
    }
}

//-----------------------------------------------------------------------------------
//Função para remover endereço da lista. Recebe nome, e procura na lista.
// se encontrar, a função sobrescreve os valores posteriores, decrementa o contador
// e realoca a memória para o valor adequado.
//-----------------------------------------------------------------------------------
void remover(cat *lista, char *nome){
    int i=0, j=0;
    for(i=0 ; i<cont ; i++){
        if(strcmp(nome, lista[i].nome) != 0){
            for(j=i ; j<cont ; j++){
                strcpy(lista[j].nome, lista[j+1].nome);
                strcpy(lista[j].end, lista[j+1].end);
            }
        }
    }
cont--;
lista = (cat*) realloc (lista, (cont)*sizeof(cat));
}

//-----------------------------------------------------------------------------------
// Função oara retornar o endereço quando o usuário fornece o nome
//-----------------------------------------------------------------------------------
void retornaEnd(cat *lista, char *nome){
    int i;
    for(i=0 ; i<cont ; i++){
        if(strcmp(nome, lista[i].nome) != 0){
            printf("nome: %s, endereço: %s\n", lista[i].nome, lista[i].end);
        }
    }
}
//-----------------------------------------------------------------------------------
// Função para imprimir a lista completa dos registros
//-----------------------------------------------------------------------------------

void printLista(cat *lista){
    for(int i=0 ; i<cont ; i++){
        printf("nome: %s, endereco: %s\n", lista[i].nome, lista[i].end);
    }
}
