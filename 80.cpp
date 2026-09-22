#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {10, 20, 30, 40, 50};
    int perm[5] = {2, 0, 3, 1, 4};
    int salida[5];
    for(int i = 0; i < 5; i++) salida[perm[i]] = arreglo[i];
    for(int i = 0; i < 5; i++) cout << salida[i] << (i == 4 ? "" : " ");
    cout << endl;
    return 0;
}
