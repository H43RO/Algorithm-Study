#include <iostream>
using namespace std;

void selectionSort(int a[], int n){
    int min = 0, temp = 0;
    for (int i = 0; i < n; i++){
        min = i;
        for (int j = i; j < n; j++){
            if(a[min] > a[j]){
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main(void){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    selectionSort(a, 10);
    
    for (int i = 0; i < 10; i++){
        cout << a[i] <<" ";
    }
    cout << endl;
    
    return 0;
}
