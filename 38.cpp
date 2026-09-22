#include <iostream>
using namespace std;
int main(){
    int arreglo[6] = {10, 9, 9, 6, 3, 1};
    bool ordenado = true;
    for(int i = 1; i < 6; i++) if(arreglo[i] > arreglo[i - 1]) ordenado = false;
    cout << (ordenado ? "Ordenado descendentemente: SI" : "Ordenado descendentemente: NO") << endl;
    return 0;
}
