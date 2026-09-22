#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {4, 1, 2, 1, 7, 5, 9};
    int menor = arreglo[0], segundo = arreglo[0];
    for(int i = 1; i < 7; i++){
        if(arreglo[i] < menor){
            segundo = menor;
            menor = arreglo[i];
        } else if(arreglo[i] < segundo && arreglo[i] != menor){
            segundo = arreglo[i];
        }
    }
    cout << "Segundo menor = " << segundo << endl;
    return 0;
}
