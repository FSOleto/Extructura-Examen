#include <iostream>
using namespace std;
int main(){
    int a[5] = {1, 2, 2, 3, 5};
    int b[4] = {2, 3, 6, 7};
    int inter[10];
    int n = 0;
    for(int i = 0; i < 5; i++){
        bool existe = false;
        for(int j = 0; j < 4; j++) if(a[i] == b[j]) existe = true;
        if(existe){
            bool ya = false;
            for(int j = 0; j < n; j++) if(inter[j] == a[i]) ya = true;
            if(!ya) inter[n++] = a[i];
        }
    }
    for(int i = 0; i < n; i++) cout << inter[i] << (i == n - 1 ? "" : " ");
    cout << endl;
    return 0;
}
