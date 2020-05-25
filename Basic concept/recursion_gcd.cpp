#include <iostream>
using namespace std;

int GCD(int a, int b){
    if(b == 0){
        return a;
    }
    return GCD(b, a%b);
}

int main(void){
    int a, b;
    
    cout << "최대 공약수를 구할 2개의 수를 큰 수부터 입력하시오 " ;
    cin >>a >> b;
    
    cout << GCD(a,b) <<endl;
    
}
