#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {0, 1, 1, 0, 0, 1, 1};
    int suma = 0, mejor = 0;
    int primera[15];
    for(int i = 0; i < 15; i++) primera[i] = -1;
    primera[7] = 0;
    for(int i = 0; i < 7; i++){
        suma += (arreglo[i] == 0) ? -1 : 1;
        if(primera[suma + 7] == -1) primera[suma + 7] = i + 1;
        else{
            int largo = i + 1 - primera[suma + 7];
            if(largo > mejor) mejor = largo;
        }
    }
    cout << "Max longitud = " << mejor << endl;
    return 0;
}
