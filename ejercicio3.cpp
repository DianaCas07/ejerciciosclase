#include <iostream>
using namespace std;

int minimo(int* vec, int n){
    //inicia en 0 el arreglo
    int menor = vec[0];
    //recorre el arreglo y compara numeros
    for (int i = 0; i < n; i++)
    {
        if (vec[i]<menor) {
            menor = vec[i];
        }  
    }
    //regresa el arreglo
    return menor;
}

int mayor(int* vec, int n){
    int mayor = vec[0];
    for (int i = 0; i < n; i++)
    {
        if (vec[i]>mayor) {
            mayor = vec[i];
        }  
    }
    return mayor;
}

int main(){
    int n;
    do{
    cout<<"Ingrese la cantidad de numeros que desea ingresar"<<endl;
    cin>>n;

    int* vector = new int[n];
    for (int i=0; i<n; i++){
        cout<<"Ingrese los numeros que quiere guardar"<<endl;
        cin>>vector[i];
    }

    int menor= minimo(vector, n);
    int mayus= mayor(vector, n);

    cout<<"El numero menor es: "<< menor<<endl;
    cout<<"El numero mayor es: "<< mayus<<endl;

    delete[] vector;
    }while(n!=0);
    return 0;
}