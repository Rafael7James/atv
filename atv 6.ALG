Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/09/2023
Var
   // Se��o de Declara��es das vari�veis
   resposta: caracter
   i: Inteiro
   nota:real
   soma:real
   media:real
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   enquanto (resposta <> "n�o") faca
      escreva("Digite a ",i + 1,"� nota: ")
      leia(nota)

      soma <- soma + nota
      i <- i + 1

      escreval("Deseja inserir mais uma nota?")
      leia(resposta)
   fimenquanto

   media <- soma / i

   escreval("Quantidade de notas:",i)
   escreval("Soma das notas:", soma)
   escreval("M�dia: ", media)

Fimalgoritmo