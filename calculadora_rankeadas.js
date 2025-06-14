const entradaDados = require("readline-sync");
let saldo;

function calculo(vitorias, derrotas){
    saldo = vitorias - derrotas;
    return saldo;
}
let vitorias = entradaDados.question("Qual o número de vitórias? ");
let derrotas = entradaDados.question("Qual o número de derrotas? ");

calculo(vitorias, derrotas);

let nivel;

if (saldo < 10){
    nivel = "Ferro";
} if (saldo >= 11 && saldo <= 20){
    nivel = "Bronze";
} if (saldo >= 21 && saldo <= 50){
    nivel = "Prata";
} if (saldo >= 51 && saldo <= 80){
    nivel = "Ouro";
} if (saldo >= 81 && saldo <= 90){
    nivel = "Diamante";
} if (saldo >= 91 && saldo <= 100){
    nivel = "Lendário";
} if (saldo >= 101) {
    nivel = "Imortal";
}

const mensagem = 'O Herói tem de saldo de ' + saldo + ' está no nível de ' + nivel;
console.log(mensagem);