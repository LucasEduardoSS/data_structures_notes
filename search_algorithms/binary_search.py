lista = [4, 7, 14, 59, 78, 93, 99]
achou = False
busca = int(input('Digite um valor: '))
i = 0
inicio = 0
fim = len(lista)
cont = 0

metade = int((fim - inicio)/2)
while i <= len(lista) and achou is False:
    if lista[metade] == busca:
        achou = True
    else:
        if busca < lista[metade]:
            fim = metade
            metade = int((fim - inicio)/2)

        else:
            inicio = metade
            metade = int((inicio + fim)/2)
    cont += 1

if achou is True:
    print(f'O valor foi encontrado na {metade + 1}° posição na {cont}° iteração.')
else:
    print('O valor não foi encontrado.')

# Código Funcionando Corretamente
