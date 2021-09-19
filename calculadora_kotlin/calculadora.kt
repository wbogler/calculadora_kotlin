fun main() {
    println ("Calculadora")
    println ("_________________")
    var lista = listOf("soma", "subtração", "multiplicação", "divisão")
    var controle = 1..4
    for (i in controle){
        println("Escolha [${i}] para ${lista[i-1]}")
    }
    var selecao = 5
    var numero1 = 2
    var numero2 = 2
    println("________________")
    when(selecao){
        1 -> println("[${numero1}]+[${numero2}] = [${numero1+numero2}]")
        2 -> println("[${numero1}]-[${numero2}] = [${numero1-numero2}]")
        3 -> println("[${numero1}]*[${numero2}] = [${numero1*numero2}]")
        4 -> println("[${numero1}]/[${numero2}] = [${numero1/numero2}]")
        else -> println("Ops, algo deu errado!")
    }
}