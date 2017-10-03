#include "dinamico.c"

int main(){
// declaracao de variaveis
    int opcao, erro, cont=0, i=0;
    // usuario
    char *nome = NULL, *email = NULL, *telefone = NULL, *nusp = NULL, aux;

    // acervo
    char *titulo = NULL, *autor=NULL, *editora = NULL;
    int isbn, ano, edicao, num;
    Usuarios usuarios;
    Acervo acervo;
// codigo

    //inicia listas
    criaUsuario(&usuarios);
    criaAcervo(&acervo);

    printf("digite a opcao desejada: \n 1 - cadastro de usuario\n 2 - cadastro de livro\n");
    scanf("%d",&opcao);

    while(opcao != -1){
        switch(opcao){
            case 1: // cadastrar usuario;
                printf("nome: ");
                getchar();
				do{
					aux = getchar();
					nome = (char *)realloc(nome, (i + 1) * sizeof(char));
					nome[i] = aux;
					i++;
				}while(aux != '\n');
				nome[i-1] = '\0';
				i = 0;

                printf("telefone: ");
				do{
					aux = getchar();
					telefone = (char *)realloc(telefone, (i + 1) * sizeof(char));
					telefone[i] = aux;
					i++;
				}while(aux != '\n');
				telefone[i-1] = '\0';
				i = 0;


                printf("nusp: ");
				do{
					aux = getchar();
					nusp = (char *)realloc(nusp, (i + 1) * sizeof(char));
					nusp[i] = aux;
					i++;
				}while(aux != '\n');
				nusp[i-1] = '\0';
				i = 0;


                printf("email: ");
				do{
					aux = getchar();
					email = (char *)realloc(email, (i + 1) * sizeof(char));
					email[i] = aux;
					i++;
				}while(aux != '\n');
				email[i-1] = '\0';
				i = 0;
                cadastraUsuario(&usuarios, nome, email, telefone, nusp, &erro);
                break;
// case 2
            case 2: // cadastro de livros no acervo
                printf("Titulo do livro: ");
                getchar();
				do{
					aux = getchar();
					titulo = (char *)realloc(titulo, (i + 1) * sizeof(char));
					titulo[i] = aux;
					i++;
				}while(aux != '\n');
				titulo[i-1] = '\0';
				i = 0;
                printf("Autor do livro: ");
				do{
					aux = getchar();
					autor = (char *)realloc(autor, (i + 1) * sizeof(char));
					autor[i] = aux;
					i++;
				}while(aux != '\n');
				autor[i-1] = '\0';
				i = 0;
                printf("Editora do livro: ");
				do{
					aux = getchar();
					editora = (char *)realloc(editora, (i + 1) * sizeof(char));
					editora[i] = aux;
					i++;
				}while(aux != '\n');
				editora[i-1] = '\0';
				i = 0;
				printf("ISBN: ");
				scanf("%d", &isbn);
				printf("ano: ");
				scanf("%d", &ano);
				printf("edicao: ");
				scanf("%d", &edicao);
				printf("numero de exemplares a serem cadastrados no acervo: ");
				scanf("%d", &num);

				cadastraLivro(&acervo, titulo, autor, &isbn, editora, &ano, &edicao, &num, &erro);
                break;

            case 10:
                imprimeUsuarios(&usuarios);
                break;
            default:
                printf("\n\n caiu no default\n\n");
        }

    printf("digite a opcao desejada (-1 para sair)\n");
    scanf("%d",&opcao);
    }
    return 0;
}
