#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,n2,m2;
    int matriz[m][n];
    int var;
    int idx;
    int i=0;
    int j=0;
    int dir_matriz;
    int n_ren;
    int tam=4;
    int dir_celda;
    
    printf("\tTamaño de Columnas:");
    scanf("%d",&m);
    printf("\n\tTamaño de filas:");
    scanf("%d",&n);
    
    
    while(1){
        printf("\n\tInicio");
        printf("\n\t1.-Polinomio de Direccionamiento\n\ty\n\tDireccion de la celda\n\t2.-Salir\n");
        scanf("%d",&var);
        switch(var){
            case 1:
            printf("\n\tDigita la ubicacion que quieres obtener");
            printf("\n[");
            scanf("%d",&m2);
            printf("][");
            scanf("%d",&n2);
            printf("]");
            idx=m2*n+n2;
            printf("\n\tIndica la direccion de la matriz: ");
            scanf("%d",&dir_matriz);
            dir_celda=(dir_matriz+(m*m2+n2))*tam;
            printf("\n\tLa Indice de Direccionamiento es: %i",idx);
            printf("\n\tDireccion de la celda especificadad: %i",dir_celda);
            
            break;
            case 2:
            printf("\n\tBuen dia");
            exit(0);
            break;
            default:
            printf("\n\tOPCION NO VALIDA");
            break;
        }
        
    }
    

    return 0;
}