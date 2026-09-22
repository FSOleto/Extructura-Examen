#include <iostream>
using namespace std;
int main(){
    int arreglo[6] = {5, 1, 4, 2, 8, 3};
    for(int i = 0; i < 6 - 1; i++){
        int min = i;
        for(int j = i + 1; j < 6; j++) if(arreglo[j] < arreglo[min]) min = j;
        int temp = arreglo[i];
        arreglo[i] = arreglo[min];
        arreglo[min] = temp;
    }
    for(int i = 0; i < 6; i++) cout << arreglo[i] << (i == 5 ? "" : " ");
    cout << endl;
    return 0;
}
