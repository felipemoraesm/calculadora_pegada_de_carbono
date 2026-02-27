struct pessoa
{
    int pessoas_casa;
    char nome[50];
    float perguntas[11];


};

void individuo()
{
    int tr = 0; //Usado para fazer os tratamentos de erro da função individuo.
    int i=1,j=0,a=0;
    float vetorcontas[11];
    struct pessoa v[i];
    printf("Nome: ");
    scanf(" %[^\n]",v[i].nome);
    fflush(stdin);
    printf("%s",v[i].nome);
    printf("\n");
    do
    {
        printf("Residentes: \n");
        ler(&v[i].pessoas_casa);
    }
    while(v[i].pessoas_casa<1);

    //perguntas a partir daq
    system("cls");

    // pergunta 1.
    do
    {
        printf("    __________________________________________ \n");
        printf("   |                                          |\n");
        printf("   |  na sua residência, sobre o uso de gás:  |\n");
        printf("   |__________________________________________|\n");
        printf("   |                                          |\n");
        printf("   |  Digite [1] se for botijão de gás        |\n");
        printf("   |                                          |\n");
        printf("   |  Digite [2] se for gás encanado          |\n");
        printf("   |                                          |\n");
        printf("   |  Digite [3] se for nenhuma dessas opcões |\n");
        printf("   |__________________________________________|\n");
        printf("Opção:\n");
        ler(&v[i].perguntas[j]);
        system("cls");
        trata(v[i].perguntas[j],&tr);
        if (v[i].perguntas[j] < 1 || v[i].perguntas[j] > 3)
        {
            printf("Opção inválida. Por favor, escolha uma opção válida.\n");
            tr = 0;
        }
    }
    while(tr < 1);
    if(v[i].perguntas[j] == 1)
    {
        do
        {
            printf("    __________________________________________________________\n");
            printf("   |                                                          |\n");
            printf("   | Você faz o uso de quantos botijões de gás(13kg) por ano? |\n");
            printf("   |__________________________________________________________|\n");
            printf("Quantidade:\n");
            ler(&v[i].perguntas[j]);
            system("cls");
            trata(v[i].perguntas[j],&tr);
            vetorcontas[a] = 35.89*v[i].perguntas[j]/v[i].pessoas_casa;
            a++;
        }
        while(tr < 1);
        j++;
    }
    else if(v[1].perguntas[j] == 2)
    {
        do
        {
            printf("    ____________________________________________________\n");
            printf("   |                                                    |\n");
            printf("   | Quantos metros cúbicos de gás você gasta por ano?  |\n");
            printf("   |____________________________________________________|\n");
            printf("Quantidade:\n");
            ler(&v[i].perguntas[j]);
            system("cls");
            trata(v[i].perguntas[j],&tr);
            vetorcontas[a] = 1.88*v[i].perguntas[j]/v[i].pessoas_casa;
            a++;
        }
        while(tr < 1);
        j++;
    }
    if(v[i].perguntas[j] == 3)
    {
        v[i].perguntas[j] = 0;
        vetorcontas[a] = v[i].perguntas[j];
        a++;
        system("cls");
        j++;
    }

//pergunta 2
    do
    {
        printf("    ________________________________________________________________\n");
        printf("   |                                                                |\n");
        printf("   | Qual é a quantidade de produtos descartáveis você usa por mês? |\n");
        printf("   |(Copos plasticos, copos e talheres descartáveis)                |\n");
        printf("   |________________________________________________________________|\n");
        printf("Quantidade:\n");
        ler(&v[i].perguntas[j]);
        vetorcontas[a] = 5.5*v[i].perguntas[j]/v[i].pessoas_casa;
        a++;
        system("cls");
        trata(v[i].perguntas[j],&tr);
    }
    while(tr<1);
    j++;
//pergunta 3
    do
    {
        printf("    ________________________________________________________________\n");
        printf("   |                                                                |\n");
        printf("   | Qual é o seu consumo mensal de energia eletrica em kWh?        |\n");
        printf("   |________________________________________________________________|\n");
        printf("Consumo:\n");
        ler(&v[i].perguntas[j]);
        system("cls");
        trata(v[i].perguntas[j],&tr);
        vetorcontas[a] = ((0.295*v[i].perguntas[j])*12)/v[i].pessoas_casa;
        a++;
    }
    while(tr<1);
    j++;
//pergunta 4
    do
    {
        printf("     _________________________________\n");
        printf("    |                                 |\n");
        printf("    |  Você possui veículo próprio?   |\n");
        printf("    |  (Carro, moto, entre outros)    |\n");
        printf("    |_________________________________|\n");
        printf("    |                                 |\n");
        printf("    |          [1] - Sim              |\n");
        printf("    |                                 |\n");
        printf("    |          [2] - Não              |\n");
        printf("    |_________________________________|\n");
        printf("Opção:\n");
        ler(&v[i].perguntas[j]);
        system("cls");
        trata(v[i].perguntas[j],&tr);
        trmenu(v[i].perguntas[j],&tr);
    }
    while(tr<1);
    //condicional 1
    if(v[i].perguntas[j] == 1)
    {
        do
        {
            printf("    ________________________________________\n");
            printf("   |                                        |\n");
            printf("   |   Qual o combustível do seu veículo?   |\n");
            printf("   |________________________________________|\n");
            printf("   |                                        |\n");
            printf("   |   Se for gasolina digite - [1]         |\n");
            printf("   |                                        |\n");
            printf("   |   Se for diesel digite  -  [2]         |\n");
            printf("   |                                        |\n");
            printf("   |   Se for etanol digite  -  [3]         |\n");
            printf("   |                                        |\n");
            printf("   |   Se não for nenhum digite [4]         |\n");
            printf("   |________________________________________|\n");
            printf("Opção:\n");
            ler(&v[i].perguntas[j]);
            system("cls");
            trata(v[i].perguntas[j],&tr);
            if (v[i].perguntas[j] < 1 || v[i].perguntas[j] > 4)
            {
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
                tr = 0;
            }
        }
        while(tr < 1);
        //sub da condicional (1) 1
        if(v[i].perguntas[j] == 1)
        {
            do
            {
                printf("    _______________________________________________\n");
                printf("   |                                               |\n");
                printf("   | Em R$, quanto você gasta de gasolina por mês? |\n");
                printf("   |_______________________________________________|\n");
                printf("R$:\n");
                ler(&v[i].perguntas[j]);
                system("cls");
                trata(v[i].perguntas[j],&tr);
                printf("%f",v[i].perguntas[0]);
                vetorcontas[a] = (((v[i].perguntas[j]/5.84)*2.28)*12);
                a++;
            }
            while(tr<1);
            j++;
        }
        //sub da condicional (2) 1
        else if(v[i].perguntas[j] == 2)
        {
            do
            {
                printf("    _____________________________________________\n");
                printf("   |                                             |\n");
                printf("   | Em R$, quanto você gasta de diesel por mês? |\n");
                printf("   |_____________________________________________|\n");
                printf("R$:\n");
                ler(&v[i].perguntas[j]);
                system("cls");
                trata(v[i].perguntas[j],&tr);
                vetorcontas[a] = (((v[i].perguntas[j]/4.94)*3.2)*12);
                a++;
            }
            while(tr<1);
            j++;
        }
        //sub da condicional (3) 1
        else if(v[i].perguntas[j] == 3)
        {
            do
            {
                printf("    _____________________________________________\n");
                printf("   |                                             |\n");
                printf("   | Em R$, quanto você gasta de etanol por mês? |\n");
                printf("   |_____________________________________________|\n");
                printf("R$:\n");
                ler(&v[i].perguntas[j]);
                system("cls");
                trata(v[i].perguntas[j],&tr);
                vetorcontas[a] = (((v[i].perguntas[j]/3.64)*1.72)*12);
                a++;
            }
            while(tr<1);
            j++;
        }
        //sub da condicional (4) 1
        else if(v[i].perguntas[j] == 4)
        {
            v[i].perguntas[j] = 0;
            vetorcontas[a] = v[i].perguntas[j];
            a++;
            system("cls");
            j++;
        }

    }
//subpergunta 2
    else if(v[i].perguntas[j] == 2)
    {
        v[i].perguntas[j] = 0;
        vetorcontas[a] = v[i].perguntas[j];
        a++;
        system("cls");
        j++;
    }
//pergunta 5
    do
    {

        printf("     ________________________________\n");
        printf("    |                                |\n");
        printf("    |  Você utiliza(Ônibus,Metrô)?   |\n");
        printf("    |________________________________|\n");
        printf("    |                                |\n");
        printf("    |          [1] - Sim             |\n");
        printf("    |                                |\n");
        printf("    |          [2] - Não             |\n");
        printf("    |________________________________|\n");
        printf("Opção:\n");
        ler(&v[i].perguntas[j]);
        system("cls");
        trata(v[i].perguntas[j],&tr);
        trmenu(v[i].perguntas[j],&tr);

    }
    while(tr<1);
//condicional 1
    if(v[i].perguntas[j] == 1)
    {
        do
        {
            printf("    _______________________________________________________________________\n");
            printf("   |                                                                       |\n");
            printf("   | Em média, quanto tempo (em minutos) você gasta de transporte por dia? |\n");
            printf("   |_______________________________________________________________________|\n");
            printf("Quantidade:\n");
            ler(&v[i].perguntas[j]);
            system("cls");
            trata(v[i].perguntas[j],&tr);
            vetorcontas[a] = (v[i].perguntas[j]*5);
            a++;
        }
        while(tr<1);
        j++;
    }
//subpergunta 2
    else if(v[i].perguntas[j] == 2)
    {
        v[i].perguntas[j] = 0;
        vetorcontas[a] = v[i].perguntas[j];
        a++;
        system("cls");
        j++;
    }

//pergunta 6
    do
    {
        printf("     ______________________________\n");
        printf("    |                              |\n");
        printf("    |  Você faz viagens de avião?  |\n");
        printf("    |______________________________|\n");
        printf("    |                              |\n");
        printf("    |   [1] - Sim                  |\n");
        printf("    |                              |\n");
        printf("    |   [2] - Não                  |\n");
        printf("    |______________________________|\n");
        printf("Opção:\n");
        ler(&v[i].perguntas[j]);
        system("cls");
        trata(v[i].perguntas[j],&tr);
        trmenu(v[i].perguntas[j],&tr);
    }
    while(tr<1);
    //subpergunta 1
    if(v[i].perguntas[j] == 1)
    {
        do
        {
            printf("    ______________________________________________________________\n");
            printf("   |                                                              |\n");
            printf("   |  Quantas viagens domésticas por ano?(em território nacional) |\n");
            printf("   |______________________________________________________________|\n");
            printf("Quantidade:\n");
            ler(&v[i].perguntas[j]);
            system("cls");
            trata(v[i].perguntas[j],&tr);
            vetorcontas[a] = v[i].perguntas[j]*160;
            a++;
        }
        while(tr<1);
        j++;
        do
        {
            printf("    __________________________________________\n");
            printf("   |                                          |\n");
            printf("   |  Quantas viagens internacionais no ano?  |\n");
            printf("   |__________________________________________|\n");
            printf("Quantidade:\n");
            ler(&v[i].perguntas[j]);
            system("cls");
            trata(v[i].perguntas[j],&tr);
            vetorcontas[a] = v[i].perguntas[j]*2250;
            a++;
        }
        while(tr<1);
        j++;
    }
    //subpergunta 2
    else if(v[i].perguntas[j] == 2)
    {
        v[i].perguntas[j] = 0;
        vetorcontas[a] = v[i].perguntas[j];
        a++;
        system("cls");
        j++;
    }
//pergunta 6
    do
    {
        printf("    _______________________________________________________________\n");
        printf("   |                                                               |\n");
        printf("   |  Quantos cadernos ou blocos de papel você consome em um ano?  |\n");
        printf("   |_______________________________________________________________|\n");
        printf("Quantidade:\n");
        ler(&v[i].perguntas[j]);
        system("cls");
        trata(v[i].perguntas[j],&tr);
        vetorcontas[a] = v[i].perguntas[j]*2250;
        a++;

    }
    while(tr<1);
    j++;
//pergunta 7
    do
    {
        printf("     ______________________________\n");
        printf("    |                              |\n");
        printf("    |  Há Microondas em sua casa?  |\n");
        printf("    |______________________________|\n");
        printf("    |                              |\n");
        printf("    |   [1] - Sim                  |\n");
        printf("    |                              |\n");
        printf("    |   [2] - Não                  |\n");
        printf("    |______________________________|\n");
        printf("Opção:\n");
        ler(&v[i].perguntas[j]);
        system("cls");
        trata(v[i].perguntas[j],&tr);
        trmenu(v[i].perguntas[j],&tr);
    }
    //subpergunta 1
    while(tr<1);
    if(v[i].perguntas[j] == 1)
    {
        do
        {
            printf("    ______________________________________\n");
            printf("   |                                      |\n");
            printf("   |  Quantos Microondas há na sua casa?  |\n");
            printf("   |______________________________________|\n");
            printf("Quantidade:\n");
            ler(&v[i].perguntas[j]);
            vetorcontas[a] = ((v[i].perguntas[j]*1.53)/v[i].perguntas[j])*12;
            a++;
            system("cls");
            trata(v[i].perguntas[j],&tr);
        }
        while(tr<1);
        j++;
    }
    //subpergunta 2
    else if(v[i].perguntas[j] == 2)
    {
        v[i].perguntas[j] = 0;
        vetorcontas[a] = v[i].perguntas[j];
        a++;
        system("cls");
        j++;
    }
//pergunta 8
    do
    {
        printf("     ___________________________________\n");
        printf("    |                                   |\n");
        printf("    |  Há Ar-Condicionado em sua casa?  |\n");
        printf("    |___________________________________|\n");
        printf("    |                                   |\n");
        printf("    |          [1] - Sim                |\n");
        printf("    |                                   |\n");
        printf("    |          [2] - Não                |\n");
        printf("    |___________________________________|\n");
        printf("Opção:\n");
        ler(&v[i].perguntas[j]);
        system("cls");
        trata(v[i].perguntas[j],&tr);
        trmenu(v[i].perguntas[j],&tr);
    }
    //subpergunta 1
    while(tr<1);
    if(v[i].perguntas[j] == 1)
    {
        do
        {
            printf("    ____________________________________________\n");
            printf("   |                                            |\n");
            printf("   |  Quantos Ar-Condicionados há em sua casa?  |\n");
            printf("   |____________________________________________|\n");
            printf("Quantidade:\n");
            ler(&v[i].perguntas[j]);
            vetorcontas[a] = ((v[i].perguntas[j]*19.93)/v[i].perguntas[j])*12;
            a++;
            system("cls");
            trata(v[i].perguntas[j],&tr);
        }
        while(tr<1);
        j++;
    }
    //subpergunta 2
    else if(v[i].perguntas[j])
    {
        v[i].perguntas[j] = 0;
        vetorcontas[a] = v[i].perguntas[j];
        a++;
        system("cls");
        j++;
    }
//pergunta 9
    do
    {
        printf("     ___________________________________\n");
        printf("    |                                   |\n");
        printf("    |     Você consome carne animal?    |\n");
        printf("    |___________________________________|\n");
        printf("    |                                   |\n");
        printf("    |          [1] - Sim                |\n");
        printf("    |                                   |\n");
        printf("    |          [2] - Não                |\n");
        printf("    |___________________________________|\n");
        printf("Opção:\n");
        ler(&v[i].perguntas[j]);
        system("cls");
        trata(v[i].perguntas[j],&tr);
        trmenu(v[i].perguntas[j],&tr);
    }
    while(tr<1);
//subpergunta 1
    if(v[i].perguntas[j] == 1)
    {
        do
        {
            printf("     ___________________________________\n");
            printf("    |                                   |\n");
            printf("    |     Você consome carne bovina?    |\n");
            printf("    |___________________________________|\n");
            printf("    |                                   |\n");
            printf("    |          [1] - Sim                |\n");
            printf("    |                                   |\n");
            printf("    |          [2] - Não                |\n");
            printf("    |___________________________________|\n");
            printf("Opção:\n");
            ler(&v[i].perguntas[j]);
            system("cls");
            trata(v[i].perguntas[j],&tr);
            trmenu(v[i].perguntas[j],&tr);
        }
        while(tr<1);
        //condicional 1
        if(v[i].perguntas[j] == 1)
        {
            do
            {
                printf("    ________________________________________________\n");
                printf("   |                                                |\n");
                printf("   | Quantos quilos desses tipos de carne por mês?  |\n");
                printf("   |________________________________________________|\n");
                printf("Quantidade:\n");
                ler(&v[i].perguntas[j]);
                vetorcontas[a] = (v[i].perguntas[j]*60)*12;
                a++;
                system("cls");
                trata(v[i].perguntas[j],&tr);
            }
            while(tr<1);
            j++;
        }
        //condicional 2
        else if(v[i].perguntas[j] == 2)
        {
            do
            {
                printf ("    ____________________________\n");
                printf ("   |                            |\n");
                printf ("   |   Porco, aves ou peixes?   |\n");
                printf ("   |____________________________|\n");
                printf ("   |                            |\n");
                printf ("   |   [1]- Sim                 |\n");
                printf ("   |                            |\n");
                printf ("   |   [2]- Não                 |\n");
                printf ("   |____________________________|\n");
                printf("Opção:\n");
                ler(&v[i].perguntas[j]);
                system("cls");
                trata(v[i].perguntas[j],&tr);
                trmenu(v[i].perguntas[j],&tr);
            }
            while(tr<1);
//condicional 3
            if(v[i].perguntas[j] == 1)
            {
                do
                {
                    printf("    ________________________________________________\n");
                    printf("   |                                                |\n");
                    printf("   | Quantos quilos desses tipos de carne por mês?  |\n");
                    printf("   |________________________________________________|\n");
                    printf("Quantidade:\n");
                    ler(&v[i].perguntas[j]);
                    vetorcontas[a] = (v[i].perguntas[j]*20)*12;
                    a++;
                    system("cls");
                    trata(v[i].perguntas[j],&tr);
                }
                while(tr<1);
                j++;
            }
            //condicional 4
            else if(v[i].perguntas[j] == 2)
            {
                do
                {
                    printf("    _________________________________________________\n");
                    printf("   |                                                 |\n");
                    printf("   |Quantos quilos de vegetais você consome por mês? |\n");
                    printf("   |_________________________________________________|\n");
                    printf("Quantidade:\n");
                    ler(&v[i].perguntas[j]);
                    vetorcontas[a] =v[i].perguntas[j]*12;
                    a++;
                    system("cls");
                    trata(v[i].perguntas[j],&tr);
                }
                while(tr<1);
                j++;
            }
        }
    }
    //subpergunta 2
    else if(v[i].perguntas[j] == 2)
    {
        do
        {
            printf("    _________________________________________________\n");
            printf("   |                                                 |\n");
            printf("   |Quantos quilos de vegetais você consome por mês? |\n");
            printf("   |_________________________________________________|\n");
            printf("Quantidade:\n");
            ler(&v[i].perguntas[j]);
            vetorcontas[a] =v[i].perguntas[j]*12;
            a++;
            system("cls");
            trata(v[i].perguntas[j],&tr);
        }

        while(tr<1);
        j++;
    }
    for(a=0; a<11; a++)
    {



        printf("pergunta %d : %f\n",a,vetorcontas[a]);
    }

}
