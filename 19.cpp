#include <iostream>
using namespace std;
int main(){
    int arreglo[10] = {2, 4, 2, 7, 2, 9, 1, 2, 5, 2};
    int x = 2;
    int apariciones = 0;
    for(int i = 0; i < 10; i++) if(arreglo[i] == x) apariciones++;
    cout << "Apariciones = " << apariciones << endl;
    return 0;
}
