#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {4, 9, 2, 9, 7, 5, 1};
    int mayor = arreglo[0], segundo = arreglo[0];
    for(int i = 1; i < 7; i++){
        if(arreglo[i] > mayor){
            segundo = mayor;
            mayor = arreglo[i];
        } else if(arreglo[i] > segundo && arreglo[i] != mayor){
            segundo = arreglo[i];
        }
    }
    cout << "Segundo mayor = " << segundo << endl;
    return 0;
}
