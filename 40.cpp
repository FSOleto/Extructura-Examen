#include <iostream>
using namespace std;
int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {1, 2, 3, 4, 5};
    bool iguales = true;
    for(int i = 0; i < 5; i++) if(a[i] != b[i]) iguales = false;
    cout << (iguales ? "Iguales" : "Diferentes") << endl;
    return 0;
}
