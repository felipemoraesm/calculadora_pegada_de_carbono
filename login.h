#ifndef LOGIN_H_INCLUDED
#define LOGIN_H_INCLUDED

void salvarLogin(char *username, char *senha)
{
    FILE *arquivo;
    arquivo = fopen("login.txt", "a"); // Modo "a" para adicionar ao arquivo

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "%s\n", username);
    fprintf(arquivo, "%s\n", senha);

    fclose(arquivo);
}

int verificarLogin(char *username, char *senha,float **ver)
{
    FILE *arquivo;
    char linha[50];
    char nomeUsuarioArquivo[50];
    char senhaArquivo[50];

    arquivo = fopen("login.txt", "r");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 0; // Login falhou
    }

    while (fgets(linha, 50, arquivo) != NULL)
    {
        strcpy(nomeUsuarioArquivo, linha);

        if (fgets(linha, 50, arquivo) == NULL)
        {
            break; // Final do arquivo inesperado
        }
        strcpy(senhaArquivo, linha);

        // Remover o '\n' do final das strings lidas do arquivo
        nomeUsuarioArquivo[strcspn(nomeUsuarioArquivo, "\n")] = '\0';
        senhaArquivo[strcspn(senhaArquivo, "\n")] = '\0';

        // Comparar nome de usuário e senha
        if (strcmp(username, nomeUsuarioArquivo) == 0 && strcmp(senha, senhaArquivo) == 0)
        {
            fclose(arquivo);
            **ver = 1;
            return 1; // Login bem-sucedido
        }
    }

    fclose(arquivo);
    return 0; // Login falhou
}

int processo_login(int *ver)
{
    int opcao;
    char username[50];
    char senha[50];
    int loginSucesso = 0; // Variável para rastrear o sucesso do login

    do
    {
        printf("Selecione uma opção:\n");
        printf("1. Cadastro\n");
        printf("2. Login\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        system("cls");

        if (opcao == 1)
        {
            printf("Digite o nome de usuário: ");
            scanf(" %[^\n]", username);

            printf("Digite a senha: ");
            scanf(" %[^\n]", senha);

            salvarLogin(username, senha);
            system("cls");
            printf("Cadastro realizado com sucesso.\n");

        }
        else if (opcao == 2)
        {
            int tentarNovamente; // Variável para controlar se o usuário quer tentar novamente

            do
            {
                printf("Digite o nome de usuário: ");
                scanf(" %[^\n]", username);

                printf("Digite a senha: ");
                scanf(" %[^\n]", senha);

                if (verificarLogin(username, senha, &ver))
                {
                    system("cls");
                    loginSucesso = 1;

                }
                else
                {
                    printf("Nome de usuário ou senha incorretos.\n");
                    printf("Deseja tentar novamente? (1 - Sim, 2 - Não): ");
                    scanf("%d", &tentarNovamente);
                    system("cls");
                    *ver = 0;

                    if (tentarNovamente != 1)
                    {
                        printf("Encerrando o programa.\n");
                        return 0; // Encerra o programa
                    }
                }
            } while (tentarNovamente == 1); // Continua tentando enquanto a opção for 1
        }
        else
        {
            printf("Opcao inválida.\n");

        }
    } while (opcao != 2 && !loginSucesso);   // Continua enquanto a opção não for login e o login não for bem-sucedido

}

#endif // LOGIN_H_INCLUDED
