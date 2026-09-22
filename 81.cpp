#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {7, 2, 5, 1, 8, 3, 6};
    int inicio = 0, fin = 6;
    while(inicio < fin){
        int pivote = arreglo[(inicio + fin) / 2];
        int i = inicio, j = fin;
        while(i <= j){
            while(arreglo[i] < pivote) i++;
            while(arreglo[j] > pivote) j--;
            if(i <= j){
                int temp = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = temp;
                i++; j--;
            }
        }
        if(inicio < j) fin = j;
        else inicio = i;
    }
    for(int i = 0; i < 7; i++) cout << arreglo[i] << (i == 6 ? "" : " ");
    cout << endl;
    return 0;
}
