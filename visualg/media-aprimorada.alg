algoritmo "media"
// Função :
// Autor :
// Data : 03/08/2023
// Seção de Declarações
var
a,b,c,d,x,y: real
inicio
escreval("DIGITE UMA NOTA: ")
leia(a)
escreval("DIGITE UMA NOTA: ")
leia(b)
escreval("DIGITE UMA NOTA: ")
leia(c)
escreval("DIGITE UMA NOTA: ")
leia(d)

x <- (a+b+c+d)/4

escreval("NOTA:")
escreval(x)

se (x >= 7) entao
   escreval(", APROVADO")
senao
   escreval("NOTA DO EXAME: ")
   leia(y)
   se (y >= 5) entao
      escreval("APROVADO")
   senao
      escreval("REPROVADO")
   fimse
fimse
fimalgoritmo
