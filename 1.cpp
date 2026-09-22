#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {3, 8, 1, 6, 4};
    for(int i = 0; i < 5; i++){
        cout << arreglo[i] << (i == 4 ? "" : " ");
    }
    cout << endl;
    return 0;
}
