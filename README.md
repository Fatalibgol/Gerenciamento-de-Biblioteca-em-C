# 📚 Sistema de Gerenciamento de Biblioteca em C

Este é um projeto acadêmico desenvolvido para a disciplina de Estrutura de Dados. Trata-se de uma aplicação de console em linguagem C pura para o gerenciamento de uma biblioteca, permitindo cadastrar e listar livros.

---

##  STATUS
**Projeto Concluído**

---

## 🚀 Funcionalidades

O menu principal permite ao usuário realizar as seguintes ações:

* **[x] a) Cadastrar um novo Livro:** Solicita ao usuário o título, autor, editora e edição do livro.
* **[x] b) Listar todos os Livros:** Exibe na tela todos os livros cadastrados na biblioteca.
* **[x] c) Sair:** Encerra a aplicação.

---

## 🛠️ Tecnologias Utilizadas

* **Linguagem C**
* **GCC (MinGW)** como compilador.

---

## 📖 Estrutura do Código

O projeto foi estruturado da seguinte forma:

* `struct Livros`: Define a estrutura de dados para armazenar as informações de cada livro (título, autor, editora, edição).
* `limparBuffer()`: Uma função utilitária essencial em C para limpar o buffer de entrada (`stdin`) após leituras, evitando problemas com `scanf` e `fgets`.
* `main()`: Contém o loop principal da aplicação (`do-while`) e a lógica do menu de seleção (`switch-case`) para chamar as funcionalidades.
* Constantes (`#define`): Usadas para definir valores fixos como `MAX_LIVROS` (50) e `TAM_STRING` (100), facilitando a manutenção do código.

---

## 🏃 Como Executar

Você precisará de um compilador C (como o GCC) instalado.

1.  Clone este repositório:
    ```bash
    git clone [https://github.com/SEU-USUARIO/NOME-DO-REPOSITORIO.git](https://github.com/SEU-USUARIO/NOME-DO-REPOSITORIO.git)
    ```

2.  Navegue até o diretório do projeto:
    ```bash
    cd NOME-DO-REPOSITORIO
    ```

3.  Compile o arquivo `.c`:
    ```bash
    gcc proj1_estrutura.c -o biblioteca
    ```
    *(Use o nome que você deu ao seu arquivo .c)*

4.  Execute o programa:
    * No Windows: `biblioteca.exe`
    * No Linux/Mac: `./biblioteca`
