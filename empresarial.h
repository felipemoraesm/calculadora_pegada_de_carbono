#ifndef EMPRESARIAL_H_INCLUDED
#define EMPRESARIAL_H_INCLUDED

struct info_empresa
{
    char setor[50];
    char responsavel[50];
    char nome_empresa[60];
    float perguntas[11];

};

void empresa()
{
    float aux=0;
    float tr_org; //Variável de tratamento
    int numsed = 0;
    do
    {
        printf("Digite a quantidade de sedes que sua empresa/organização possui:\n");
        scanf("%d",&numsed);
        trata(numsed,&tr_org); //Envia o número de sedes por valor, e a variável tr_org por referência, para que seja modificada.
    }
    while(tr_org<1);
    fflush(stdin);
    int i = 0, j = 0;
    struct info_empresa org[numsed]; //Declaração de um vetor do tipo info_empresa com tamanho equivalante ao número de sedes.
    printf("Nome da empresa/Organização/Sede: ");
    scanf("%[^\n]s",&org[i].nome_empresa);
    fflush(stdin);
    do
    {
        printf("Selecione o setor que melhor se adequa:\n");
        printf("[1] - Comercial ou Institucional\n");
        printf("[2] - Residencial, Agricultura, Florestal ou Pesca(EM CONSTRUÇÃO)\n");
        printf("[3] - Manufatura ou Construção(EM CONSTRUÇÃO)\n");
        ler(&org[i].perguntas[j]); //Chamamento da função que faz a leitura das perguntas, PASSAGEM POR PARÂMETRO
        if(org[i].perguntas[j]==1)
        {
            strcpy(org[i].setor,"Comercial/Institucional"); //Atribui o tipo de setor à variável correspondente da struct
            fflush(stdin);
            printf("\nDigite o nome do responsável pelo relatório: ");
            scanf("%[^\n]s",&org[i].responsavel);
            fflush(stdin);
            printf("\nPressione Enter para continuar.\n");
            getchar();
            system("cls");
            for(i=0; i<numsed; i++)
            {
                do
                {
                    printf("\nEmissões de escopo 1\n");
                    printf("%s Sede %d possui fontes estacionárias de combustão?\n",org[i].nome_empresa,i+1);
                    printf("(Exemplos: Caldeiras, Fornos industriais, Turbinas a gás, motores, incineradores, etc)\n");
                    printf("[1] - Sim\n");
                    printf("[2] - Não\n");
                    ler(&org[i].perguntas[j]); //Chamamento da função que faz a leitura das perguntas, PASSAGEM POR PARÂMETRO
                    if(org[i].perguntas[j]==1)
                    {
                        do
                        {
                            printf("Selecione o tipo de combustível utilizado:\n");
                            printf("\n[1] - Bagaço de Cana\n");
                            printf("[2] - Biodiesel\n");
                            printf("[3] - Carvão Metalúrgico Nacional\n");
                            printf("[4] - Carvão Metalúrgico Internacional\n");
                            printf("[5] - Carvão Vegetal\n");
                            printf("[6] - Etanol\n");
                            printf("[7] - Gás Liquefeito de Petróleo(GLP)\n");
                            printf("[8] - Gasolina Automotiva\n");
                            printf("[9] - Lenha Comercial\n");
                            printf("[10] - Melaço\n");
                            printf("[11] - Óleo Diesel\n");
                            printf("[12] - Petróleo Bruto\n");
                            printf("\n");
                            ler(&org[i].perguntas[j]); //Chamamento da função que faz a leitura das perguntas, PASSAGEM POR PARÂMETRO
                            if(org[i].perguntas[j]==1)
                            {
                                do
                                {
                                    printf("Anualmente.\n");
                                    printf("Quantidade(Toneladas): ");
                                    ler(&org[i].perguntas[j]); //Chamamento da função que faz a leitura das perguntas, PASSAGEM POR PARÂMETRO
                                    trata(org[i].perguntas[j],&tr_org);//Chamamento da função que faz o tratamento, PASSAGEM POR VALOR E PARÂMETRO
                                    aux = org[i].perguntas[j];
                                }
                                while(tr_org<1);
                                //parametros.h Função para modificar o valor de entrada pelo de saída
                                calculo_empresa_1(&aux); //Chamamento da função RECURSIVA que faz o cálculo da emissão, PASSAGEM POR PARÂMETRO
                                org[i].perguntas[j] = aux;
                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);
                            }
                            else if(org[i].perguntas[j]==2)
                            {
                                do
                                {
                                    printf("Anualmente.\n");
                                    printf("Quantidade(Litros): ");
                                    ler(&org[i].perguntas[j]);
                                    trata(org[i].perguntas[j],&tr_org);
                                    aux = org[i].perguntas[j];
                                }
                                while(tr_org<1);
                                //parametros.h Função para modificar o valor de entrada pelo de saída
                                calculo_empresa_2(&aux);//Chamamento da função RECURSIVA que faz o cálculo da emissão, PASSAGEM POR PARÂMETRO
                                org[i].perguntas[j] = aux;
                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);

                            }
                            else if(org[i].perguntas[j]==3)
                            {
                                do
                                {
                                    printf("Anualmente.\n");
                                    printf("Quantidade(Toneladas): ");
                                    ler(&org[i].perguntas[j]);
                                    trata(org[i].perguntas[j],&tr_org);
                                    aux = org[i].perguntas[j];
                                }
                                while(tr_org<1);
                                //parametros.h Função para modificar o valor de entrada pelo de saída
                                calculo_empresa_3(&aux);//Chamamento da função RECURSIVA que faz o cálculo da emissão, PASSAGEM POR PARÂMETRO
                                org[i].perguntas[j] = aux;
                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);
                            }
                            else if(org[i].perguntas[j]==4)
                            {
                                do
                                {
                                    printf("Anualmente.\n");
                                    printf("Quantidade(Toneladas): ");
                                    ler(&org[i].perguntas[j]);
                                    trata(org[i].perguntas[j],&tr_org);
                                    aux = org[i].perguntas[j];
                                }
                                while(tr_org<1);
                                //parametros.h Função para modificar o valor de entrada pelo de saída
                                calculo_empresa_4(&aux);//Chamamento da função RECURSIVA que faz o cálculo da emissão, PASSAGEM POR PARÂMETRO
                                org[i].perguntas[j] = aux;
                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);
                            }
                            else if(org[i].perguntas[j]==5)
                            {
                                do
                                {
                                    printf("Anualmente.\n");
                                    printf("Quantidade(Toneladas): ");
                                    ler(&org[i].perguntas[j]);
                                    trata(org[i].perguntas[j],&tr_org);
                                    aux = org[i].perguntas[j];
                                }
                                while(tr_org<1);
                                //parametros.h Função para modificar o valor de entrada pelo de saída
                                calculo_empresa_5(&aux);//Chamamento da função RECURSIVA que faz o cálculo da emissão, PASSAGEM POR PARÂMETRO
                                org[i].perguntas[j] = aux;
                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);
                            }
                            else if(org[i].perguntas[j]==6)
                            {
                                do
                                {
                                    printf("Anualmente.\n");
                                    printf("Quantidade(Litros): ");
                                    ler(&org[i].perguntas[j]);
                                    trata(org[i].perguntas[j],&tr_org);
                                    aux = org[i].perguntas[j];
                                }
                                while(tr_org<1);
                                //parametros.h Função para modificar o valor de entrada pelo de saída
                                calculo_empresa_6(&aux);//Chamamento da função RECURSIVA que faz o cálculo da emissão, PASSAGEM POR PARÂMETRO
                                org[i].perguntas[j] = aux;
                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);
                            }
                            else if(org[i].perguntas[j]==7)
                            {
                                do
                                {
                                    printf("Anualmente.\n");
                                    printf("Quantidade(Toneladas): ");
                                    ler(&org[i].perguntas[j]);
                                    trata(org[i].perguntas[j],&tr_org);
                                    aux = org[i].perguntas[j];
                                }
                                while(tr_org<1);
                                //parametros.h Função para modificar o valor de entrada pelo de saída
                                calculo_empresa_7(&aux);//Chamamento da função RECURSIVA que faz o cálculo da emissão, PASSAGEM POR PARÂMETRO
                                org[i].perguntas[j] = aux;
                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);
                            }
                            else if(org[i].perguntas[j]==8)
                            {
                                do
                                {
                                    printf("Anualmente.\n");
                                    printf("Quantidade(Litros): ");
                                    ler(&org[i].perguntas[j]);
                                    trata(org[i].perguntas[j],&tr_org);
                                    aux = org[i].perguntas[j];
                                }
                                while(tr_org<1);
                                //parametros.h Função para modificar o valor de entrada pelo de saída
                                calculo_empresa_8(&aux);//Chamamento da função RECURSIVA que faz o cálculo da emissão, PASSAGEM POR PARÂMETRO
                                org[i].perguntas[j] = aux;
                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);
                            }
                            else if(org[i].perguntas[j]==9)
                            {
                                do
                                {
                                    printf("Anualmente.\n");
                                    printf("Quantidade(Toneladas): ");
                                    ler(&org[i].perguntas[j]);
                                    trata(org[i].perguntas[j],&tr_org);
                                    aux = org[i].perguntas[j];
                                }
                                while(tr_org<1);
                                //parametros.h Função para modificar o valor de entrada pelo de saída
                                calculo_empresa_9(&aux);//Chamamento da função RECURSIVA que faz o cálculo da emissão, PASSAGEM POR PARÂMETRO
                                org[i].perguntas[j] = aux;
                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);
                            }
                            else if(org[i].perguntas[j]==10)
                            {
                                do
                                {
                                    printf("Anualmente.\n");
                                    printf("Quantidade(Toneladas): ");
                                    ler(&org[i].perguntas[j]);
                                    trata(org[i].perguntas[j],&tr_org);
                                    aux = org[i].perguntas[j];
                                }
                                while(tr_org<1);
                                //parametros.h Função para modificar o valor de entrada pelo de saída
                                calculo_empresa_10(&aux);//Chamamento da função RECURSIVA que faz o cálculo da emissão, PASSAGEM POR PARÂMETRO
                                org[i].perguntas[j] = aux;
                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);
                            }
                            else if(org[i].perguntas[j]==11)
                            {
                                do
                                {
                                    printf("Anualmente.\n");
                                    printf("Quantidade(Litros): ");
                                    ler(&org[i].perguntas[j]);
                                    trata(org[i].perguntas[j],&tr_org);
                                    aux = org[i].perguntas[j];
                                }
                                while(tr_org<1);
                                //parametros.h Função para modificar o valor de entrada pelo de saída
                                calculo_empresa_11(&aux);//Chamamento da função RECURSIVA que faz o cálculo da emissão, PASSAGEM POR PARÂMETRO
                                org[i].perguntas[j] = aux;
                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);
                            }
                            else if(org[i].perguntas[j]==12)
                            {
                                do
                                {
                                    printf("Anualmente.\n");
                                    printf("Quantidade(Metros Cúbicos): ");
                                    ler(&org[i].perguntas[j]);
                                    trata(org[i].perguntas[j],&tr_org);
                                    aux = org[i].perguntas[j];
                                }
                                while(tr_org<1);
                                //parametros.h Função para modificar o valor de entrada pelo de saída
                                calculo_empresa_12(&aux);//Chamamento da função RECURSIVA que faz o cálculo da emissão, PASSAGEM POR PARÂMETRO
                                org[i].perguntas[j] = aux;
                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);
                            }

                            else
                            {
                                system("cls");
                                printf("Digite uma opção válida:\n");
                                tr_org = 0;
                            }
                        }
                        while(tr_org<1);
                    }
                    else if(org[i].perguntas[j]==2)
                    {
                        org[i].perguntas[j]=0;
                        tr_org = 1;
                    }
                    else
                    {
                        system("cls");
                        printf("Digite uma opção válida:");
                        tr_org = 0;
                    }
                }
                while(tr_org<1);
                //Fim da Primeira pergunta
                //while(org[i].perguntas[j]<1||org[i].perguntas[j]>2);
                fflush(stdin);
                printf("ORG[%d].PERGUNTA[%d] = %f",i,j,org[i].perguntas[j]);
                printf("\nPressione Enter para continuar.\n");
                getchar();
                system("cls");

                j++;

                struct movel          //DECLARAÇÃO DA STRUCT PARA A FROTA
                {
                    int quantifica;
                    char tipo[40];
                };
                int qntd = 0;
                float acumulador = 0;
                do
                {
                    printf("Sobre a combustão móvel(Frota de veículos):\n");
                    printf("Quantidade de frotas(Separe por tipo de combustível):\n ");
                    scanf("%d",&qntd);
                    trata(qntd,&tr_org);
                }
                while(qntd<1);
                int i1 = 0;
                struct movel frota[qntd];
                for(i1 = 0; i1<qntd; i1++)
                {
                    do
                    {
                        printf("\nFrota %d \n",i1+1);
                        printf("Tipo de combustível:\n");
                        printf("[1] - Biodiesel\n");
                        printf("[2] - Etanol\n");
                        printf("[3] - Gás Liquefeito de Petróleo(GLP)\n");
                        printf("[4] - Gás Natural Veicular(GNV)\n");
                        printf("[5] - Gasolina Automotiva\n");
                        printf("[6] - Óleo Diesel\n");
                        printf("Tipo: ");
                        ler(&org[i].perguntas[j]);
                        if(org[i].perguntas[j] == 1)
                        {
                            do
                            {
                                strcpy(frota[i1].tipo, "Biodiesel");
                                printf("Consumo Anual da Frota em Litros: "); //Fator de emissão 2,43 kg por litro
                                ler(&org[i].perguntas[j]);
                                trata(org[i].perguntas[j],&tr_org);
                                aux = org[i].perguntas[j];
                            }
                            while(tr_org<1);
                            //parametros.h Função para modificar o valor de entrada pelo de saída
                            calculo_empresa_13(&aux);
                            org[i].perguntas[j] = aux;
                            printf("\nRESULTADO %f\n",org[i].perguntas[j]);
                            acumulador = acumulador + aux;
                            printf("Acumulador %f",acumulador);
                        }
                        else if(org[i].perguntas[j] == 2)
                        {
                            do
                            {
                                strcpy(frota[i1].tipo, "Etanol");
                                printf("Consumo Anual da Frota em Litros: "); //Fator de emissão 1,51 kg por litro
                                ler(&org[i].perguntas[j]);
                                trata(org[i].perguntas[j],&tr_org);
                                aux = org[i].perguntas[j];
                            }
                            while(tr_org<1);
                            //parametros.h Função para modificar o valor de entrada pelo de saída
                            calculo_empresa_14(&aux);
                            org[i].perguntas[j] = aux;
                            printf("\nRESULTADO %f\n",org[i].perguntas[j]);
                            acumulador = acumulador + aux;
                            printf("Acumulador %f",acumulador);
                        }
                        else if(org[i].perguntas[j] == 3)
                        {
                            do
                            {
                                strcpy(frota[i1].tipo, "GLP");
                                printf("Consumo Anual da Frota em kg: "); //Fator de emissão 2,93 kg por litro
                                ler(&org[i].perguntas[j]);
                                trata(org[i].perguntas[j],&tr_org);
                                aux = org[i].perguntas[j];
                            }
                            while(tr_org<1);
                            //parametros.h Função para modificar o valor de entrada pelo de saída
                            calculo_empresa_15(&aux);
                            org[i].perguntas[j] = aux;
                            printf("\nRESULTADO %f\n",org[i].perguntas[j]);
                            acumulador = acumulador + aux;
                            printf("Acumulador %f",acumulador);
                        }
                        else if(org[i].perguntas[j] == 4)
                        {
                            do
                            {
                                strcpy(frota[i1].tipo, "GNV");
                                printf("Consumo Anual da Frota em metros cúbicos: "); //Fator de emissão 2,0 kg por metros cúbicos
                                ler(&org[i].perguntas[j]);
                                trata(org[i].perguntas[j],&tr_org);
                                aux = org[i].perguntas[j];
                            }
                            while(tr_org<1);
                            //parametros.h Função para modificar o valor de entrada pelo de saída
                            calculo_empresa_16(&aux);
                            org[i].perguntas[j] = aux;
                            printf("\nRESULTADO %f\n",org[i].perguntas[j]);
                            acumulador = acumulador + aux;
                            printf("Acumulador %f",acumulador);
                        }
                        else if(org[i].perguntas[j] == 5)
                        {
                            do
                            {
                                strcpy(frota[i1].tipo, "Gasolina Automotiva");
                                printf("Consumo Anual da Frota em litros: "); //Fator de emissão 2,28 kg por litro
                                ler(&org[i].perguntas[j]);
                                trata(org[i].perguntas[j],&tr_org);
                                aux = org[i].perguntas[j];
                            }
                            while(tr_org<1);
                            //parametros.h Função para modificar o valor de entrada pelo de saída
                            calculo_empresa_17(&aux);
                            org[i].perguntas[j] = aux;
                            printf("\nRESULTADO %f\n",org[i].perguntas[j]);
                            acumulador = acumulador + aux;
                            printf("Acumulador %f",acumulador);
                        }
                        else if(org[i].perguntas[j] == 6)
                        {
                            do
                            {
                                strcpy(frota[i1].tipo, "Óleo Diesel");
                                printf("Consumo Anual da Frota em litros: "); //Fator de emissão 3,2 kg por litro
                                ler(&org[i].perguntas[j]);
                                trata(org[i].perguntas[j],&tr_org);
                                aux = org[i].perguntas[j];
                            }
                            while(tr_org<1);
                            //parametros.h Função para modificar o valor de entrada pelo de saída
                            calculo_empresa_18(&aux);
                            org[i].perguntas[j] = aux;
                            printf("\nRESULTADO %f\n",org[i].perguntas[j]);
                            acumulador = acumulador + aux;
                            printf("Acumulador %f",acumulador);
                        }
                        else
                        {
                            system("cls");
                            printf("Escolha uma opção válida.\n");
                            tr_org = 0;

                        }
                    }
                    while(tr_org<1);
                    //acumulador = acumulador + org[i].perguntas[j];
                    //printf("Acumulador %f",acumulador);

                }
                org[i].perguntas[j] = acumulador;
                acumulador = 0;
                printf("\n %f\n",org[i].perguntas[j]);
                fflush(stdin);
                j++;
                fflush(stdin);
                do
                {
                    printf("Emissões Fugitivas\n");
                    printf("A sede %d possui equipamentos de Refrigeração e Ar Condicionado(RAC)?\n",i+1);
                    printf("[1] - Sim\n");
                    printf("[2] - Não\n");
                    ler(&org[i].perguntas[j]);
                    trata(org[i].perguntas[j],&tr_org);
                    if(org[i].perguntas[j] == 1)
                    {
                        do
                        {
                            printf("Quantidade: ");
                            scanf("%d",&qntd);
                            if(qntd >=1)
                            {


                                for(i1 = 0; i1<qntd; i1++)
                                {
                                    printf("Indique o tipo do equipamento %d:\n",i1+1);
                                    printf("[1] - Refrigeração Residencial\n");
                                    printf("[2] - Comercial Médio/Grande Porte\n");
                                    printf("[3] - Frigorífico\n");
                                    printf("[4] - Refrigeração Industrial\n");
                                    ler(&org[i].perguntas[j]);
                                    if(org[i].perguntas[j] == 1)
                                    {
                                        do
                                        {
                                            printf("Indique o tipo de Gás:\n");
                                            printf("[1] - R-407C\n");
                                            printf("[2] - R-410A\n");
                                            ler(&org[i].perguntas[j]);
                                            if(org[i].perguntas[j]==1)
                                            {
                                                do
                                                {
                                                    printf("Indique a capacidade em operação anualmente(kg):\n");
                                                    ler(&org[i].perguntas[j]);
                                                    trata(org[i].perguntas[j],&tr_org);
                                                    aux = org[i].perguntas[j];
                                                    //Paramatro.h R-407C residencial emite 0,01 T de CO2e por kg
                                                }
                                                while(tr_org<1);
                                                calculo_empresa_19(&aux);
                                                org[i].perguntas[j] = aux;
                                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);

                                                acumulador = acumulador + org[i].perguntas[j];
                                                printf("acumulador %f\n",acumulador);
                                            }
                                            else if(org[i].perguntas[j]==2)
                                            {
                                                do
                                                {
                                                    printf("Indique a capacidade em operação anualmente(kg):\n");
                                                    ler(&org[i].perguntas[j]);
                                                    trata(org[i].perguntas[j],&tr_org);
                                                    aux = org[i].perguntas[j];
                                                    //Paramatro.h R-410A residencial emite 0,01 T de CO2e por kg
                                                }
                                                while(tr_org<1);
                                                calculo_empresa_20(&aux);
                                                org[i].perguntas[j] = aux;
                                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);

                                                acumulador = acumulador + org[i].perguntas[j];
                                            }
                                            else
                                            {
                                                printf("Digte uma opção válida.\n");
                                                tr_org = 0;
                                            }
                                        }
                                        while(tr_org<1);
                                    }
                                    else if(org[i].perguntas[j]==2)
                                    {
                                        do
                                        {
                                            printf("Indique o tipo de Gás:\n");
                                            printf("[1] - R-407C\n");
                                            printf("[2] - R-410A\n");
                                            ler(&org[i].perguntas[j]);
                                            if(org[i].perguntas[j]==1)
                                            {
                                                do
                                                {
                                                    printf("Indique a capacidade em operação anualmente(kg):\n");
                                                    ler(&org[i].perguntas[j]);
                                                    trata(org[i].perguntas[j],&tr_org);
                                                    aux = org[i].perguntas[j];
                                                    //Paramatro.h R-407C em Comercio Medio/Grande emite 0,57 T de CO2e por kg
                                                }
                                                while(tr_org<1);
                                                calculo_empresa_21(&aux);
                                                org[i].perguntas[j] = aux;
                                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);

                                                acumulador = acumulador + org[i].perguntas[j];
                                            }
                                            else if(org[i].perguntas[j]==2)
                                            {
                                                do
                                                {
                                                    printf("Indique a capacidade em operação anualmente(kg):\n");
                                                    ler(&org[i].perguntas[j]);
                                                    trata(org[i].perguntas[j],&tr_org);
                                                    aux = org[i].perguntas[j];
                                                    //Paramatro.h R-410A em Comercio Medio/Grande emite 0,67 T de CO2e por kg
                                                }
                                                while(tr_org<1);
                                                calculo_empresa_22(&aux);
                                                org[i].perguntas[j] = aux;
                                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);

                                                acumulador = acumulador + org[i].perguntas[j];
                                            }
                                            else
                                            {
                                                printf("Digite uma opção válida.\n");
                                                tr_org = 0;
                                            }
                                        }
                                        while(tr_org<1);
                                    }
                                    else if(org[i].perguntas[j]==3)
                                    {
                                        do
                                        {
                                            printf("Indique o tipo de Gás:\n");
                                            printf("[1] - R-407C\n");
                                            printf("[2] - R-410A\n");
                                            ler(&org[i].perguntas[j]);
                                            if(org[i].perguntas[j]==1)
                                            {
                                                do
                                                {
                                                    printf("Indique a capacidade em operação anualmente(kg):\n");
                                                    ler(&org[i].perguntas[j]);
                                                    trata(org[i].perguntas[j],&tr_org);
                                                    aux = org[i].perguntas[j];
                                                    //Paramatro.h R-407C frigorifico emite 0,24 T de CO2e por kg
                                                }
                                                while(tr_org<1);
                                                calculo_empresa_23(&aux);
                                                org[i].perguntas[j] = aux;
                                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);

                                                acumulador = acumulador + org[i].perguntas[j];
                                            }
                                            else if(org[i].perguntas[j]==2)
                                            {
                                                do
                                                {
                                                    printf("Indique a capacidade em operação anualmente(kg):\n");
                                                    ler(&org[i].perguntas[j]);
                                                    trata(org[i].perguntas[j],&tr_org);
                                                    aux = org[i].perguntas[j];
                                                    //Paramatro.h R-410A Frigorifico emite 0,29 T de CO2e por kg
                                                }
                                                while(tr_org<1);
                                                calculo_empresa_24(&aux);
                                                org[i].perguntas[j] = aux;
                                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);

                                                acumulador = acumulador + org[i].perguntas[j];
                                            }
                                            else
                                            {
                                                printf("Digte uma opção válida.\n");
                                                tr_org = 0;
                                            }
                                        }
                                        while(tr_org<1);
                                    }
                                    else if(org[i].perguntas[j]==4)
                                    {
                                        do
                                        {
                                            printf("Indique o tipo de Gás:\n");
                                            printf("[1] - R-407C\n");
                                            printf("[2] - R-410A\n");
                                            ler(&org[i].perguntas[j]);
                                            if(org[i].perguntas[j]==1)
                                            {
                                                do
                                                {
                                                    printf("Indique a capacidade em operação anualmente(kg):\n");
                                                    ler(&org[i].perguntas[j]);
                                                    trata(org[i].perguntas[j],&tr_org);
                                                    aux = org[i].perguntas[j];
                                                    //Paramatro.h R-407C em Industrial emite 0,41 T de CO2e por kg
                                                }
                                                while(tr_org<1);
                                                calculo_empresa_25(&aux);
                                                org[i].perguntas[j] = aux;
                                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);

                                                acumulador = acumulador + org[i].perguntas[j];
                                            }
                                            else if(org[i].perguntas[j]==2)
                                            {
                                                do
                                                {
                                                    printf("Indique a capacidade em operação anualmente(kg):\n");
                                                    ler(&org[i].perguntas[j]);
                                                    trata(org[i].perguntas[j],&tr_org);
                                                    aux = org[i].perguntas[j];
                                                    //Paramatro.h R-410A em Industrial emite 0,48 T de CO2e por kg
                                                }
                                                while(tr_org<1);
                                                calculo_empresa_26(&aux);
                                                org[i].perguntas[j] = aux;
                                                printf("\nRESULTADO %f\n",org[i].perguntas[j]);

                                                acumulador = acumulador + org[i].perguntas[j];
                                            }
                                            else
                                            {
                                                printf("Digte uma opção válida.\n");
                                                tr_org = 0;
                                            }
                                        }
                                        while(tr_org<1);
                                    }
                                    else
                                    {
                                        printf("Digite um valor válido.\n");
                                        tr_org = 0;
                                    }
                                    //acumulador = acumulador + org[i].perguntas[j];
                                    //printf("acumulador %f\n",acumulador);
                                }
                                org[i].perguntas[j] = acumulador;
                                printf("\n%f\n",org[i].perguntas[j]);
                            }
                            else
                            {
                                printf("Digite um valor válido.");
                                tr_org = 0;
                            }
                        }
                        while(tr_org < 1);

                    }
                    else if(org[i].perguntas[j]== 2)
                    {
                        org[i].perguntas[j] = 0;
                        tr_org = 1;
                    }
                    else
                    {
                        system("cls");
                        printf("Digite uma opção válida:\n ");
                        tr_org = 0;
                    }

                }
                while(tr_org<1);
                j++;
                system("cls");
                printf("Processos Industriais:\n");
                printf("Exemplos: Siderurgia, Produção de cimento, Alumínio, Amônia,entre outros\n");
                do
                {
                    printf("Há processos industriais na %s ?\n",org[i].nome_empresa);
                    printf("[1] - Sim\n");
                    printf("[2] - Não\n");
                    ler(&org[i].perguntas[j]);
                    if(org[i].perguntas[j]==1)
                    {
                        do
                        {
                            printf("Indique o tipo de gás liberado: \n");
                            printf("[1] - Dióxido de Carbono (CO2)\n");
                            printf("[2] - Metano (CH4)\n");
                            printf("[3] - Óxido Nitroso(N2O)\n");
                            ler(&org[i].perguntas[j]);
                            if(org[i].perguntas[j] == 1)
                            {
                                do
                                {
                                    printf("Quantidade (Toneladas): ");
                                    ler(&org[i].perguntas[j]);
                                    trata(org[i].perguntas[j],&tr_org);
                                }
                                while(tr_org < 1);

                            }
                            else if(org[i].perguntas[j] == 2)
                            {
                                do
                                {
                                    printf("Quantidade (Toneladas): ");
                                    ler(&org[i].perguntas[j]);
                                    trata(org[i].perguntas[j],&tr_org);
                                    aux = org[i].perguntas[j];
                                }
                                while(tr_org < 1);
                                calculo_empresa_27(&aux);
                                org[i].perguntas[j] = aux;
                            }
                            else if(org[i].perguntas[j] == 3)
                            {
                                do
                                {
                                    printf("Quantidade (Toneladas): ");
                                    ler(&org[i].perguntas[j]);
                                    trata(org[i].perguntas[j],&tr_org);
                                    aux = org[i].perguntas[j];
                                }
                                while(tr_org < 1);
                                calculo_empresa_28(&aux);
                                org[i].perguntas[j] = aux;
                            }
                            else
                            {
                                printf("Escolha uma opção válida.\n");
                                tr_org = 0;

                            }
                        }
                        while(tr_org < 1);
                    }
                    else if(org[i].perguntas[j]==2)
                    {
                        org[i].perguntas[j] = 0;
                        tr_org = 1;
                    }
                }
                while(tr_org<1);
                j++;
                fflush(stdin);
                system("cls");

                printf("Atividades Agrícolas:\n");
                printf("A Categoria Atividades Agrícolas agrupa, no âmbito do GHG Protocol, as emissões de:\n");
                printf("Drenagem e preparo do solo(CO2,CH4,N2O), adição de fertilizantes sintéticos(N2O)\n");
                printf("Adição de ureia e calcário para solos (CO2), entre outros.");
                do{
                printf("Há %s possui atividades agrícolas?\n",org[i].nome_empresa);
                printf("[1] - Sim\n");
                printf("[2] - Não\n");
                ler(&org[i].perguntas[j]);
                if(org[i].perguntas[j] == 1)
                {
                   printf("Indique o tipo de gás emitido:\n");
                   printf("[1] - Dióxido de Carbono\n");
                   printf("[2] - Metano(CH4)");
                   printf("[3] - Óxido Nitroso (N2O)");
                   ler(&org[i].perguntas[j]);
                   if(org[i].perguntas[j] == 1)
                            {
                                do
                                {
                                    printf("Quantidade (Toneladas): ");
                                    ler(&org[i].perguntas[j]);
                                    trata(org[i].perguntas[j],&tr_org);
                                }
                                while(tr_org < 1);

                            }
                            else if(org[i].perguntas[j] == 2)
                            {
                                do
                                {
                                    printf("Quantidade (Toneladas): ");
                                    ler(&org[i].perguntas[j]);
                                    trata(org[i].perguntas[j],&tr_org);
                                    aux = org[i].perguntas[j];
                                }
                                while(tr_org < 1);
                                calculo_empresa_27(&aux);
                                org[i].perguntas[j] = aux;
                            }
                            else if(org[i].perguntas[j] == 3)
                            {
                                do
                                {
                                    printf("Quantidade (Toneladas): ");
                                    ler(&org[i].perguntas[j]);
                                    trata(org[i].perguntas[j],&tr_org);
                                    aux = org[i].perguntas[j];
                                }
                                while(tr_org < 1);
                                calculo_empresa_28(&aux);
                                org[i].perguntas[j] = aux;
                            }
                            else
                            {
                                printf("Escolha uma opção válida.\n");
                                tr_org = 0;

                            }
                }
                else if(org[i].perguntas[j] == 2)
                {
                    org[i].perguntas[j] == 0;
                    tr_org = 1;
                }
                else
                {
                    system("cls");
                    printf("Digite uma opção válida.\n");
                    tr_org = 0;
                }
                }while(tr_org < 1);
                float soma=0;
                for(i1 = 0; i1<numsed; i1++)
                {
                    for(j=0; j<5; j++)
                    {
                        soma = soma+org[i].perguntas[j];
                    }

                }
                printf("\nTESTES \nSOMA: %f\n",soma);
                printf("\nORG[%d].PERGUNTAS[0] = %f\n",i,org[i].perguntas[0]);
                float emissao_estacionaria = org[i].perguntas[0];
                printf("\n ESTACIONARIA %f\n",emissao_estacionaria);

                printf("\nORG[%d].PERGUNTAS[1] = %f\n",i,org[i].perguntas[1]);
                float frota_emissao = org[i].perguntas[1];
                printf("\n Frota %f\n",frota_emissao);

                printf("\nORG[%d].PERGUNTAS[2] = %f\n",i,org[i].perguntas[2]);
                float emissao_fugitiva = org[i].perguntas[2];
                printf("\n FUGITIVA %f",emissao_fugitiva);

                printf("\nORG[%d].PERGUNTAS[3] = %f\n",i,org[i].perguntas[3]);
                float processo_indus = org[i].perguntas[3];
                printf("\n INDUSTRIA %f",processo_indus);

                 printf("\nORG[%d].PERGUNTAS[4] = %f\n",i,org[i].perguntas[4]);
                float agricola = org[i].perguntas[4];
                printf("\n AGRICOLA %f",agricola);

                char nome_emp[60];
                char setor_emp[50];
                strcpy(nome_emp,org[i].nome_empresa);
                printf("\nNOME %s \n",nome_emp);
                strcpy(setor_emp,org[i].setor);
                printf("\nSETOR %s \n",setor_emp);

                getchar();

                output(nome_emp,numsed,setor_emp,emissao_estacionaria,frota_emissao,emissao_fugitiva,soma,org[i].responsavel,processo_indus,agricola);
            }

        }
        else if(org[i].perguntas[j]==2)
        {

        }
        else if(org[i].perguntas[j]==3)
        {

        }
        else
        {
            system("cls");
            printf("Por favor, digite uma opção válida:");
            tr_org = 0;
        }
    }
    while(tr_org<1);







}

#endif // EMPRESARIAL_H_INCLUDED
