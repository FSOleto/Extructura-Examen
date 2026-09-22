#include <iostream>
using namespace std;
int main(){
    int arreglo[6] = {5, 1, 4, 2, 8, 3};
    for(int i = 1; i < 6; i++){
        int temp = arreglo[i];
        int j = i - 1;
        while(j >= 0 && arreglo[j] > temp){
            arreglo[j + 1] = arreglo[j];
            j--;
        }
        arreglo[j + 1] = temp;
    }
    for(int i = 0; i < 6; i++) cout << arreglo[i] << (i == 5 ? "" : " ");
    cout << endl;
    return 0;
}
