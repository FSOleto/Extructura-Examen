#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arreglo[7] = {-2, 3, -1, 4, -3, 5, 1};
    int mejor = arreglo[0], actual = arreglo[0];
    for(int i = 1; i < 7; i++){
        actual = max(actual + arreglo[i], arreglo[i]);
        if(actual > mejor) mejor = actual;
    }
    cout << "Suma maxima = " << mejor << endl;
    return 0;
}
