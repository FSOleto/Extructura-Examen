#include <iostream>
using namespace std;
int main(){
    int a[4] = {1, 2, 3, 4};
    int b[4] = {5, 6, 7, 8};
    int producto = 0;
    for(int i = 0; i < 4; i++) producto += a[i] * b[i];
    cout << "Producto escalar = " << producto << endl;
    return 0;
}
