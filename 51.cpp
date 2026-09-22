#include <iostream>
using namespace std;
int main(){
    int a[5] = {1, 2, 2, 3, 5};
    int b[4] = {2, 3, 6, 7};
    int unionA[10];
    int n = 0;
    for(int i = 0; i < 5; i++){
        bool existe = false;
        for(int j = 0; j < n; j++) if(unionA[j] == a[i]) existe = true;
        if(!existe) unionA[n++] = a[i];
    }
    for(int i = 0; i < 4; i++){
        bool existe = false;
        for(int j = 0; j < n; j++) if(unionA[j] == b[i]) existe = true;
        if(!existe) unionA[n++] = b[i];
    }
    for(int i = 0; i < n; i++) cout << unionA[i] << (i == n - 1 ? "" : " ");
    cout << endl;
    return 0;
}
