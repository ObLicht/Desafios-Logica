const entradaDados = require('readline-sync');

let nome = entradaDados.question("Nome do herói: \n");
let idade = entradaDados.question("Idade do herói: \n");
let tipo = entradaDados.question("Classe do herói: \n");

class Heroi {
    constructor(nome, idade, tipo) {
        this.nome = nome;
        this.idade = idade;
        this.tipo = tipo;
    }

    atacar() {
        let ataque;
        if (this.tipo === "mago") {
            ataque = "magia";
        } else if (this.tipo === "guerreiro") {
            ataque = "espada";
        } else if (this.tipo === "monge") {
            ataque = "artes marciais";
        } else if (this.tipo === "ninja") {
            ataque = "shuriken";
        } else {
            ataque = "um ataque desconhecido";
        }

        console.log(`O ${this.tipo} atacou usando ${ataque}`);
    }
}

let heroi = new Heroi(nome, idade, tipo);
heroi.atacar();