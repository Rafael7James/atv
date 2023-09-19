Algoritmo "Par ou Impar (Laço de Repetição)"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/09/2023
Var
// Seção de Declarações das variáveis 
i: inteiro
numero: inteiro
Par:inteiro
Impar:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
para i de 1 ate 5 passo 1 faca
escreva("Digite um numero:")
leia(numero)

se (numero % 2 = 0 ) entao
par <- par + 1 //contador
senao
impar <- impar + 1 //contador
fimse
fimpara
escreval("Quantidade de numeros pares" , par)
escreval("Quantidade de numeros impares" , impar)

Fimalgoritmo