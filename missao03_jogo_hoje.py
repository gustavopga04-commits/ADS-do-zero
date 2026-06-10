print("===== AGENDA DO TAVO =====")
dia = input("Qual dia da semana? ").lower()

if dia == "quarta":
    print("pode ter jogo do Cruzeiro hoje!")
    print("prepara o equipamento!")
elif dia == "domingo":
    print("domingo é dia de clássico!")
    print("bora trabalhar!")
elif dia == "sabado":
    print("sabado pode ter evento!")
    print("verifica a agenda.")
elif dia == "segunda" or dia == "terca":
    print("dia livre - foco nos estudos!")
else:
    print(f"'{dia}' nao reconhecido. Tenta: segunda, terca, quarta...")

print("===============================")