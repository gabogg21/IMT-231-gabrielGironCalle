from funcionesCompetencia3 import divisor
from funcionesCompetencia3 import alfabeto
from funcionesCompetencia3 import reversa

while True:
    
    print("---MENU---")
    print("1. Calcular la suma de todos los divisores de un número N (excluyendo el propionúmero).")
    print("2. Generar un triángulo de caracteres con letras del alfabeto hasta una altura N.")
    print("3. Mostrar los primeros N números primos.")
    print("4. Generar la secuencia de los primeros N términos de la serie de Fibonacci inversa.")
    print("5. Salir")
    print(" ")
    print("Seleccione una opcion")

    opcion=int(input())
    print(" ")
    if opcion==1:
        n1=int(input("Ingrese un numero positivo: "))
        while n1<=1:
            print("Ingrese un numero mayor a 1")
            n1=int(input("Ingrese otro numero positivo: "))
            if n1>1:
                    break

        result=divisor(n1)
        print(f"La suma de los divisores de {n1} es: {result}")
        print("")
    if opcion==2:
        n1=int(input("Ingrese un numero positivo: "))
        while n1<=0 :
            print("Ingrese un numero mayor a 0")
            n1=int(input("Ingrese otro numero positivo: "))
            if n1>0:
                    break

        result2=alfabeto(n1)
        print(f"El resultado es:")
        print(result2)
        print("")
    if opcion==3:
        
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

    if opcion==4:
        n1=int(input("Ingrese un numero positivo: "))

        while n1<=1:
            print("Ingrese un numero mayor a 1")
            n1=int(input("Ingrese otro numero positivo: "))
            if n1>1:
                    break

        result4=reversa(n1)
        print(result4)
        print("")


    if opcion==5:

        print("saliendo....")
        break

    if opcion<=0 or opcion>5 :
        print("Ingrese una opcion valida")
        print("")



