m=int(input("\tTamaño de Columnas: "))
n=int(input("\n\tTamaño de Filas: "))
tam=4
var=1

while var!=2:
    print("\n\tInicio")
    print("\n\t1.-Polinomio de Direccionamienyo\n\tY\n\tDireccion de Celda\n\t2.-Salir")
    var=int(input(""))
    if (var==1):
        m2=int(input("\n\tDigita la ubicacion que Quieres obtener:\n ["))
        print("][")
        n2=int(input(""))
        print("]")
        idx=(m2*n)+n2
        dir_matriz=int(input("\n\tIndica la direccion de la matriz: "))
        dir_celda=(((dir_matriz+((m*m2)+n2)))*tam)
        print("\n\tEl indice de direccionamiento es: ")
        print(idx)
        print("\n\tDireccion de la celda especificada: ")
        print(dir_celda)
    else:
        if (var==2):
            print("\n\tBuen dia")
        else: 
            if (var<1 or var>2):
                print("\n\tOpcion no valida")