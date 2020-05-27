#include <iostream>
using namespace std;

int main(void){
    int arr[10] = {0};
    int a, b, c;
    int num;
    
    cin >> a >> b>> c;
    
    num = a * b * c;
    
    while(num != 0){
        arr[num % 10] += 1;
        num /= 10;
    }
    
    for(int i = 0; i < 10; i++){
        cout << arr[i] <<endl;
    }
}

