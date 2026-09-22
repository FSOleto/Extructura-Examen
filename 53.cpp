#include <iostream>
using namespace std;
int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int b[3] = {2, 4, 6};
    int diff[10];
    int n = 0;
    for(int i = 0; i < 5; i++){
        bool existe = false;
        for(int j = 0; j < 3; j++) if(a[i] == b[j]) existe = true;
        if(!existe) diff[n++] = a[i];
    }
    for(int i = 0; i < n; i++) cout << diff[i] << (i == n - 1 ? "" : " ");
    cout << endl;
    return 0;
}
