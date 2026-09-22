#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {1, 2, 3, 5, 6};
    int suma = 0;
    for(int i = 0; i < 5; i++) suma += arreglo[i];
    int faltante = 15 - suma;
    cout << "Faltante = " << faltante << endl;
    return 0;
}
