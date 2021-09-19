from random import randint
def jogo():
    vida_jogador = 10
    vida_computador = 10
    while vida_computador or vida_jogador > 0:
        jogador = int(input("ação: "))
        computador = randint(1, 2)
        if jogador == 2:
            vida_computador -= 1
        if jogador == 1:
            if vida_jogador < 10:
                vida_jogador +=1
            else:
                print("Vida cheia")
        if computador == 2:
            print("computador jogou - ", computador)
            vida_jogador -= 1
        if computador == 1:
            if vida_computador < 10:
                vida_computador += 1
            else:
                print("Vida cheia")
    print("O jogo acabou, o vencedor é: ")
    if vida_computador > vida_jogador:
        print("Vitória do computador")
        vida_jogador = 0
        vida_computador = 0
    else:
        print("Vitória do jogador")
        vida_jogador = 0
        vida_computador = 0

parada = True
print("""
[ 1 ] - Curar
[ 2 ] - Atacar""")

while parada == True:
    new_game = str(input("Jogar novamente: S/N")).upper()
    if new_game == "S":
        jogo()
    else:
        print("Obrigado por jogar")
        break

