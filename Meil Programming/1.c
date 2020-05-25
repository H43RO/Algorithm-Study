/*
	*
	* 정수 배열이 주어지면 이어지는 원소들의 합 중 가장 큰 합을 구하시오. 단, 시간복잡도는 O(n).
	*
	* Example:
	* Input: [-1, 3, -1, 5]
	* Output: 7 // 3 + (-1) + 5
	*
	* Input: [-5, -3, -1]
	* Output: -1 // -1
	*
	* Input: [2, 4, -2, -3, 8]
	* Output: 9 // 2 + 4 + (-2) + (-3) + 8
	*
*/

#include <stdio.h>

#define MAX(a,b) (a>=b)?a:b

int solve(int a[]){
    int currentSum = a[0];
    int maxSum = a[0];
    
    for(int i = 1; i < sizeof(a) / sizeof(int); i++){
        currentSum = MAX(currentSum + a[i], a[i]);
        maxSum = MAX(currentSum, maxSum);
    }
    return maxSum;
}

int main(void){
    int a[] = {-1,3,-1,5};
    int b[] = {-5,-3,-1};
    int c[] = {2,4,-2,-3,8};
    
    printf("%d\n", solve(a));
    
    return 0;
}


