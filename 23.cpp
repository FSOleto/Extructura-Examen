#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {1, 2, 3, 4, 5};
    int temp = arreglo[0];
    for(int i = 0; i < 4; i++) arreglo[i] = arreglo[i + 1];
    arreglo[4] = temp;
    for(int i = 0; i < 5; i++) cout << arreglo[i] << (i == 4 ? "" : " ");
    cout << endl;
    return 0;
}
