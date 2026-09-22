#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arreglo[7] = {1, -3, 4, -2, 6, -1, 2};
    int mejor = arreglo[0], actual = arreglo[0];
    for(int i = 1; i < 7; i++){
        actual = min(actual + arreglo[i], arreglo[i]);
        if(actual < mejor) mejor = actual;
    }
    cout << "Suma minima = " << mejor << endl;
    return 0;
}
