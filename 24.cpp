#include <iostream>
using namespace std;
int main(){
    int arreglo[8] = {7, 2, 9, 4, 6, 3, 8, 1};
    int pares[8], impares[8];
    int np = 0, ni = 0;
    for(int i = 0; i < 8; i++){
        if(arreglo[i] % 2 == 0) pares[np++] = arreglo[i];
        else impares[ni++] = arreglo[i];
    }
    cout << "Pares: ";
    for(int i = 0; i < np; i++) cout << pares[i] << (i == np - 1 ? "" : " ");
    cout << " | Impares: ";
    for(int i = 0; i < ni; i++) cout << impares[i] << (i == ni - 1 ? "" : " ");
    cout << endl;
    return 0;
}
