#include <iostream>
using namespace std;
int main(){
    int arreglo[8] = {1, 2, 2, 3, 3, 3, 4, 5};
    int hist[10] = {0};
    for(int i = 0; i < 8; i++) hist[arreglo[i]]++;
    for(int i = 1; i <= 5; i++) cout << i << ": " << hist[i] << endl;
    return 0;
}
