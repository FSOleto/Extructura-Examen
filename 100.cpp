#include <iostream>
using namespace std;
int main(){
    int a[4] = {1, 3, 5, 7};
    int b[4] = {2, 4, 6, 8};
    int c[8];
    int i = 0, j = 0, k = 0;
    while(i < 4 && j < 4){
        c[k++] = (a[i] < b[j]) ? a[i++] : b[j++];
    }
    while(i < 4) c[k++] = a[i++];
    while(j < 4) c[k++] = b[j++];
    if(k % 2 == 0) cout << (c[k / 2 - 1] + c[k / 2]) / 2.0 << endl;
    else cout << c[k / 2] << endl;
    return 0;
}
