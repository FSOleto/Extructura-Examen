#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {2, 2, 1, 2, 3, 2, 2};
    int candidato = arreglo[0], cuenta = 0;
    for(int i = 0; i < 7; i++){
        if(cuenta == 0) candidato = arreglo[i];
        cuenta += (arreglo[i] == candidato) ? 1 : -1;
    }
    int total = 0;
    for(int i = 0; i < 7; i++) if(arreglo[i] == candidato) total++;
    cout << (total > 7 / 2 ? candidato : -1) << endl;
    return 0;
}
