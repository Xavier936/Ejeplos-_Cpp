    #include <iostream>
    
    using namespace std;
    
    int main()
    {
       int n, m,i,j;
       
       cout<<"Ingrese el numero de filas: ";
       cin>>n; //filas
       cout<<"Ingrese el numero de columnas: ";
       cin>>m; //columnas
       
       //declara la matriz vacia
       
       int matriz[n][m];
       
       //ingreso de valores por teclado
       cout<<"Ingrese los valores de la matriz"<<endl;
       for(i=0; i<n; i++)
       {
                for (j=0; j<m; j++)
                {
                    cout<<"Posicion ["<<i<<"]["<<j<<"]: ";
                    cin>>matriz[i][j];
                }
                cout<<endl;
       }
       
       //muestra en pantalla la matriz
       
       cout<<"La matriz es: "<<endl;
       cout<<endl;
       for(i =0; i<n; i++)
       {
             for(j = 0; j<m; j++)
             {
                 cout<<matriz[i][j]<<" ";  
             }
             cout<<endl;
       }
       
       return 0;   
       
    }