def serieSecuencia(N):
    resultado = []
    for i in range(1, N+1):
        if i % 2 == 0:
            resultado.append((-1)*i)
        else:
            resultado.append(i)
    print((resultado))