#include <iostream>
using namespace std;
int main(){
    int arreglo[5] = {1, 2, 3, 4, 5};
    int producto = 1;
    for(int i = 0; i < 5; i++) producto *= arreglo[i];
    for(int i = 0; i < 5; i++) cout << producto / arreglo[i] << (i == 4 ? "" : " ");
    cout << endl;
    return 0;
}
