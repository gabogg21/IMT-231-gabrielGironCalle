def divisor(N):
    suma=0
    for i in range(1,N):
        if N%i==0:
            suma = suma +i
    return suma
