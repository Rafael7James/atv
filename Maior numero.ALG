Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 05/09/2023
Var
   // Seção de Declarações das variáveis
   numero1: Inteiro
   numero2: Inteiro
   numero3: Inteiro
   maior_numero: inteiro
   menor_numero: inteiro
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva ("Digite o primeiro número: ")
   leia (numero1)

   escreva("Digite o segundo número: ")
   leia (numero2)

   escreva("Digite o terceiro número: ")
   leia (numero3)

   se (numero1 > numero2) e (numero1 > numero3) entao
      escreval ("O maior é: ", numero1)
   senao
      escreval ("O maior é: ", numero1)
   senao
      se (numero2 > numero1) e (numero2 > numero3) entao
         escreval ("O maior é: ", numero2)
      senao
         se (numero3 > numero1) e (numero3 > numero2) entao
            escreval ("O maior é: ",numero3)

         fimse
      fimse
      fimse

Fimalgoritmo