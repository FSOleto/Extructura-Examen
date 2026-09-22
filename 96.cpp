#include <iostream>
using namespace std;
int main(){
    int arreglo[6] = {2, 3, 1, 2, 4, 3};
    int s = 7;
    int inicio = 0, suma = 0, mejor = 1000;
    for(int fin = 0; fin < 6; fin++){
        suma += arreglo[fin];
        while(suma >= s){
            int largo = fin - inicio + 1;
            if(largo < mejor) mejor = largo;
            suma -= arreglo[inicio++];
        }
    }
    cout << "Min longitud = " << mejor << endl;
    return 0;
}
