Algoritmo "La�o de repeti��o(Enquanto e fa�a)alt1"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/09/2023
Var
   // Se��o de Declara��es das vari�veis
   nota1:real
   nota2:real
   media: real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
      escreva("Digite a primeira nota:")
      leia(nota1)
      
      escreva("Digite a segunda nota:")
      leia(nota2)
      enquanto (nota1 < 0) ou (nota1 > 10) faca
         escreval("Nota inv�lida")
         escreval("Digite a nota novamente...")
         escreval("")
         escreval("Digite uma nota:")
         leia(nota1)
      fimenquanto

      enquanto (nota2 < 0) ou (nota2 > 10) faca
         escreval("Nota inv�lida")
         escreval("Digite a nota novamente...")
         escreval("")
         escreval("Digite uma nota:")
         leia(nota2)
 fimenquanto
   media <- nota1 + nota2 / 2
   escreva("A sua media �:" , media)

Fimalgoritmo