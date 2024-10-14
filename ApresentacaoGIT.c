#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int qnt = 0;

struct doador {
    char nome[100], email[100], senha[100], rg[12], cpf[14], telefone[19];
} doador_pessoa[100];

void clean() {
    while (getchar() != '\n');
}

// Função para remover o '\n' das strings lidas pelo fgets
void remove_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

void rgg() {
    while(1) {
        printf("\nRG (Ex: xx.xxx.xxx-x):\n");
        scanf("%12s", doador_pessoa[qnt].rg);
        clean();
        if (strlen(doador_pessoa[qnt].rg) > 10) {
            printf("=============== Cadastro do doador - pessoa ===============\n\n");
            printf("Voce excedeu a quantidade de caracteres. Tente novamente.\n");
        } else {
            break;
        }
    }
}

void cpff() {
    while(1) {
        printf("\nCPF (Ex: xxx.xxx.xxx-xx):\n");
        scanf("%14s", doador_pessoa[qnt].cpf);
        clean();
        if (strlen(doador_pessoa[qnt].cpf) > 11) {
            printf("=============== Cadastro do doador - pessoa ===============\n\n");
            printf("Voce excedeu a quantidade de caracteres. Tente novamente.\n");
        } else {
            break;
        }
    }
}

void telefonee() {
    while(1) {
        printf("\nTelefone (Ex: (xx) xxxxx-xxxx):\n");
        scanf("%19s", doador_pessoa[qnt].telefone);
        clean();
        if (strlen(doador_pessoa[qnt].telefone) > 14) {
            printf("=============== Cadastro do doador - pessoa ===============\n\n");
            printf("Voce excedeu a quantidade de caracteres. Tente novamente.\n");
        } else {
            break;
        }
    }
}

void negocinhodecamila() {
    char senha_confirmacao[100], resposta;
    int opcao;

    printf("=============== Cadastro do doador - pessoa ===============\n\n");

    printf("Nome completo:\n");
    fgets(doador_pessoa[qnt].nome, 100, stdin);
    remove_newline(doador_pessoa[qnt].nome);

    printf("\nE-mail:\n");
    fgets(doador_pessoa[qnt].email, 100, stdin);
    remove_newline(doador_pessoa[qnt].email);

    while (1) {
        printf("\nSenha:\n");
        fgets(doador_pessoa[qnt].senha, 100, stdin);
        remove_newline(doador_pessoa[qnt].senha);

        printf("\nConfirmacao da senha:\n");
        fgets(senha_confirmacao, 100, stdin);
        remove_newline(senha_confirmacao);

        if (strcmp(doador_pessoa[qnt].senha, senha_confirmacao) == 0) {
            printf("Senha confirmada com sucesso!\n");
            break;
        } else {
            printf("Senhas nao coincidem. Tente novamente.\n");
        }
    }

    rgg();
    cpff();
    telefonee();

    do {
        system("cls");
        printf("\n=============== Cadastro do doador - pessoa ===============\n\n");
        printf("                     Dados cadastrados:\n\n");
        printf("Nome: %s\n", doador_pessoa[qnt].nome);
        printf("E-mail: %s\n", doador_pessoa[qnt].email);
        printf("RG: %s\n", doador_pessoa[qnt].rg);
        printf("CPF: %s\n", doador_pessoa[qnt].cpf);
        printf("Telefone: %s\n\n", doador_pessoa[qnt].telefone);
        printf("Voce gostaria de alterar algum dado? (s/n): ");
        scanf(" %c", &resposta);
        clean();

        if (resposta == 's' || resposta == 'S') {
            system("cls");
            printf("=============== Cadastro do doador - pessoa ===============\n\n");
            printf("              Qual dado voce deseja alterar?\n\n");
            printf("(1) Nome: %s\n", doador_pessoa[qnt].nome);
            printf("(2) E-mail: %s\n", doador_pessoa[qnt].email);
            printf("(3) RG: %s\n", doador_pessoa[qnt].rg);
            printf("(4) CPF: %s\n", doador_pessoa[qnt].cpf);
            printf("(5) Telefone: %s\n\n", doador_pessoa[qnt].telefone);
            printf("Escolha uma opcao (1-5): ");
            scanf("%d", &opcao);
            clean();

            switch(opcao) {
                case 1:
                    system("cls");
                    printf("=============== Cadastro do doador - pessoa ===============\n\n");
                    printf("Novo nome:\n");
                    fgets(doador_pessoa[qnt].nome, 100, stdin);
                    remove_newline(doador_pessoa[qnt].nome);
                    break;
                case 2:
                    system("cls");
                    printf("=============== Cadastro do doador - pessoa ===============\n\n");
                    printf("Novo e-mail:\n");
                    fgets(doador_pessoa[qnt].email, 100, stdin);
                    remove_newline(doador_pessoa[qnt].email);
                    break;
                case 3:
                    system("cls");
                    printf("=============== Cadastro do doador - pessoa ===============\n\n");
                    rgg();
                    break;
                case 4:
                    system("cls");
                    printf("=============== Cadastro do doador - pessoa ===============\n\n");
                    cpff();
                    break;
                case 5:
                    system("cls");
                    printf("=============== Cadastro do doador - pessoa ===============\n\n");
                    telefonee();
                    break;
                default:
                    printf("Opção inválida!\n");
                    system("pause");
            }
        }

    } while (resposta == 's' || resposta == 'S');

    printf("\nCadastro realizado com sucesso!\n\n");
    printf("Dados do Doador:\n\n");
    printf("Nome: %s\n", doador_pessoa[qnt].nome);
    printf("E-mail: %s\n", doador_pessoa[qnt].email);
    printf("RG: %s\n", doador_pessoa[qnt].rg);
    printf("CPF: %s\n", doador_pessoa[qnt].cpf);
    printf("Telefone: %s\n", doador_pessoa[qnt].telefone);
}

int main() {
    negocinhodecamila();
    return 0;
}
