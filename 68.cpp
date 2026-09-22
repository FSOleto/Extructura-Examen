#include <iostream>
using namespace std;
int main(){
    int arreglo[6] = {1, 2, 3, 4, 5, 6};
    int x = 10;
    bool encontrado = false;
    for(int i = 0; i < 6; i++) for(int j = i + 1; j < 6; j++) for(int k = j + 1; k < 6; k++) if(arreglo[i] + arreglo[j] + arreglo[k] == x) encontrado = true;
    cout << (encontrado ? "SI" : "NO") << endl;
    return 0;
}
