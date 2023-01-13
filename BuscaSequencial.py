lista = [4, 5, 6, 9, 7, 8, 10]
busca = 11
achou = False
i = 0

print('Valores da Lista: ', end='')
for n in lista:
    print(n, end=', ')

while i < len(lista) and achou == False:
    if lista[i] == busca:
        achou = True
    else:
        i += 1

if achou == True:
    print(f'\nValor encontrado na posição {i}')
else:
    print('\nValor não encontrado.')
