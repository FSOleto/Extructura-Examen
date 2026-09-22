#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arreglo[7] = {0, 1, 0, 2, 0, 3, 0};
    int izquierda[7], derecha[7];
    izquierda[0] = arreglo[0];
    for(int i = 1; i < 7; i++) izquierda[i] = max(izquierda[i - 1], arreglo[i]);
    derecha[6] = arreglo[6];
    for(int i = 5; i >= 0; i--) derecha[i] = max(derecha[i + 1], arreglo[i]);
    int agua = 0;
    for(int i = 0; i < 7; i++) agua += min(izquierda[i], derecha[i]) - arreglo[i];
    cout << "Agua atrapada = " << agua << endl;
    return 0;
}
