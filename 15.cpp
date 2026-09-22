#include <iostream>
using namespace std;
int main(){
    int arreglo[8] = {3, 5, 7, 9, 11, 13, 15, 17};
    int suma = 0;
    for(int i = 1; i < 8; i += 2) suma += arreglo[i];
    cout << "Suma indices impares = " << suma << endl;
    return 0;
}
