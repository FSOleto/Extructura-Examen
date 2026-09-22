#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {1, 2, 3, 2, 1};
    bool palindromo = true;
    for(int i = 0; i < 5 / 2; i++) if(arreglo[i] != arreglo[4 - i]) palindromo = false;
    cout << (palindromo ? "Es palindromo" : "No es palindromo") << endl;
    return 0;
}
