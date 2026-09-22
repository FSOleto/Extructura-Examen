#include <iostream>
using namespace std;
int main(){
    int arreglo[8] = {5, 2, 9, 1, 7, 6, 3, 8};
    int pivote = 5;
    int i = 0, j = 7;
    while(i <= j){
        while(arreglo[i] < pivote) i++;
        while(arreglo[j] >= pivote) j--;
        if(i < j){
            int temp = arreglo[i];
            arreglo[i] = arreglo[j];
            arreglo[j] = temp;
        }
    }
    for(int k = 0; k < 8; k++) cout << arreglo[k] << (k == 7 ? "" : " ");
    cout << endl;
    return 0;
}
