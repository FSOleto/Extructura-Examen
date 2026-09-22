#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {1, 2, 3, 4, 5};
    int mayor = arreglo[0] * arreglo[1];
    for(int i = 0; i < 5; i++) for(int j = i + 1; j < 5; j++){
        int p = arreglo[i] * arreglo[j];
        if(p > mayor) mayor = p;
    }
    cout << "Mayor producto = " << mayor << endl;
    return 0;
}
