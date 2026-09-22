#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {1, 2, 3, 4, 5};
    int mayor = arreglo[0] * arreglo[1] * arreglo[2];
    for(int i = 0; i < 5; i++) for(int j = i + 1; j < 5; j++) for(int k = j + 1; k < 5; k++){
        int p = arreglo[i] * arreglo[j] * arreglo[k];
        if(p > mayor) mayor = p;
    }
    cout << "Mayor producto = " << mayor << endl;
    return 0;
}
