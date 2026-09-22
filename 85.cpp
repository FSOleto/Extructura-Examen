#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {1, 3, 5, 5, 7, 9, 11};
    int x = 5, inicio = 0, fin = 6, ultima = -1;
    while(inicio <= fin){
        int medio = (inicio + fin) / 2;
        if(arreglo[medio] <= x){
            if(arreglo[medio] == x) ultima = medio;
            inicio = medio + 1;
        } else fin = medio - 1;
    }
    cout << "Ultima aparici?n = " << ultima << endl;
    return 0;
}
