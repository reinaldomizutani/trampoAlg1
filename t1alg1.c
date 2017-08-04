#include<stdio.h>

/*
Criado em 04/08/2017
Autores:    Fernanda Federici
            Reinaldo Mizutani

Descrição: Sistema de agendamento de endereços:
 - Dados:
    recebe (str)nome e (str)endereço, armazenando em um vetor de struct

 - Operações: 
    cria_catalogo() = cria o vetor de structs Catalogo, sem nenhum dado associado.
    ad_end(str *nome, str *endereço) = adiciona valor à struct, se o endereço não for repetido.
    rem_end(str *nome) = remove endereço.
    ret_end(str *nome) = retorna endereço.
*/


///////////////////////////////////////////////////////////////////////////////////
// Criando uma estrutura de dados (struct) catálogo, com o nome "endereco".
///////////////////////////////////////////////////////////////////////////////////

typedef struct{
    char nome[50], end[100];
}Catalogo;

Catalogo *enderecos = NULL;

///////////////////////////////////////////////////////////////////////////////////
// função que verifica se existe um cadastro com aquele nome, e se não houver, insere novo cadastro
///////////////////////////////////////////////////////////////////////////////////

void ad_end(char *nome, char *end){
    enderecos->nome = nome[];
    enderecos->end = end[];
}
int main(){
    cria_catalogo();
    
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Função para remover um endereço existente no catálogo
///////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////
// função que recebe um nome e retorna o endereço correspondente
///////////////////////////////////////////////////////////////////////////////////