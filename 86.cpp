#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {1, 2, 2, 2, 3, 5, 6};
    int x = 2;
    int inicio = 0, fin = 6, primero = -1, ultimo = -1;
    while(inicio <= fin){
        int medio = (inicio + fin) / 2;
        if(arreglo[medio] >= x){
            if(arreglo[medio] == x) primero = medio;
            fin = medio - 1;
        } else inicio = medio + 1;
    }
    inicio = 0; fin = 6;
    while(inicio <= fin){
        int medio = (inicio + fin) / 2;
        if(arreglo[medio] <= x){
            if(arreglo[medio] == x) ultimo = medio;
            inicio = medio + 1;
        } else fin = medio - 1;
    }
    cout << "Cantidad = " << (primero == -1 ? 0 : ultimo - primero + 1) << endl;
    return 0;
}
