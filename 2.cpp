#include <iostream>
using namespace std;
int main(){
    int arreglo[6] = {2, 4, 6, 8, 10, 12};
    for(int i = 5; i >= 0; i--){
        cout << arreglo[i] << (i == 0 ? "" : " ");
    }
    cout << endl;
    return 0;
}
