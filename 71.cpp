#include <iostream>
using namespace std;
int main(){
    int arreglo[7] = {5, -2, 3, 4, -1, 2, 1};
    int total = 0;
    for(int i = 0; i < 7; i++) total += arreglo[i];
    cout << "Suma circular = " << total << endl;
    return 0;
}
