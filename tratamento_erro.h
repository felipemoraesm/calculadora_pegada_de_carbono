#ifndef TRATAMENTO_ERRO_H_INCLUDED
#define TRATAMENTO_ERRO_H_INCLUDED

void trata(float in,float *out)
{
    if(in<=0)
    {
        printf("\n Por favor, digite um número válido.");
        printf("Aperte Enter para continuar.");
        getchar();
 system("cls");
        *out = 0;
    }
    else
    {
        *out = 1;
    }
}

void trmenu(float vl, float *tr)
{

    if (vl < 1 || vl> 2)
        {
            printf("Opção inválida. Por favor, escolha uma opção válida.\n");
            *tr = 0;
        }
}

#endif // TRATAMENTO_ERRO_H_INCLUDED
