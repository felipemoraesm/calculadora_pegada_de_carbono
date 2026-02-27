#ifndef PARAMETROS_H_INCLUDED
#define PARAMETROS_H_INCLUDED

float calculo_empresa_1_recursivo(float resposta_questao1)
{
    if (resposta_questao1 == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_1_recursivo(resposta_questao1 - 1) + 0.08;
    }
}

void calculo_empresa_1(float *aux)
{
    float resultado = calculo_empresa_1_recursivo(*aux);
    *aux = resultado; // Chamada da função recursiva
    printf("Você gerou %.2f toneladas de dióxido de carbono por ano com essa ação.\n", resultado);
}

float calculo_empresa_2_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_2_recursivo(resposta_questao - 1) + 2.46;
    }
}

void calculo_empresa_2(float *aux)
{
    float resultado = calculo_empresa_2_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado/1000;
    printf("Você gerou %.2f Toneladas de dióxido de carbono por ano com essa ação.\n", resultado/1000);
}

float calculo_empresa_3_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_3_recursivo(resposta_questao - 1) + 2.56;
    }
}

void calculo_empresa_3(float *aux)
{
    float resultado = calculo_empresa_3_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado;
    printf("Você gerou %.2f toneladas de dióxido de carbono por ano com essa ação.\n", resultado);
}

float calculo_empresa_4_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_4_recursivo(resposta_questao - 1) + 2.95;
    }
}

void calculo_empresa_4(float *aux)
{
    float resultado = calculo_empresa_4_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado;
    printf("Você gerou %.2f toneladas de dióxido de carbono por ano com essa ação.\n", resultado);
}

float calculo_empresa_5_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_5_recursivo(resposta_questao - 1) + 0.16;
    }
}

void calculo_empresa_5(float *aux)
{
    float resultado = calculo_empresa_5_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado;
    printf("Você gerou %.2f toneladas de dióxido de carbono por ano com essa ação.\n", resultado);
}

float calculo_empresa_6_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_6_recursivo(resposta_questao - 1) + 1.51;
    }
}

void calculo_empresa_6(float *aux)
{
    float resultado = calculo_empresa_6_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado/1000;
    printf("Você gerou %.2f Toneladas de dióxido de carbono por ano com essa ação.\n", resultado/1000);
}

float calculo_empresa_7_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_7_recursivo(resposta_questao - 1) + 2.94;
    }
}

void calculo_empresa_7(float *aux)
{
    float resultado = calculo_empresa_7_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado;
    printf("Você gerou %.2f toneladas de dióxido de carbono por ano com essa ação.\n", resultado);
}

float calculo_empresa_8_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_8_recursivo(resposta_questao - 1) + 2.28;
    }
}

void calculo_empresa_8(float *aux)
{
    float resultado = calculo_empresa_8_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado/1000;
    printf("Você gerou %.2f Toneladas de dióxido de carbono por ano com essa ação.\n", resultado/1000);
}

float calculo_empresa_9_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_9_recursivo(resposta_questao - 1) + 1.45;
    }
}

void calculo_empresa_9(float *aux)
{
    float resultado = calculo_empresa_9_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado;
    printf("Você gerou %.2f toneladas de dióxido de carbono por ano com essa ação.\n", resultado);
}

float calculo_empresa_10_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_10_recursivo(resposta_questao - 1) + 0.62;
    }
}

void calculo_empresa_10(float *aux)
{
    float resultado = calculo_empresa_10_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado;
    printf("Você gerou %.2f toneladas de dióxido de carbono por ano com essa ação.\n", resultado);
}

float calculo_empresa_11_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_11_recursivo(resposta_questao - 1) + 3.2;
    }
}

void calculo_empresa_11(float *aux)
{
    float resultado = calculo_empresa_11_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado/1000;
    printf("Você gerou %.2f Toneladas de dióxido de carbono por ano com essa ação.\n", resultado/1000);
}

float calculo_empresa_12_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_12_recursivo(resposta_questao - 1) + 2.95;
    }
}

void calculo_empresa_12(float *aux)
{
    float resultado = calculo_empresa_12_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado;
    printf("Você gerou %.2f toneladas de dióxido de carbono por ano com essa ação.\n", resultado);
}

float calculo_empresa_13_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_13_recursivo(resposta_questao - 1) + 2.43;
    }
}

void calculo_empresa_13(float *aux)
{
    float resultado = calculo_empresa_13_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado/1000;
    printf("Você gerou %.2f Toneladas de dióxido de carbono por ano com essa ação.\n", resultado/1000);
}

float calculo_empresa_14_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_14_recursivo(resposta_questao - 1) + 1.51;
    }
}

void calculo_empresa_14(float *aux)
{
    float resultado = calculo_empresa_14_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado/1000;
    printf("Você gerou %.2f Toneladas de dióxido de carbono por ano com essa ação.\n", resultado/1000);
}

float calculo_empresa_15_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_15_recursivo(resposta_questao - 1) + 2.93;
    }
}

void calculo_empresa_15(float *aux)
{
    float resultado = calculo_empresa_15_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado/1000;
    printf("Você gerou %.2f Toneladas de dióxido de carbono por ano com essa ação.\n", resultado/1000);
}

float calculo_empresa_16_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_16_recursivo(resposta_questao - 1) + 2;
    }
}

void calculo_empresa_16(float *aux)
{
    float resultado = calculo_empresa_16_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado/1000;
    printf("Você gerou %.2f Toneladas de dióxido de carbono por ano com essa ação.\n", resultado/1000);
}

float calculo_empresa_17_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_17_recursivo(resposta_questao - 1) + 2.28;
    }
}

void calculo_empresa_17(float *aux)
{
    float resultado = calculo_empresa_17_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado/1000;
    printf("Você gerou %.2f Toneladas de dióxido de carbono por ano com essa ação.\n", resultado/1000);
}

float calculo_empresa_18_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_18_recursivo(resposta_questao - 1) + 3.2;
    }
}

void calculo_empresa_18(float *aux)
{
    float resultado = calculo_empresa_18_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado/1000;
    printf("Você gerou %.2f Toneladas de dióxido de carbono por ano com essa ação.\n", resultado/1000);
}

float calculo_empresa_19_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_19_recursivo(resposta_questao - 1) + 0.01;
    }
}

void calculo_empresa_19(float *aux)
{
    float resultado = calculo_empresa_19_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado;
    printf("Você gerou %.2f toneladas de dióxido de carbono por ano com essa ação.\n", resultado);
}

float calculo_empresa_20_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_20_recursivo(resposta_questao - 1) + 0.01;
    }
}

void calculo_empresa_20(float *aux)
{
    float resultado = calculo_empresa_20_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado;
    printf("Você gerou %.2f toneladas de dióxido de carbono por ano com essa ação.\n", resultado);
}

float calculo_empresa_21_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_21_recursivo(resposta_questao - 1) + 0.57;
    }
}

void calculo_empresa_21(float *aux)
{
    float resultado = calculo_empresa_21_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado;
    printf("Você gerou %.2f toneladas de dióxido de carbono por ano com essa ação.\n", resultado);
}

float calculo_empresa_22_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_22_recursivo(resposta_questao - 1) + 0.67;
    }
}

void calculo_empresa_22(float *aux)
{
    float resultado = calculo_empresa_22_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado;
    printf("Você gerou %.2f toneladas de dióxido de carbono por ano com essa ação.\n", resultado);
}

float calculo_empresa_23_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_23_recursivo(resposta_questao - 1) + 0.24;
    }
}

void calculo_empresa_23(float *aux)
{
    float resultado = calculo_empresa_23_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado;
    printf("Você gerou %.2f toneladas de dióxido de carbono por ano com essa ação.\n", resultado);
}

float calculo_empresa_24_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_24_recursivo(resposta_questao - 1) + 0.29;
    }
}

void calculo_empresa_24(float *aux)
{
    float resultado = calculo_empresa_24_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado;
    printf("Você gerou %.2f toneladas de dióxido de carbono por ano com essa ação.\n", resultado);
}

float calculo_empresa_25_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_25_recursivo(resposta_questao - 1) + 0.41;
    }
}

void calculo_empresa_25(float *aux)
{
    float resultado = calculo_empresa_25_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado;
    printf("Você gerou %.2f toneladas de dióxido de carbono por ano com essa ação.\n", resultado);
}

float calculo_empresa_26_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_26_recursivo(resposta_questao - 1) + 0.48;
    }
}

void calculo_empresa_26(float *aux)
{
    float resultado = calculo_empresa_26_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado;
    printf("Você gerou %.2f toneladas de dióxido de carbono por ano com essa ação.\n", resultado);
}

float calculo_empresa_27_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_27_recursivo(resposta_questao - 1) + 28;
    }
}

void calculo_empresa_27(float *aux)
{
    float resultado = calculo_empresa_27_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado;
    printf("Você gerou %.2f toneladas de dióxido de carbono por ano com essa ação.\n", resultado);
}

float calculo_empresa_28_recursivo(float resposta_questao)
{
    if (resposta_questao == 0)
    {
        return 0;
    }
    else
    {
        return calculo_empresa_28_recursivo(resposta_questao - 1) + 265;
    }
}

void calculo_empresa_28(float *aux)
{
    float resultado = calculo_empresa_28_recursivo(*aux); // Chamada da função recursiva
    *aux = resultado;
    printf("Você gerou %.2f toneladas de dióxido de carbono por ano com essa ação.\n", resultado);
}

#endif // PARAMETROS_H_INCLUDED
