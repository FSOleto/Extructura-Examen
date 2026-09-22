#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {1, 2, 3, 4, 5, 6, 7};
    int suma = 0;
    for(int i = 0; i < 7; i++) suma += arreglo[i];
    cout << "Mediana = " << (double)suma / 7 << endl;
    return 0;
}
