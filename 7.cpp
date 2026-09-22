#include <iostream>
using namespace std;
int main(){
    int arreglo[8] = {-3, 5, 0, 8, -1, 4, -6, 2};
    int positivos = 0;
    for(int i = 0; i < 8; i++) if(arreglo[i] > 0) positivos++;
    cout << "Positivos = " << positivos << endl;
    return 0;
}
