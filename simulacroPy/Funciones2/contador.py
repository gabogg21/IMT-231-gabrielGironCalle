def contar(num1):
    cont=0
    
    for i in range(1,num1+1):
        if i%3==0 or str(i).endswith('3'):
            cont=cont +1
    return cont

    

