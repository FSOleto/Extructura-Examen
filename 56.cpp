#include <iostream>
using namespace std;
int main(){
    int arreglo[6] = {-2, -1, 3, -4, 5, -6};
    int cambios = 0;
    for(int i = 1; i < 6; i++) if((arreglo[i] < 0) != (arreglo[i - 1] < 0)) cambios++;
    cout << "Cambios de signo = " << cambios << endl;
    return 0;
}
