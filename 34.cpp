#include <iostream>
using namespace std;
int main(){
    int arreglo[9] = {2, 5, 2, 7, 2, 8, 3, 2, 4};
    int x = 2;
    int n = 9, m = 0;
    for(int i = 0; i < n; i++) if(arreglo[i] != x) arreglo[m++] = arreglo[i];
    for(int i = 0; i < m; i++) cout << arreglo[i] << (i == m - 1 ? "" : " ");
    cout << endl;
    return 0;
}
