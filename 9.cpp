#include <iostream>
using namespace std;
int main(){
    int arreglo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int pares = 0;
    for(int i = 0; i < 10; i++) if(arreglo[i] % 2 == 0) pares++;
    cout << "Pares = " << pares << endl;
    return 0;
}
