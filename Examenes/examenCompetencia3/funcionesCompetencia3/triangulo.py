def alfabeto(N2):
    alfabeto= str("ABCDEFGHIJKLMNÑOPQRSTUVWXYZ")
    cont=0

    for i in range(0,N2):
        cont=cont+i
        for j in range(1):
	        print(alfabeto[0]+alfabeto[i+cont]*(2*i+1)+" "*(N2-i-1))
    