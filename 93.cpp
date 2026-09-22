#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {1, 2, 7, 8, 5, 1, 3};
    int k = 3, suma = 0, mejor = 0;
    for(int i = 0; i < k; i++) suma += arreglo[i];
    mejor = suma;
    for(int i = k; i < 7; i++){
        suma += arreglo[i] - arreglo[i - k];
        if(suma > mejor) mejor = suma;
    }
    cout << "Suma max = " << mejor << endl;
    return 0;
}
