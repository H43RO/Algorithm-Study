#include <iostream>
using namespace std;

int main(void){
    int self[10001] = {0};
    int sum = 0;
    int n = 0;
    
    for(int i = 1; i <= 10000; i++){
        sum = i;
        n = i;
        while(n > 0){
            sum += (n % 10);
            n/=10;
        }
        if(sum <= 10000){
            self[sum] = 1;
        }
    }
    
    for(int i = 1; i <= 10000; i++){
        if(self[i] != 1){
            cout << i << endl;
        }
    }
    
    return 0;
}
