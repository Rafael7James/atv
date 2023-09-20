Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/09/2023
Var
   // Seção de Declarações das variáveis
   resposta: caracter
   i: Inteiro
   nota:real
   soma:real
   media:real
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   enquanto (resposta <> "não") faca
      escreva("Digite a ",i + 1,"ª nota: ")
      leia(nota)

      soma <- soma + nota
      i <- i + 1

      escreval("Deseja inserir mais uma nota?")
      leia(resposta)
   fimenquanto

   media <- soma / i

   escreval("Quantidade de notas:",i)
   escreval("Soma das notas:", soma)
   escreval("Média: ", media)

Fimalgoritmo