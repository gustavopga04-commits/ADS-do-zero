print("===== CALCULADORA DO EVENTO =====")

vendedor = input("Seu nome: ")
evento = input("nome do evento: ")
quantidade = int(input("Quantos hot-dogs vendeu? "))
preco = float(input("Preco por unidade: "))

total = quantidade * preco 

print("=============================")
print(f"vendedor: {vendedor}")
print(f"evento: {evento}")
print(f"hot-dogs vendidos: {quantidade}")
print(f"preco unitario: R$ {preco:.2f}")
print(f"TOTAL DO DIA: R${total:.2f}")
print("==============================")