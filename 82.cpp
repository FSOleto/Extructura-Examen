#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {7, 2, 5, 1, 8, 3, 6};
    int aux[7];
    for(int tam = 1; tam < 7; tam *= 2){
        for(int i = 0; i < 7; i += tam * 2){
            int l = i, m = min(i + tam, 7), r = min(i + tam * 2, 7);
            int x = l, y = m, z = l;
            while(x < m && y < r) aux[z++] = arreglo[x] < arreglo[y] ? arreglo[x++] : arreglo[y++];
            while(x < m) aux[z++] = arreglo[x++];
            while(y < r) aux[z++] = arreglo[y++];
            for(int k = l; k < r; k++) arreglo[k] = aux[k];
        }
    }
    for(int i = 0; i < 7; i++) cout << arreglo[i] << (i == 6 ? "" : " ");
    cout << endl;
    return 0;
}
