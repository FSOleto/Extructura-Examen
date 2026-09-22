#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {1, 2, 3, 4, 5};
    bool perm = true;
    for(int i = 0; i < 5; i++) if(arreglo[i] != i + 1) perm = false;
    cout << (perm ? "SI" : "NO") << endl;
    return 0;
}
