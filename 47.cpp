#include <iostream>
using namespace std;
int main(){
    int arreglo[8] = {3, 1, 3, 2, 1, 3, 4, 2};
    int moda = arreglo[0], mejor = 0;
    for(int i = 0; i < 8; i++){
        int cnt = 0;
        for(int j = 0; j < 8; j++) if(arreglo[j] == arreglo[i]) cnt++;
        if(cnt > mejor){
            mejor = cnt;
            moda = arreglo[i];
        }
    }
    cout << "Moda = " << moda << endl;
    return 0;
}
