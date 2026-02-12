Sistema de Gerenciamento de Biblioteca
Projeto desenvolvido para a disciplina de Estrutura de Dados. Consiste em uma aplicação de console escrita em linguagem C para a gestão simplificada de um acervo de livros.

Status do Projeto
Finalizado

Funcionalidades Implementadas
O sistema opera via menu interativo com as seguintes opções:

Cadastro de Livro: Registro de título, autor, editora e edição.

Listagem: Exibição detalhada de todos os itens armazenados na memória.

Encerramento: Finalização segura do processo.

Requisitos Técnicos
Linguagem: C (Padrão ANSI/ISO)

Compilador Recomendado: GCC

Estrutura e Organização do Código
O software utiliza conceitos fundamentais de manipulação de memória e tipos abstratos de dados:

struct Livros: Definição da estrutura que encapsula os atributos do objeto livro.

limparBuffer(): Implementação interna para tratamento de resíduos no buffer de entrada (stdin), garantindo a integridade da leitura de strings.

Controle de Fluxo: Estrutura baseada em loop do-while e condicional switch-case para gestão de estados do menu.

Definições de Pré-processador: Uso de #define para gerenciamento de constantes como limites de array (MAX_LIVROS) e tamanho de buffers de texto (TAM_STRING).

Instruções de Compilação e Execução
Para compilar o projeto, certifique-se de ter o GCC instalado em seu ambiente.

Clone o repositório:

Bash
git clone https://github.com/SEU-USUARIO/NOME-DO-REPOSITORIO.git
Acesse a pasta do projeto:

Bash
cd NOME-DO-REPOSITORIO
Compile o código-fonte:

Bash
gcc proj1_estrutura.c -o biblioteca
Execute o binário gerado:

Windows: biblioteca.exe

Linux/macOS: ./biblioteca
