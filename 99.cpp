#include <iostream>
using namespace std;
int main(){
    int arreglo[6] = {1, 2, 3, 4, 4, 6};
    int duplicado = 0, faltante = 0;
    int cuenta[7] = {0};
    for(int i = 0; i < 6; i++) cuenta[arreglo[i]]++;
    for(int i = 1; i <= 6; i++){
        if(cuenta[i] == 2) duplicado = i;
        if(cuenta[i] == 0) faltante = i;
    }
    cout << "Duplicado = " << duplicado << " | Faltante = " << faltante << endl;
    return 0;
}
