#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {1, 3, 5, 5, 7, 9, 11};
    int x = 5, inicio = 0, fin = 6, primera = -1;
    while(inicio <= fin){
        int medio = (inicio + fin) / 2;
        if(arreglo[medio] >= x){
            if(arreglo[medio] == x) primera = medio;
            fin = medio - 1;
        } else inicio = medio + 1;
    }
    cout << "Primera aparici?n = " << primera << endl;
    return 0;
}
