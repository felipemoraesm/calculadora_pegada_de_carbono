#ifndef OUTPUT_H_INCLUDED
#define OUTPUT_H_INCLUDED

    int output(char nome[60],int sede,char setor[50],float estacionaria,float frota,float fugitiva,float soma,char responsavel[50],float indus,float agri)
    {
        FILE *arquivo;
        char texto[350];

        // Abre o arquivo para escrita
        arquivo = fopen("exemplo.txt", "w");

        // Verifica se o arquivo foi aberto corretamente
        if (arquivo == NULL)
        {
            printf("Erro ao abrir o arquivo.");
            return 1;
        }

        // Escreve a frase no arquivo
        fprintf(arquivo, "Organização: %s\n", nome);
        fprintf(arquivo, "Sede: %d\n", sede);
        fprintf(arquivo, "Setor: %s\n", setor);

        fprintf(arquivo, "Emissão estacionária: %.2f toneladas de CO2.\n", estacionaria);
        fprintf(arquivo, "Frota de veículos: %.2f toneladas de CO2.\n", frota);
        fprintf(arquivo, "Emissões Fugitiva: %.2f toneladas de CO2.\n", fugitiva);
        fprintf(arquivo, "Emissões Industriais: %.2f toneladas de CO2.\n", indus);
        fprintf(arquivo, "Emissões Agrícolas: %.2f toneladas de CO2.\n", agri);
        fprintf(arquivo, "Sua empresa emitiu aproximadamente %.2f toneladas de CO2.\n", soma);
        fprintf(arquivo, "Responsável pelo relatório: %s\n", responsavel);
        fprintf(arquivo, "Acesse www.parceria.com.br para diminuir sua pegada de carbono\n");
        // Fecha o arquivo
        fclose(arquivo);

        printf("Frase escrita no arquivo com sucesso.\n");

        // Abre o arquivo novamente para leitura
        arquivo = fopen("exemplo.txt", "r");

        // Verifica se o arquivo foi aberto corretamente
        if (arquivo == NULL)
        {
            printf("Erro ao abrir o arquivo para leitura.");
            return 1;
        }

        // Lê e exibe o conteúdo do arquivo
        printf("Conteúdo do arquivo:\n");
        while (fgets(texto, sizeof(texto), arquivo) != NULL)
        {
            printf("%s", texto);
        }

        // Fecha o arquivo
        fclose(arquivo);
        return 0;
    }


#endif // OUTPUT_H_INCLUDED
