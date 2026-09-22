#include <iostream>
using namespace std;
int main(){
    int arreglo[8] = {4, 2, 2, 8, 3, 3, 1, 7};
    int cnt[10] = {0};
    for(int i = 0; i < 8; i++) cnt[arreglo[i]]++;
    for(int i = 0; i < 10; i++) while(cnt[i]--) cout << i << " ";
    cout << endl;
    return 0;
}
