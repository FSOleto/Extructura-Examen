#include <iostream>
using namespace std;
int main(){
    int arreglo[10] = {4, 2, 4, 7, 2, 9, 7, 1, 4, 5};
    int salida[10];
    int n = 0;
    for(int i = 0; i < 10; i++){
        bool existe = false;
        for(int j = 0; j < n; j++) if(salida[j] == arreglo[i]) existe = true;
        if(!existe) salida[n++] = arreglo[i];
    }
    for(int i = 0; i < n; i++) cout << salida[i] << (i == n - 1 ? "" : " ");
    cout << endl;
    return 0;
}
