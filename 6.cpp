#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {5, -2, 13, 0, -9, 8, 4};
    int menor = arreglo[0];
    for(int i = 1; i < 7; i++) if(arreglo[i] < menor) menor = arreglo[i];
    cout << "Menor = " << menor << endl;
    return 0;
}
