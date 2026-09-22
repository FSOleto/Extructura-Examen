#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {7, 2, 5, 1, 8, 3, 6};
    for(int i = 6 / 2 - 1; i >= 0; i--){
        int padre = i;
        while(true){
            int hijo = 2 * padre + 1;
            if(hijo >= 6) break;
            if(hijo + 1 < 6 && arreglo[hijo + 1] > arreglo[hijo]) hijo++;
            if(arreglo[padre] >= arreglo[hijo]) break;
            int temp = arreglo[padre];
            arreglo[padre] = arreglo[hijo];
            arreglo[hijo] = temp;
            padre = hijo;
        }
    }
    cout << "Heap sort listo" << endl;
    return 0;
}
