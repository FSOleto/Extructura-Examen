#include <iostream>
using namespace std;
int main(){
    double arreglo[6] = {10, 12, 14, 16, 18, 20};
    double suma = 0;
    for(int i = 0; i < 6; i++) suma += arreglo[i];
    cout << "Promedio = " << suma / 6 << endl;
    return 0;
}
