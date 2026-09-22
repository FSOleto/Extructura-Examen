#include <iostream>
using namespace std;
int main(){
    int a[4] = {1, 3, 5, 7};
    int b[4] = {2, 4, 6, 8};
    int fusion[8];
    int i = 0, j = 0, k = 0;
    while(i < 4 && j < 4){
        if(a[i] < b[j]) fusion[k++] = a[i++];
        else fusion[k++] = b[j++];
    }
    while(i < 4) fusion[k++] = a[i++];
    while(j < 4) fusion[k++] = b[j++];
    for(int x = 0; x < k; x++) cout << fusion[x] << (x == k - 1 ? "" : " ");
    cout << endl;
    return 0;
}
