#include <iostream>

using namespace std;

int main(){
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

    cout<<"\tTamaño de columnas: ";
    cin>>m;
    cout<<"\n\tTamaño de filas: ";
    cin>>n;

    do
    {
        cout<<"\n\tInicio";
        cout<<"\n\t1.-Posicion de direccionamiento\nY\nDireccion de Celda\n2.-Salir";
        cin>>var;
        switch (var)
        {
        case 1:
            cout<<"\n\tDigita la ubicacion que quieres obtener";
            cout<<"\n[";
            cin>>m2;
            cout<<"][";
            cin>>n2;
            cout<<"]";
            idx=m2*n+n2;
            cout<<"\n\tIndica la direccion de la matriz: ";
            cin>>dir_matriz;
            dir_celda=(dir_matriz+(m*m2+n2))*tam;
            cout<<"\n\tLa Indice de Direccionamiento es: "<<idx;
            cout<<"\n\tDireccion de la celda especificadad: "<<dir_celda;
            break;
        case 2:
            cout<<"\n\tBuen dia";
            break;
        default:
        cout<<"\n\tOPCION NO VALIDA";
            break;
        }

    }while (var!=2);
    

    return 0;
}