def primo(n):
    if n < 2:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

def contarPrimos(N):
    contador = 0
    for i in range(1, N+1):
        if primo(i):
            contador += 1
    print(f"Cantidad de números primos entre 1 y {N}: {contador}")
