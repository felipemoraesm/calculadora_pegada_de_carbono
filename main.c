#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "login.h"
#include "Leitura.h"
#include "tratamento_erro.h"
#include "parametros_individuo.h"
#include "parametros_empresa.h"
#include "output.h"
#include "individual.h"
#include "empresarial.h"



int escolha;

int main()
{
   setlocale(LC_ALL,"Portuguese");
    float n,x;
    int ver = 0;
   processo_login(&ver);
    if (!ver)
    {
        printf("Login não foi bem-sucedido! Encerrando o programa.\n");
        return 0;
    }
    printf("Login bem-sucedido!\n");

        do
        {
            printf("(1) Individual\n");
            printf("(2) Empresas\n");
            scanf("%d",&escolha);
            switch(escolha)
            {
            case 1:
                individuo();
                break;
            case 2:
                empresa();
                break;
            default:
                printf("Escolha uma opção válida.");
                getchar();
                system("cls");
            }
        }
        while(escolha<1||escolha>2);
        printf("Deu certo");

    return 0;
}
