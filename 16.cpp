#include <iostream>
using namespace std;
int main(){
    int arreglo[10] = {0, 2, 0, 4, 5, 0, 7, 8, 0, 10};
    int ceros = 0;
    for(int i = 0; i < 10; i++) if(arreglo[i] == 0) ceros++;
    cout << "Ceros = " << ceros << endl;
    return 0;
}
