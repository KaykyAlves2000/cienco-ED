for i in range (1,6):
    print (i)

print(".............................................................................")
for i in range (10, 0 ,-1):
    print (i)

print ("..........................Exercicio 1 ......................................")

for i in range (1, 11):
    print (f'Entregando convite numero {i}')

print (".............................Exercicio 2....................................")

for i in range (1, 6):
    print (f'Passo numero {i}')

print("...............................Exercicio 3...................................")

for i in range (1, 11):
    print (f'3 x {i} = {3*i}')
    #testado, OK

print("...............................Exercicio 4...................................")
nomes= ["Luan", "Beatriz", "Mateus", "Júlia"]
for nome in nomes:
    print (f'Ola {nome} seja bem-vindo(a)')
   #testado, OK
print("................................Exercicio 5..................................")

for i in range (1, 16):
    if i % 2 == 0:
        print (i)

print("...............................Exercicio 6....................................")

soma = 0
for i in range(5, 11):
    soma += i
print(f"A soma dos números de 5 a 10 é: {soma}")

print("...............................Exercicio 7....................................")
print("Números múltiplos de 2 e 3 entre 1 e 20:")
for i in range(1, 21):
    if i % 2 == 0 and i % 3 == 0:
        print(i)

print("...............................Exercicio 8....................................")

total = 0
for i in range(5):
    nota = float(input(f"Digite a nota {i+1}: "))
    total += nota
media = total / 5
print(f"Total das notas: {total}")
print(f"Média das notas: {media}")

print("...............................Exercicio 9....................................")
for i in range(10, 0, -1):
    print(i)
print("Lançamento!")

print("...............................Exercicio 10...................................")

for i in range(1, 21):
    if i % 4 == 0:
        print("PIM", end=" ")
    else:
        print(i, end=" ")
print()

print("...............................Exercicio 11....................................")
for i in range(1, 6):
    temperatura = float(input(f"Digite a temperatura da estufa {i}: "))
    if temperatura < 15:
        print("Temperatura muito baixa! Risco para as plantas.")
    elif 15 <= temperatura <= 25:
        print("Temperatura ideal.")
    else:
        print("Temperatura alta! Acionar ventilação.")

print("...............................Exercicio 12.....................................")

print("Cadastro de visitantes")
continuar = "sim"

while continuar.lower() == "sim":
    nome = input("Digite o nome do visitante: ")
    print(f"Visitante {nome} cadastrado com sucesso!")
    continuar = input("Deseja cadastrar outro visitante? (sim/não): ")

print("Cadastro encerrado.")

print(".............................Exercicios de while............................")

print(".................................Exercicio 1.......................................")

total = 0.0
while total <= 10.0:
    moeda = float(input("Digite o valor da moeda: R$ "))
    total += moeda
print(f"Meta atingida! Você já tem R$ {total:.2f} no cofrinho.")


print(".................................Exercicio 2.......................................")

senha = ""
while senha != "segredo123":
    senha = input("Digite a senha: ")
print("Bem-vindo ao sistema!")


print(".................................Exercicio 3.......................................")

contagem = 10
while contagem > 0:
    print(contagem)
    contagem -= 1
print("Lançamento!")


print(".................................Exercicio 4.......................................")

numero = -1
while numero < 0:
    numero = int(input("Digite um número positivo: "))
print(f"Valor aceito: {numero}")


print(".................................Exercicio 5.......................................")

soma = 0
contador = 0
while True:
    nota = float(input("Digite uma nota (negativa para sair): "))
    if nota < 0:
        break
    soma += nota
    contador += 1
if contador > 0:
    media = soma / contador
    print(f"Média das notas: {media:.2f}")
else:
    print("Nenhuma nota válida foi inserida.")


print(".................................Exercicio 6.......................................")

import random
secreto = random.randint(1, 10)
palpite = 0
while palpite != secreto:
    palpite = int(input("Tente adivinhar o número entre 1 e 10: "))
print("Parabéns, você acertou!")


print(".................................Exercicio 7.......................................")

numero = int(input("Digite um número: "))
while numero % 2 == 0:
    numero = int(input("Você digitou um número par. Digite outro: "))
print("Você digitou um número ímpar. Fim do programa.")


print(".................................Exercicio 8.......................................")

numero = int(input("Digite um número para ver a tabuada: "))
for i in range(1, 11):
    print(f"{numero} x {i} = {numero * i}")


print(".................................Exercicio 9.......................................")

pares = 0
for i in range(10):
    num = int(input(f"Digite o {i+1}º número: "))
    if num % 2 == 0:
        pares += 1
print(f"Você digitou {pares} números pares.")


print(".................................Exercicio 10.......................................")

saldo = 0.0
while saldo < 20.0:
    recarga = float(input("Digite o valor da recarga: R$ "))
    saldo += recarga
    print(f"Saldo atual: R$ {saldo:.2f}")
print("Saldo mínimo atingido.")


print(".................................Exercicio 11.......................................")

for i in range(1, 6):
    temperatura = float(input(f"Digite a temperatura da estufa {i}: "))
    if temperatura < 15:
        print("Temperatura muito baixa! Risco para as plantas.")
    elif 15 <= temperatura <= 25:
        print("Temperatura ideal.")
    else:
        print("Temperatura alta! Acionar ventilação.")

print(".................................Exercicio 12.......................................")

total = 0.0
print("Sistema de compras")
while True:
    produto = input("Digite o nome do produto (ou 'fim' para encerrar): ")
    if produto.lower() == 'fim':
        break
    preco = float(input(f"Digite o preço do {produto}: R$ "))
    total += preco
print(f"Total da compra: R$ {total:.2f}")















