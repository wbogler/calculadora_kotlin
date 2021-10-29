class Calculadora:#cria a classe calculadora, a qual tem todas as operações matemáticas simples.

    def __init__(self, valor1, valor2):# método init que recebe os valres
        self.valor1 = valor1
        self.valor2 = valor2

    def soma(self):# função se soma
        return (self.valor1+self.valor2)

    def sub(self):# função de subtração
        return (self.valor1-self.valor2)

    def mult(self):# função de multiplicação
        return (self.valor1*self.valor2)

    def div(self):# função de divisão
        return (self.valor1/self.valor2)

def valida_dado(): #função de validação de dados
    parada = True #variável de parada do loop
    while parada == True:
        try:
            dado1 = float(input("Digite um valor"))
            return dado1
            parada = False
        except:
            print("Digite um valor numérico válido")

def valida_operacao():#variável para validar a escolha da operação.
    valida = True
    while valida == True:
        operacao = str(input('Qual operação deseja')).upper().strip() #o dado é condicionado a caixa alta e aplicou-se a remoção dos espaços
        if operacao == "+" or "-" or "*" or "/" or "SAIR":
            return operacao
            break

while True:
    print("Operações [+] soma [-] subtração [x] multiplicação [/] divisão [sair] sair")
    operacao = valida_operacao()
    if operacao == 'SAIR':
        print("Obrigado por utilizar a calculadora!")
        break
    dado1 = valida_dado()
    dado2 = valida_dado()
    calculadora = Calculadora(dado1,dado2)

    if operacao == '+':
        print(f'[{dado1}] + [{dado2}] = [{calculadora.soma()}]')
    elif operacao == '-':
        print(f'[{dado1}]  [{dado2}] = [{calculadora.sub()}]')
    elif operacao == '*':
        print(f'[{dado1}] + [{dado2}] = [{calculadora.mult()}]')
    elif operacao == '/':
        if dado2 != 0:
            print(f'[{dado1}] + [{dado2}] = [{calculadora.div()}]')
        else:
            print("Impossível dividir por zero")
