#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {-4, 5, -1, 9, 0, -8, 3};
    for(int i = 0; i < 7; i++) if(arreglo[i] < 0) arreglo[i] = 0;
    for(int i = 0; i < 7; i++) cout << arreglo[i] << (i == 6 ? "" : " ");
    cout << endl;
    return 0;
}
