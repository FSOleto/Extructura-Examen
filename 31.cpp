#include <iostream>
using namespace std;
int main(){
    int arreglo[8] = {3, 1, 3, 2, 1, 3, 4, 2};
    int usados[8] = {0};
    for(int i = 0; i < 8; i++){
        if(!usados[i]){
            int cnt = 0;
            for(int j = 0; j < 8; j++) if(arreglo[j] == arreglo[i]){ cnt++; usados[j] = 1; }
            cout << arreglo[i] << " -> " << cnt << endl;
        }
    }
    return 0;
}
