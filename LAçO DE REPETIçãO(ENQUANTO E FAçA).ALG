Algoritmo "Laço de repetição(Enquanto e faça)alt1"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/09/2023
Var
   // Seção de Declarações das variáveis
   nota1:real
   nota2:real
   media: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
      escreva("Digite a primeira nota:")
      leia(nota1)
      
      escreva("Digite a segunda nota:")
      leia(nota2)
      enquanto (nota1 < 0) ou (nota1 > 10) faca
         escreval("Nota inválida")
         escreval("Digite a nota novamente...")
         escreval("")
         escreval("Digite uma nota:")
         leia(nota1)
      fimenquanto

      enquanto (nota2 < 0) ou (nota2 > 10) faca
         escreval("Nota inválida")
         escreval("Digite a nota novamente...")
         escreval("")
         escreval("Digite uma nota:")
         leia(nota2)
 fimenquanto
   media <- nota1 + nota2 / 2
   escreva("A sua media é:" , media)

Fimalgoritmo