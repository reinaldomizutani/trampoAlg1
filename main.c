#include "dinamico.c"

int main(){
// declaracao de variaveis
    int opcao, erro;
    char *nome = NULL, *email = NULL, *telefone = NULL, *nusp = NULL;
    Usuarios usuarios;
// codigo

    //inicia lista de usuarios
    criaUsuario(&usuarios);

    printf("digite a opcao desejada (-1 para sair)\n");
    scanf("%d",&opcao);

    while(opcao != -1){
        switch(opcao){
            case 1: // cadastrar usuario;

                printf("nome: ");
                nome = lerstr();
                printf("telefone: ");
                telefone = lerstr();
                printf("nusp: ");
                nusp = lerstr();
                printf("email: ");
                email = lerstr();
                cadastraUsuario(&usuarios, nome, email, telefone, nusp, &erro);
                break;
            default:
                printf("OPCAO ERRADA MANE");
        }

    printf("digite a opcao desejada (-1 para sair)\n");
    scanf("%d",&opcao);
    }
    return 0;
}
