#include <iostream>
using namespace std;
int main(){
    int a[4] = {1, 2, 3, 4};
    int b[4] = {10, 20, 30, 40};
    int c[4];
    for(int i = 0; i < 4; i++) c[i] = a[i] + b[i];
    for(int i = 0; i < 4; i++) cout << c[i] << (i == 3 ? "" : " ");
    cout << endl;
    return 0;
}
