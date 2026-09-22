#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {1, 2, 3, 4, 5};
    int k = 2;
    for(int i = 0; i < k; i++){
        int temp = arreglo[0];
        for(int j = 0; j < 4; j++) arreglo[j] = arreglo[j + 1];
        arreglo[4] = temp;
    }
    for(int i = 0; i < 5; i++) cout << arreglo[i] << (i == 4 ? "" : " ");
    cout << endl;
    return 0;
}
