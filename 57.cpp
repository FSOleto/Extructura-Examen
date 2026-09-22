#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {1, 5, 2, 8, 3};
    int mejor = arreglo[0] + arreglo[1];
    for(int i = 1; i < 4; i++) if(arreglo[i] + arreglo[i + 1] > mejor) mejor = arreglo[i] + arreglo[i + 1];
    cout << "Mayor suma = " << mejor << endl;
    return 0;
}
