#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {1, 2, 3, 4, 5};
    int acumulado = 0;
    for(int i = 0; i < 5; i++){
        acumulado += arreglo[i];
        cout << acumulado << (i == 4 ? "" : " ");
    }
    cout << endl;
    return 0;
}
