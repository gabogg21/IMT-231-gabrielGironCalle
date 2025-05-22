def esPalindromo(numero):
    while numero<=9 :
            print("Porfavor ingrese un numero entero positivo de 2 digitos")
            numero=int(input("Ingrese otro numero positivo: "))
            if numero>9:
                break
    
    original = str(numero)
    
    if original == original[::-1]:
        print("")
        print(f"{numero} es un número capicúa.")
    else:
        print("")
        print(f"{numero} no es un número capicúa.")


