#include <iostream>
using namespace std;

#define MIN(a,b) ((a<b)?a:b)

int GCD(int x, int y){
    int gcd;

    for(int i = MIN(x,y); i >= 1; i++){
        if(x % i == 0 && y % i ==0){
            gcd = i;
            break;
        }
    }
    
    return gcd;
}

int main(void){
    int a, b;

    cout << "최대 공약수를 구할 2개의 수를 입력하세요 : ";
    cin >> a >> b;

    cout << a << "와 " << b << "의 최대공약수는 " << GCD(a, b) << endl;
    return 0;
}