#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {1, 3, 5, 7, 9};
    for(int i = 0; i < 5; i++) arreglo[i] *= 2;
    for(int i = 0; i < 5; i++) cout << arreglo[i] << (i == 4 ? "" : " ");
    cout << endl;
    return 0;
}
