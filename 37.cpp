#include <iostream>
using namespace std;
int main(){
    int arreglo[6] = {1, 2, 2, 5, 8, 10};
    bool ordenado = true;
    for(int i = 1; i < 6; i++) if(arreglo[i] < arreglo[i - 1]) ordenado = false;
    cout << (ordenado ? "Ordenado ascendentemente: SI" : "Ordenado ascendentemente: NO") << endl;
    return 0;
}
