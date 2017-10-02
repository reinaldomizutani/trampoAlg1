#include "dinamico.h"

// Função para leitura de strings. Lê entrada do teclado até encontrar '/n';
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
}

// procura por usuários duplicados no banco de dados.
int duplicadosUsuarios(char *nome, char *telefone, char *email, int *nusp);

// função para criar lista de usuarios
void criaUsuarios(){

}

//funcao para criar acervo
void criaAcervo();

// Função para cadastrar usuários;
void cadastraUsuarios(char *nome, char *telefone, char *email, int *nusp);


// Função para leitura de strings. Lê entrada do teclado até encontrar '/n';
char *lerstr();

// procura por usuários duplicados no banco de dados.
//int duplicadosUsuarios(char *nome, char *telefone, char *email, int *nusp);

// função para criar lista de usuarios
void criaUsuarios();

//funcao para criar acervo
void criaAcervo();

// Função para cadastrar usuários;
void cadastraUsuarios(char *nome, char *telefone, char *email, int *nusp);

// Função para buscar livros duplicados. retorna 1 caso haja duplicado
int duplicadoLivros(char *titulo, char *autor, int *isbn, char *editora, int *ano, int *edicao);

// Função para adicionar livros duplicados no acervo. 
void adicionaDuplicado(int *isbn);

// Função para adicionar livros no acervo;


//case 2:
int duplicadoLivros(&titulo, &autor, &isbn, &editora, &ano, &edicao);//retorna 1 caso o livro já conste no acervo
void adicionaDuplicado(&isbn);
void adicionaLivro(&titulo, &autor, &isbn, &editora, &ano, &edicao);

//case 3:
int livroDisponivel(&isbn); // retorna 1 caso o livro esteja disponível no acervo
void retiraLivro(&nusp, &isbn);
void adicionaEspera(&nusp, &isbn);


removeLivro(int *isbn);
removeUsuario(int *nusp);