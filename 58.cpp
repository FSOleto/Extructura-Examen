#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int arreglo[5] = {2, 5, 1, 9, 4};
    int mejor = abs(arreglo[1] - arreglo[0]);
    for(int i = 1; i < 4; i++){
        int d = abs(arreglo[i + 1] - arreglo[i]);
        if(d > mejor) mejor = d;
    }
    cout << "Mayor diferencia = " << mejor << endl;
    return 0;
}
