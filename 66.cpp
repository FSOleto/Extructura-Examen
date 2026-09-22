#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {9, 5, 1, 7, 3, 8, 2};
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 6 - i; j++){
            if(arreglo[j] < arreglo[j + 1]){
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
    cout << "K-esimo mayor = " << arreglo[2] << endl;
    return 0;
}
