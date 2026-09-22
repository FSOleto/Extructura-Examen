#include <iostream>
using namespace std;
int main(){
    int arreglo[6] = {12, 3, 25, 7, 18, 10};
    int menor = arreglo[0], mayor = arreglo[0];
    for(int i = 1; i < 6; i++){
        if(arreglo[i] < menor) menor = arreglo[i];
        if(arreglo[i] > mayor) mayor = arreglo[i];
    }
    cout << "Rango = " << mayor - menor << endl;
    return 0;
}
