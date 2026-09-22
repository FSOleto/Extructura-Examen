#include <iostream>
using namespace std;
int main(){
    int arreglo[10] = {5, 8, 3, 8, 2, 9, 8, 1, 4, 6};
    int x = 8;
    int posicion = -1;
    for(int i = 0; i < 10 && posicion == -1; i++) if(arreglo[i] == x) posicion = i;
    cout << "Primera posicion = " << posicion << endl;
    return 0;
}
