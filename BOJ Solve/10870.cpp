#include <iostream>
#include <vector>
using namespace std;

int fibo(int n){
    int p1 = 0, p2 = 1;
    int ret = 0;
    
    for(int i = 0; i < n / 2; i++){
        p1 = p1 + p2;
        p2 = p2 + p1;
    }

    if(n % 2 == 0){
        ret = p1;
    }else{
        ret = p2;
    }
    
    return ret;
}

int main(void){
    int n;
    cin >> n;
    cout << fibo(n) << endl;
    
    return 0;
}

