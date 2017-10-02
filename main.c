#include "dinamico.h"

int main(){
// 1. DECLARAÇÃO DE VARIÁVEIS
    int opcao;
    usuario usuarios = NULL; 
    livros acervo = NULL;
//      adicionar usuarios:
    char *nome=NULL, *telefone=NULL, *email=NULL;
    int nusp;

//      adicionar livro:
    char *titulo = NULL, *autor = NULL, *editora = NULL;
    int ano, edicao, qtd;

// 2. CÓDIGO
    criaUsuarios(&usuarios);
    criaAcervo(&acervo);


// switch case inicial para saber o que o operador deseja fazer.
scanf("%d", opcao);
swith(opcao){
    
    case: 1     //cadastrar usuario
        nome = lerstr();
        telefone = lerstr();
        email = lerstr();
        scanf("%d", & nusp);

        if (duplicadosUsuarios(&nome, &telefone, &email, &nusp)){
            printf("Esse usuário já está cadastrado!")
            break;
        }
        else{
            cadastraUsuario(&nome, &telefone, &email, &nusp);
            break;
        }
        
        break;

    case: 2     //Cadastrar livro

    //    char *titulo = NULL, *autor = NULL, *editora = NULL;
    //    int ano, edicao, qtd;

        titulo = lerstr();
        autor = lerstr();
        editora = lerstr();
        scanf("%d", &ano);
        scanf("%d", &edicao);
        scanf("%d", &qtd);

        if (duplicadoLivros(&titulo, &autor, &isbn, &editora, &ano, &edicao)){
            adicionaDuplicado(&isbn);
        }
        else{
            adicionaLivro(&titulo, &autor, &isbn, &editora, &ano, &edicao);
        }
        break;    


    case: 3     //Retirar livro
        if (livroDisponivel(&isbn))
            retiraLivro(&nusp, &isbn);
            break;
        else{
            adicionaEspera(&nusp, &isbn)
        }
        break;


    case: 4     //Retornar livro,
        removeLivro(&isbn);
        break;
        
    case: 5     //adicionar usuario
        removeUsuario(&nusp);
        break;    

    default :
        printf("opção não é válida");

}//fim do switch case
    return 0;
}