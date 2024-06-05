const entrada = require('prompt-sync')({sigint: true})

let ladoA = entrada("Digite o comprimento de um dos lados de um Triangulo: ")
let ladoB = entrada("Digite o comprimento de um dos lados de um Triangulo: ")
let ladoC = entrada("Digite o comprimento de um dos lados de um Triangulo: ")

if((ladoA+ladoB < ladoC) | (ladoA + ladoC < ladoB) | (ladoB + ladoC < ladoA))
{
    console.log("Não é um triangulo válido")
}
else if(ladoA == ladoB & ladoA == ladoC & ladoB == ladoC)
{
    console.log("O triangulo é Equilátero")
}
else if(ladoA == ladoB | ladoA == ladoC | ladoB == ladoC)
{
    console.log("O triangulo é Isóceles")
}
else
{
    console.log("O triangulo é escaleno")
}