#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {2, 1, 2, 4, 3};
    int pila[5];
    int tope = 0;
    for(int i = 4; i >= 0; i--){
        while(tope > 0 && pila[tope - 1] <= arreglo[i]) tope--;
        cout << (tope > 0 ? pila[tope - 1] : -1) << " ";
        pila[tope++] = arreglo[i];
    }
    cout << endl;
    return 0;
}
