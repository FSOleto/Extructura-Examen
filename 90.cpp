#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arreglo[7] = {1, 8, 6, 2, 5, 4, 8};
    int i = 0, j = 6, mejor = 0;
    while(i < j){
        int area = min(arreglo[i], arreglo[j]) * (j - i);
        if(area > mejor) mejor = area;
        if(arreglo[i] < arreglo[j]) i++;
        else j--;
    }
    cout << "Max area = " << mejor << endl;
    return 0;
}
