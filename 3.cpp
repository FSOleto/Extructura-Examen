#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {4, 7, 2, 9, 3};
    int suma = 0;
    for(int i = 0; i < 5; i++) suma += arreglo[i];
    cout << "Suma = " << suma << endl;
    return 0;
}
