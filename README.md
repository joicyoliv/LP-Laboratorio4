# Laboratório 4

# "Programação genérica e utilização de TADs genéricos"
### Aluna: Joicy Daliane Silva Oliveira
### Aluna: William Correia
### Professor: Silvio Costa Sampaio


# Questão 01
Escreva um programa, utilizando a estrutura de Pilha (Stack) já implementada por você em aulas anteriores, que permita avaliar se uma palavra (ou frase) é ou não palíndroma. Uma palavra ou frase é dita palíndromo se a sequência de letras que a forma é a mesma, seja ela lida da esquerda para a direita ou vice-versa. Exemplos: “arara”, “raiar”, “hanah” ou “Socorram-me, SUBI NO ÔNIBUS EM MARROCOS”. Na comparação das letras que formam a palavra, acentos e outros caracteres (fora de A-Z, a-z, 0-9) devem ser desprezados. Maiúsculas e minúsculas também não são diferenciadas, ou seja, (A == a).

Dica: Utilize as características da estrutura de dados Pilha para facilitar a resolução do problema. Nota: Sua implementação de Pilha (código fonte) deve ser incorporada ao seu projeto.


# Questão 02
Escreva um programa, utilizando a TAD Pilha (a mesma usada na questão anterior), que permita avaliar uma
dada expressão em notação polonesa inversa. Notação Polonesa Inversa (ou RPN na sigla em inglês, de
Reverse Polish Notation), também conhecida como notação pós-fixada, foi inventada pelo filósofo e cientista
da computação australiano Charles Hamblin em meados dos anos 1950, para habilitar armazenamento de
memória de endereço zero. Ela deriva da notação polonesa, introduzida em 1920 pelo matemático polonês Jan
Łukasiewicz. (Wikipedia).

Dica: Utilize as características da estrutura de dados Pilha para facilitar a resolução do problema.

# Questão 03
Em uma Lista Circular Encadeada, o último nó aponta para o primeiro (e não para NULL). Dessa forma, se
quisermos implementar uma Fila Circular a partir desta Lista Circular Encadeada, basta um ponteiro para o
FIM, pois o COMEÇO será́ o seu próximo. Atendendo a estas condições, implemente em C++ as respectivas
classes, atributos e métodos (incluindo construtores e destrutor) necessários para atender às especificações de
uma Fila Circular (usando uma Lista Circular Encadeada para armazenamento dos elementos da fila), com
as operações para criar fila; testar se a fila está vazia; entrar na fila; e sair da fila. Sua implementação deve ser genérica, ou seja, capaz de operar com qualquer tipo de dado.
Utilizando de herança, implemente sua Lista Circular Encadeada como uma especialização de Lista Simplesmente Encadeada. Implemente ainda um programa que permita testar as operações em sua Fila Circular.

# Compilação
Clone este repositório.
Para a compilação da questão entre no diretório da questão utilize o comando 'make' no terminal do Linux.

# Executar os programas
### O programa da Questão 01 - ./bin/palindromo
### O programa da Questão 02 - ./bin/polonesa
### O programa da Questão 03 - ./bin/circular

