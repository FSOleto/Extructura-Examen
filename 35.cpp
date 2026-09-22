#include <iostream>
using namespace std;
int main(){
    int arreglo[8] = {0, 5, 0, 3, 8, 0, 1, 0};
    int n = 8, m = 0;
    for(int i = 0; i < n; i++) if(arreglo[i] != 0) arreglo[m++] = arreglo[i];
    while(m < n) arreglo[m++] = 0;
    for(int i = 0; i < n; i++) cout << arreglo[i] << (i == n - 1 ? "" : " ");
    cout << endl;
    return 0;
}
