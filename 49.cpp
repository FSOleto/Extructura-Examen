#include <iostream>
using namespace std;
int main(){
    int arreglo[6] = {10, 12, 14, 16, 18, 20};
    double suma = 0;
    for(int i = 0; i < 6; i++) suma += arreglo[i];
    double promedio = suma / 6;
    for(int i = 0; i < 6; i++) if(arreglo[i] > promedio) cout << arreglo[i] << " ";
    cout << endl;
    return 0;
}
