#include <iostream>
using namespace std;
int main(){
    int arreglo[8] = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    int cola[8], frente = 0, fin = 0;
    for(int i = 0; i < 8; i++){
        while(frente < fin && cola[frente] <= i - k) frente++;
        while(frente < fin && arreglo[cola[fin - 1]] >= arreglo[i]) fin--;
        cola[fin++] = i;
        if(i >= k - 1) cout << arreglo[cola[frente]] << " ";
    }
    cout << endl;
    return 0;
}
