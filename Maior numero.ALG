Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 05/09/2023
Var
   // Se��o de Declara��es das vari�veis
   numero1: Inteiro
   numero2: Inteiro
   numero3: Inteiro
   maior_numero: inteiro
   menor_numero: inteiro
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreva ("Digite o primeiro n�mero: ")
   leia (numero1)

   escreva("Digite o segundo n�mero: ")
   leia (numero2)

   escreva("Digite o terceiro n�mero: ")
   leia (numero3)

   se (numero1 > numero2) e (numero1 > numero3) entao
      escreval ("O maior �: ", numero1)
   senao
      escreval ("O maior �: ", numero1)
   senao
      se (numero2 > numero1) e (numero2 > numero3) entao
         escreval ("O maior �: ", numero2)
      senao
         se (numero3 > numero1) e (numero3 > numero2) entao
            escreval ("O maior �: ",numero3)

         fimse
      fimse
      fimse

Fimalgoritmo