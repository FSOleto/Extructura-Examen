#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {5, 12, 3, 27, 9, 18, 4};
    int mayor = arreglo[0];
    for(int i = 1; i < 7; i++) if(arreglo[i] > mayor) mayor = arreglo[i];
    cout << "Mayor = " << mayor << endl;
    return 0;
}
