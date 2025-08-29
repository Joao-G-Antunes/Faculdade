num = int(input("Digite um numero: "))
info_num = "" 
if num > 0:
    info_num = "O número é maior que zero "
elif num == 0:
    info_num = "O número é zero!"
else:
    info_num = "O número é menor que zero "
if num != 0:
    if num % 2 == 0:
        info_num += "e par!"
    else:
        info_num += "e ímpar!"
print(info_num)
