#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {1, 2, 3, 4, 5, 6, 7};
    for(int i = 0; i < 7 / 2; i++){
        int temp = arreglo[i];
        arreglo[i] = arreglo[6 - i];
        arreglo[6 - i] = temp;
    }
    for(int i = 0; i < 7; i++) cout << arreglo[i] << (i == 6 ? "" : " ");
    cout << endl;
    return 0;
}
