#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {1, 2, 3, 4, 5};
    int k = 2;
    int salida[5];
    for(int i = 0; i < 5; i++) salida[(i - k + 5) % 5] = arreglo[i];
    for(int i = 0; i < 5; i++) cout << salida[i] << (i == 4 ? "" : " ");
    cout << endl;
    return 0;
}
