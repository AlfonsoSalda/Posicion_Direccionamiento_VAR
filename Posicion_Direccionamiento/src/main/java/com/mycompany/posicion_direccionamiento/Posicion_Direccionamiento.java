package com.mycompany.posicion_direccionamiento;
import java.util.Scanner;

public class Posicion_Direccionamiento {

    public static void main(String[] args) {
    int n = 0,m = 0,n2,m2;
    int var;
    int idx;
    int i=0;
    int j=0;
    int dir_matriz;
    int n_ren;
    int tam=4;
    int dir_celda;
    
    int[][] matriz= new int[m][n];
    Scanner s=new Scanner(System.in);
    
        System.out.println("\tTamaño de Columnas: ");
        m=s.nextInt();
        System.out.println("\n\tTamaño de Filas: ");
        n=s.nextInt();
        
        do{            
            System.out.println("\n\tInicio");
            System.out.println("\n\t1.-Polinomio de Direccionamiento\n\tY\n\tDireccion de Celda\n\t2.-Salir");
            var=s.nextInt();
            
            switch (var) {
                case 1:
                    System.out.println("\n\tDigita la ubicacion que quieres obtener");
                    System.out.println("\n[");
                    m2=s.nextInt();
                    System.out.println("][");
                    n2=s.nextInt();
                    System.out.println("]");
                    idx=m2*n+n2;
                    System.out.println("\n\tIndica la direccion de la matriz: ");
                    dir_matriz=s.nextInt();
                    dir_celda=(dir_matriz+(m*m2+n2))*tam;
                    System.out.println("\n\tEl indice de Direccionamiento es: "+idx);
                    System.out.println("\n\tDireccion de la celda especificada: "+dir_celda);
                    break;
                case 2:
                    System.out.println("\n\tBuen día");
                    break;
                default:
                    System.out.println("\n\tOpcion no valida");
            }
        }while(var!=2);
        
        
    }
}
