#include <iostream>
using namespace std;
int main(){
    int arreglo[6] = {11, 22, 33, 44, 55, 66};
    int copia[6];
    for(int i = 0; i < 6; i++) copia[i] = arreglo[i];
    for(int i = 0; i < 6; i++) cout << copia[i] << (i == 5 ? "" : " ");
    cout << endl;
    return 0;
}
