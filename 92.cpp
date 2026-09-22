#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {73, 74, 75, 71, 69, 72, 76};
    int siguiente[7];
    int pila[7], tope = 0;
    for(int i = 6; i >= 0; i--){
        while(tope > 0 && arreglo[pila[tope - 1]] <= arreglo[i]) tope--;
        siguiente[i] = (tope > 0 ? pila[tope - 1] - i : 0);
        pila[tope++] = i;
    }
    for(int i = 0; i < 7; i++) cout << siguiente[i] << (i == 6 ? "" : " ");
    cout << endl;
    return 0;
}
