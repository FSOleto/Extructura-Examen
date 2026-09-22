#include <iostream>
using namespace std;
int main(){
    int arreglo[6] = {5, 1, 4, 2, 8, 3};
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 5 - i; j++){
            if(arreglo[j] > arreglo[j + 1]){
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < 6; i++) cout << arreglo[i] << (i == 5 ? "" : " ");
    cout << endl;
    return 0;
}
