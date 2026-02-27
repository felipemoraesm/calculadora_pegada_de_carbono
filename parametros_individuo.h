#ifndef PARAMETROS_INDIVIDUO_H_INCLUDED
#define PARAMETROS_INDIVIDUO_H_INCLUDED

void calculo_emissao_1(int quantidade_pessoa, float quantidade_questao)
{
    float resultado = 35.89 * quantidade_questao / quantidade_pessoa;
    printf("Você gerou %.2f kg de dióxido de carbono por ano com essa ação.", resultado);
}

void calculo_emissao_2(int quantidade_pessoa, float quantidade_questao)
{
    quantidade_questao = quantidade_questao * 12;
    float resultado = 1.88 * quantidade_questao / quantidade_pessoa;
    printf("Você gerou %.2f kg de dióxido de carbono por ano com essa ação.", resultado);
}

void calculo_emissao_3(int quantidade_pessoa, float quantidade_questao)
{
    float resultado = 5.5 * quantidade_questao / quantidade_pessoa;
    printf("Você gerou %.2f kg de dióxido de carbono por ano com essa ação.", resultado);
}
void calculo_emissao_4(int quantidade_pessoa, float quantidade_questao)
{
    float resultado = 0.295 * quantidade_questao * 12 / quantidade_pessoa;
    printf("Você gerou %.2f kg de dióxido de carbono por ano com essa ação.", resultado);
}
void calculo_emissao_5(int quantidade_pessoa, float quantidade_questao)
{
    float resultado =  (quantidade_questao / 5.84 ) * 2.28 * 12;
    printf("Você gerou %.2f kg de dióxido de carbono por ano com combustível.", resultado);
}
void calculo_emissao_6(int quantidade_pessoa, float quantidade_questao)
{
    float resultado = (quantidade_questao / 4.94 ) * 3.2 * 12;
    printf("Você gerou %.2f kg de dióxido de carbono por ano com combustível.", resultado);
}
void calculo_emissao_7(int quantidade_pessoa, float quantidade_questao)
{
    float resultado = (quantidade_questao / 3.64 ) * 1.72 * 12;
    printf("Você gerou %.2f kg de dióxido de carbono por ano com combustível.", resultado);
}
void calculo_emissao_8(int quantidade_pessoa, float quantidade_questao)
{
    float resultado = (quantidade_questao * 5);
    printf("Você gerou %.2f kg de dióxido de carbono por ano com essa ação.", resultado);
}
void calculo_emissao_9(int quantidade_pessoa, float quantidade_questao)
{
    float resultado = (quantidade_questao * 160);
    printf("Você gerou %.2f kg de dióxido de carbono por ano com essa ação.", resultado);
}
void calculo_emissao_10(int quantidade_pessoa, float quantidade_questao)
{
    float resultado = (quantidade_questao * 2250);
    printf("Você gerou %.2f kg de dióxido de carbono por ano com essa ação.", resultado);
}
void calculo_emissao_11(int quantidade_pessoa, float quantidade_questao)
{
    float resultado = (quantidade_questao * 0.14);
    printf("Você gerou %.2f kg de dióxido de carbono por ano com essa ação.", resultado);
}
void calculo_emissao_12(int quantidade_pessoa, float quantidade_questao)
{
    float resultado = ((quantidade_questao * 1.53) / (quantidade_pessoa)) * 12;
    printf("Você gerou %.2f kg de dióxido de carbono por ano com essa ação.", resultado);
}
void calculo_emissao_13(int quantidade_pessoa, float quantidade_questao)
{
    float resultado = ((quantidade_questao * 19.93) / (quantidade_pessoa)) * 12;
    printf("Você gerou %.2f kg de dióxido de carbono por ano com essa ação.", resultado);
}
void calculo_emissao_14(int quantidade_pessoa, float quantidade_questao)
{
    float resultado = ((quantidade_questao * 60 * 12));
    printf("Você gerou %.2f kg de dióxido de carbono por ano com essa ação.", resultado);
}
void calculo_emissao_15(int quantidade_pessoa, float quantidade_questao)
{
    float resultado = ((quantidade_questao * 20 * 12));
    printf("Você gerou %.2f kg de dióxido de carbono por ano com essa ação.", resultado);
}
void calculo_emissao_16(int quantidade_pessoa, float quantidade_questao)
{
    float resultado = ((quantidade_questao * 12));
    printf("Você gerou %.2f kg de dióxido de carbono por ano com essa ação.", resultado);
}



#endif // PARAMETROS_INDIVIDUO_H_INCLUDED
