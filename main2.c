#include "estatico.c"

int main(){
// declaracao de variaveis
    int opcao;
    noAluno alunoGenerico;
    noLivro livroGenerico;

    printf("digite a opcao desejada: \n 1 - cadastro de usuario\n 2 - cadastro de livro\n");
    scanf("%d",&opcao);

    while(opcao != -1){
        switch(opcao){
            case 1: // cadastrar usuario;
                printf("nome: ");
                scanf(" %[^\n]s", alunoGenerico.info.nome);
                printf("email: ");
                scanf(" %[^\n]s", alunoGenerico.info.email);
                printf("telefone: ");
                scanf(" %[^\n]s", alunoGenerico.info.telefone);
                printf("nusp: ");
                scanf(" %[^\n]s", alunoGenerico.info.nusp);


                break;

            default:
                printf("\n\n caiu no default\n\n");
        }

    printf("digite a opcao desejada (-1 para sair)\n");
    scanf("%d",&opcao);
    }
    return 0;
}
