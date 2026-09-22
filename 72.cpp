#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {1, 2, 3, 2, 1};
    int total = 0;
    for(int i = 0; i < 5; i++) total += arreglo[i];
    int izquierda = 0;
    bool equilibrio = false;
    for(int i = 0; i < 4; i++){
        izquierda += arreglo[i];
        if(izquierda == total - izquierda) equilibrio = true;
    }
    cout << (equilibrio ? "SI" : "NO") << endl;
    return 0;
}
