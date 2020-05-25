/*
    *
    * 피보나치 배열은 0과 1로 시작하며, 다음 피보나치 수는 바로 앞의 두 피보나치 수의 합이 된다.
    * 정수 N이 주어지면, N보다 작은 모든 짝수 피보나치 수의 합을 구하여라.
    *
    * [Example]
    * Input: N = 12
    * Output: 10 // 0, 1, 2, 3, 5, 8 중 짝수인 2 + 8 = 10
    *
*/

#include <iostream>
using namespace std;

int sum;

int pibo(int n){
    int sum = 0;
    
    int p1 = 0;
    int p2 = 1;
    
    while(p1 <= n){
        if(p1 % 2 == 0){
            sum += p1;
        }
        if(p2 % 2 == 0){
            sum += p2;
        }
        p1 += p2;
        p2 += p1;
    }
    return sum;
}

int main(void){
    cout << pibo(12) << endl; //10
}
