#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {10, 20, 30, 40, 50};
    int temp = arreglo[0];
    arreglo[0] = arreglo[4];
    arreglo[4] = temp;
    for(int i = 0; i < 5; i++) cout << arreglo[i] << (i == 4 ? "" : " ");
    cout << endl;
    return 0;
}
