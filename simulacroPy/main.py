from Funciones import contar
from Funciones import serieSecuencia 
from Funciones import piramide
from Funciones import contarPrimos
from Funciones import esPalindromo

while True:
    
    print("---MENU---")
    print("1. Contar cuántos números entre 1 y N son divisibles por 3 **o** terminan en 3.")
    print("2. Imprimir una pirámide de asteriscos de altura N.")
    print("3. Dado un número N, mostrar la secuencia de los primeros N términos de la serie: 1, -2, 3, -4, 5, -6, ...")
    print("4. Mostrar la cantidad de números primos entre 1 y N.")
    print("5. Verificar si un número es palíndromo (número capicúa).")
    print("6. Salir")
    print(" ")
    print("Seleccione una opcion")

    n3=int(input())
    print(" ")
    if n3==1:
        n1=int(input("Ingrese un numero positivo: "))
        while n1<=1:
            print("Ingrese un numero mayor a 1")
            n1=int(input("Ingrese otro numero positivo: "))
            if n1>1:
                    break

        result=contar(n1)
        print(f"La cantidad de números entre 1 y {n1} que cumplen al menos una condición son: {result}")
        print("")
    if n3==2:
        n1=int(input("Ingrese un numero positivo: "))
        while n1<=0 :
            print("Ingrese un numero mayor a 0")
            n1=int(input("Ingrese otro numero positivo: "))
            if n1>0:
                    break

        result2=piramide(n1)
        print(f"El resultado es:")
        print(result2)
        print("")
    if n3==3:
        
        n1=int(input("Ingrese un numero positivo: "))
        while n1<=1:
            print("Ingrese un numero mayor a 1")
            n1=int(input("Ingrese otro numero positivo: "))
            if n1>1:
                    break

        result3=serieSecuencia(n1)
        print("El resultado es:")
        print(result3)
        print("")

    if n3==4:
        n1=int(input("Ingrese un numero positivo: "))

        while n1<=1:
            print("Ingrese un numero mayor a 1")
            n1=int(input("Ingrese otro numero positivo: "))
            if n1>1:
                    break

        result4=contarPrimos(n1)
        print(result4)
        print("")

    if n3==5:
        n1=int(input("Ingrese un numero positivo: "))
        result5=esPalindromo(n1)
        print(result5)
        print("")


    if n3==6:

        print("saliendo....")
        break

    if n3<=0 or n3>6 :
        print("Ingrese una opcion valida")
        print("")



