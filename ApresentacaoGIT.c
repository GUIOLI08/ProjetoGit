#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 150

struct doador {
    char nome[MAX], email[MAX], senha[MAX], rg[MAX], cpf[MAX], telefone[MAX];
};

void clean() {
    while (getchar() != '\n');
}


void negocinhodecamila(){
    struct doador doador_pessoa;
    char senha_confirmacao[MAX], resposta;
    int opcao;

    printf("=============== Cadastro do doador - pessoa ===============\n\n");

    printf("Nome completo:\n");
    fgets(doador_pessoa.nome, MAX, stdin);

    printf("\nE-mail:\n");
    fgets(doador_pessoa.email, MAX, stdin);

    // Loop para confirmação da senha
    while (1) {
        printf("\nSenha:\n");
        fgets(doador_pessoa.senha, MAX, stdin);

        printf("\nConfirmacao da senha:\n");
        fgets(senha_confirmacao, MAX, stdin);

        if (strcmp(doador_pessoa.senha, senha_confirmacao) == 0){
            printf("Senha confirmada com sucesso!\n");
            break;
        } else {
            system("cls");
            printf("=============== Cadastro do doador - pessoa ===============\n\n");
            printf("Senhas nao coincidem. Tente novamente.\n");
        }
    }

    printf("\nRG:\n");
    fgets(doador_pessoa.rg, MAX, stdin);

    printf("\nCPF:\n");
    fgets(doador_pessoa.cpf, MAX, stdin);

    printf("\nTelefone:\n");
    fgets(doador_pessoa.telefone, MAX, stdin);

    do{

        system("cls");
        printf("=============== Cadastro do doador - pessoa ===============\n");
        printf("                     Dados cadastrados:\n\n");
        printf("Nome: %s", doador_pessoa.nome);
        printf("E-mail: %s", doador_pessoa.email);
        printf("RG: %s", doador_pessoa.rg);
        printf("CPF: %s", doador_pessoa.cpf);
        printf("Telefone: %s", doador_pessoa.telefone);

        printf("\nVoce gostaria de alterar algum dado? (s/n): ");
        scanf(" %c", &resposta);
        clean();

        if(resposta == 's' || resposta == 'S'){

            system("cls");
            printf("=============== Cadastro do doador - pessoa ===============\n\n");
            printf("              Qual dado voce deseja alterar?\n\n");
            printf("(1) Nome: %s", doador_pessoa.nome);
            printf("(2) E-mail: %s", doador_pessoa.email);
            printf("(3) RG: %s", doador_pessoa.rg);
            printf("(4) CPF: %s", doador_pessoa.cpf);
            printf("(5) Telefone: %s\n", doador_pessoa.telefone);
            printf("Escolha uma opcao (1-5): ");
            scanf("%d", &opcao);
            clean();

            switch(opcao){

                case 1:
                    system("cls");
                    printf("=============== Cadastro do doador - pessoa ===============\n\n");
                    printf("Novo nome:\n");
                    fgets(doador_pessoa.nome, MAX, stdin);
                    break;
                case 2:
                    system("cls");
                    printf("=============== Cadastro do doador - pessoa ===============\n\n");
                    printf("Novo e-mail:\n");
                    fgets(doador_pessoa.email, MAX, stdin);
                    break;
                case 3:
                    system("cls");
                    printf("=============== Cadastro do doador - pessoa ===============\n\n");
                    printf("Novo RG:\n");
                    fgets(doador_pessoa.rg, MAX, stdin);
                    break;
                case 4:
                    system("cls");
                    printf("=============== Cadastro do doador - pessoa ===============\n\n");
                    printf("Novo CPF:\n");
                    fgets(doador_pessoa.cpf, MAX, stdin);
                    break;
                case 5:
                    system("cls");
                    printf("=============== Cadastro do doador - pessoa ===============\n\n");
                    printf("Novo telefone:\n");
                    fgets(doador_pessoa.telefone, MAX, stdin);
                    break;
                default:
                    printf("Opção inválida!\n");
                    system("Pause");

            }
        }

    } while (resposta == 's' || resposta == 'S');

    system("cls");
    printf("\nCadastro realizado com sucesso!\n\n");
    printf("Dados do Doador:\n\n");
    printf("Nome: %s", doador_pessoa.nome);
    printf("E-mail: %s", doador_pessoa.email);
    printf("RG: %s", doador_pessoa.rg);
    printf("CPF: %s", doador_pessoa.cpf);
    printf("Telefone: %s", doador_pessoa.telefone);
}

int main() {
    negocinhodecamila();
    return 0;
}