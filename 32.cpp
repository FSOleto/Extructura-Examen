#include <iostream>
using namespace std;
int main(){
    int arreglo[6] = {10, 20, 30, 40, 50, 60};
    int posicion = 2;
    for(int i = posicion; i < 5; i++) arreglo[i] = arreglo[i + 1];
    for(int i = 0; i < 5; i++) cout << arreglo[i] << (i == 4 ? "" : " ");
    cout << endl;
    return 0;
}
