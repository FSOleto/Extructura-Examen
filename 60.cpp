#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {1, 2, 2, 3, 4, 4, 5};
    int mejor = 1, actual = 1;
    for(int i = 1; i < 7; i++){
        if(arreglo[i] > arreglo[i - 1]) actual++;
        else actual = 1;
        if(actual > mejor) mejor = actual;
    }
    cout << "Longitud = " << mejor << endl;
    return 0;
}
