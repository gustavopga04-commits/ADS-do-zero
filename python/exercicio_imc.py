try:
    nome = input("Digite seu nome: ")
    peso = float(input("Digite seu peso (kg): "))
    altura = float(input("Digite sua altura (m): "))
except ValueError:
    print("Erro! Digite apenas números para o peso e altura.")
    