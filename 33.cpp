#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {10, 20, 30, 40, 50};
    int x = 99, posicion = 2;
    for(int i = 4; i >= posicion; i--) arreglo[i + 1] = arreglo[i];
    arreglo[posicion] = x;
    for(int i = 0; i < 6; i++) cout << arreglo[i] << (i == 5 ? "" : " ");
    cout << endl;
    return 0;
}
