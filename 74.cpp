#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {1, 2, 3, 4, 5};
    int pref[6] = {0};
    for(int i = 0; i < 5; i++) pref[i + 1] = pref[i] + arreglo[i];
    cout << pref[3] - pref[1] << endl;
    return 0;
}
