Desenvolvido como projeto final da disciplina de Algoritmos e Programação 2, do semestre 2023/2.

# Calculadora de Pegada de Carbono

Este projeto é uma aplicação de interface de linha de comando (CLI) desenvolvida em **Linguagem C** para o cálculo de emissões de gases de efeito estufa (CO2e). A ferramenta foi projetada para atender tanto cenários individuais quanto corporativos, utilizando métricas de sustentabilidade reais.

## Tecnologias e Conceitos Aplicados
- **Linguagem C**: Foco em eficiência algorítmica e manipulação de baixo nível.
- **Modularização**: O código é dividido em múltiplos arquivos de cabeçalho (`.h`) para facilitar a manutenção e escalabilidade.
- **Persistência de Dados (I/O)**: Implementação de leitura e escrita em arquivos `.txt` para gerenciamento de logins e histórico de resultados.
- **Recursividade**: Utilização de funções recursivas para o processamento dos cálculos de emissão na camada de parâmetros.
- **Estruturas de Dados**: Uso de `structs` para organizar informações complexas de usuários e organizações.

## Funcionalidades
- **Sistema de Login e Cadastro**: Persistência de credenciais em arquivo externo.
- **Módulo Individual**: Questionário detalhado sobre hábitos de consumo (gás, energia, transporte, alimentação).
- **Módulo Empresarial**: Avaliação de emissões de Escopo 1 (fontes estacionárias e frotas móveis) e emissões fugitivas (RAC).
- **Tratamento de Erros**: Validação de entradas do usuário para garantir a integridade dos cálculos.

## Como Executar
1. Certifique-se de ter um compilador C instalado (GCC, Code::Blocks, etc).
2. Clone o repositório.
3. Compile o arquivo `main.c`.
4. Certifique-se de que todos os arquivos `.h` estão no mesmo diretório.

## Estrutura do Projeto
O projeto utiliza uma arquitetura modularizada para separar a lógica de negócio da interface:
- `individual.h` / `empresarial.h`: Lógica dos questionários.
- `parametros.h`: Funções recursivas de cálculo de emissão.
- `login.h`: Gerenciamento de acesso e persistência de usuários.
- `tratamento_erro.h`: Validação de dados.
