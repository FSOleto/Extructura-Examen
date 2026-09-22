#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {1, 3, 5, 7, 9, 11, 13};
    int x = 9;
    int inicio = 0, fin = 6;
    while(inicio <= fin){
        int medio = (inicio + fin) / 2;
        if(arreglo[medio] == x){
            cout << "Encontrado en indice " << medio << endl;
            return 0;
        }
        if(arreglo[medio] < x) inicio = medio + 1;
        else fin = medio - 1;
    }
    cout << "No encontrado" << endl;
    return 0;
}
