print("===== AGENDA DO TAVO =====")
dia = input("Qual dia da semana? ").lower()

if dia == "segunda":
    print("Dia livre, vá estudar com calma.")
    print("Estude durante o dia e se divirta a noite.")
elif dia == "terca":
    print("Dia livre, acorde cedo.")
    print("Dia de assistir aula da faculdade!")
elif dia == "quarta":
    print("tem entrega pela manhã, faça com calma!!!")
    print("estude de tarde, a noite va jogar ou sair.")
elif dia == "quinta":
    print("DIA DE COPA DO MUNDO!!!!!")
    print("porém, não esqueça de estudar, ainda há compromissos.") 
elif dia == "sexta":
    print("hoje é dia de trabalhar")
    print("primeiro turno faça uma revisão ou exercicio.")
    print("segundo turno descanse para ir trabalhar de madrugada.")
    print("e por fim, vá trabalhar com cuidado.")
elif dia == "sabado":
    print("dia de trabalhar.")
    print("assim que chegar, tome um banho e durma até as 11h.")
    print("expectativa de chegar em casa as 23:40h")
    print("provavelmente dormir as 01:30h")
elif dia == "domingo":
    print("Domingo é dia de descanso TOTAL!!!")
    print("livre para acordar qualquer horario, jogue e se divirta!!")
    print("se der vontade, faça um exercicio sem compromisso, pode ser uma lista sobre futuras compras.")
elif dia == "segunda" or dia == "sabado":
    print("dia livre - foco nos estudos!")
else:
    print(f"'{dia}' nao reconhecido. Tenta: segunda, terca, quarta...")

print("===============================")