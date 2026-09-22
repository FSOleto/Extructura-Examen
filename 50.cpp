#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int arreglo[6] = {10, 12, 14, 16, 18, 20};
    double suma = 0;
    for(int i = 0; i < 6; i++) suma += arreglo[i];
    double promedio = suma / 6;
    int mejor = arreglo[0];
    double distancia = abs(arreglo[0] - promedio);
    for(int i = 1; i < 6; i++){
        double d = abs(arreglo[i] - promedio);
        if(d < distancia){
            distancia = d;
            mejor = arreglo[i];
        }
    }
    cout << "Mas cercano = " << mejor << endl;
    return 0;
}
