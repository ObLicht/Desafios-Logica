const entradaDados = require('readline-sync');
let nome = entradaDados.question("Nome do herói: ");
let xp = entradaDados.question("Qual o xp? ");
let nivel;

if (xp <= 1.000){
    nivel = "Ferro";
} if (xp >= 1.001 && xp <= 2.000){
    nivel = "Bronze";
} if (xp >= 2.001 && xp <= 5.000){
    nivel = "Prata";
} if (xp >= 5.001 && xp <= 7.000){
    nivel = "Ouro";
} if (xp >= 7.001 && xp <= 8.000){
    nivel = "Platina";
} if (xp >= 8.001 && xp <= 9.000){
    nivel = "Ascendente";
} if (xp >= 9.001 && xp <= 10.000){
    nivel = "Imortal";
} if (xp >= 10.001) {
    nivel = "Radiante";
}
const mensagem = 'O Herói de nome ' + nome + ' está no nível de ' + nivel;

console.log(mensagem);