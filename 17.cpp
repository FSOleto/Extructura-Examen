#include <iostream>
using namespace std;
int main(){
    int arreglo[8] = {4, 9, 2, 7, 5, 1, 8, 3};
    int x = 7;
    bool encontrado = false;
    for(int i = 0; i < 8; i++) if(arreglo[i] == x) encontrado = true;
    cout << (encontrado ? "Encontrado" : "No encontrado") << endl;
    return 0;
}
