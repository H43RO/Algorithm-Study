#include <iostream>
using namespace std;

int main(void){
    int a[10];
    int result[1000] = {0};
    int count = 0;
    
    for(int i = 0; i < 10; i++){
        cin >> a[i];
        result[(a[i] % 42)]++;
    }
    
    for(int i = 0; i < 100; i++){
        if(result[i] != 0){
            count ++;
        }
    }
    cout << count << endl;
}

