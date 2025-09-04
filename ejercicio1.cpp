#include <iostream>
using namespace std;


struct Producto {
    int Codigo;
    string Nombre;
    float Precio;
    int Stock;
};

const int maximo_productos = 50;
Producto product[maximo_productos];
int totalProductos = 0;

int agregarProducto(Producto product[], int n){
    Producto nuevo_producto;
    cout<<"Inserte el codigo del producto: ";
    cin >>nuevo_producto.Codigo;
    cout<<"Inserte el nombre del producto: ";
    getline(cin>> ws, nuevo_producto.Nombre);
    cout<<"Inserte el precio: ";
    cin>>nuevo_producto.Precio;
    cout<<"Inserte la cantidad en stock: ";
    cin>>nuevo_producto.Stock;

    product[n] = nuevo_producto;
    cout<<"Su Producto ha sido agregado con exito!"<<endl;
    return n + 1;
}


int BuscarProducto(Producto product[], int n, int codigo){
    for (int i=0; i<n; i++){
        if(product[i].Codigo == codigo){
            return i;
        }
    }
    return - 1;
}

void Encontrado(Producto product[], int n){
    int codigob;
    cout<<"Ingrese el codigo del producto a buscar: ";
    cin>>codigob;

    int BQD = BuscarProducto(product, n, codigob);
    if (BQD == -1){
        cout<<"El producto no existe, intente nuevamente: "<<endl;
        return;
    }

    cout<<"Codigo del producto: "<<product[BQD].Codigo<<endl;
    cout<<"Nombre del producto: "<<product[BQD].Nombre<<endl;
    cout<<"Precio del producto: "<<product[BQD].Precio<<endl;
    cout<<"Cantidad en stock: : "<<product[BQD].Stock<<endl;
}

void Inventario(Producto product[], int n){
    float valorInventario = 0.0;
    for (int i = 0; i < n; i++){
        valorInventario += product[i].Stock * product[i].Precio;
    }
    cout<<"El valor total de inventario es: "<<valorInventario<<endl;
}

void Menu(){
    cout<<"Bienvenido elija que desea hacer: "<<endl;
    cout<<"1 - Agregar producto" <<endl;
    cout<<"2 - Buscar producto" <<endl;
    cout<<"3 - Valor total de inventario" <<endl;
    cout<<"4 - Salir"<<endl;
}

void Menuservi(){
    int opcion;
    do{
        Menu();
        cin>>opcion;
    switch (opcion)
    {
    case 1:
    totalProductos = agregarProducto(product, totalProductos);
    break;
    
    case 2:
    Encontrado(product, totalProductos);
    break;

    case 3:
    Inventario(product, totalProductos);
    break;

    case 4:
    break;

    default:
    cout<<"Opcion invalida"<<endl;
    break;
    }
    }while((opcion!=4));
}

int main(){
    Menuservi();
    return 0;
}