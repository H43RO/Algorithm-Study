#include <iostream>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    int ans = -1;
    for (int i = 0; i * 5 <= n; i++){
        if ((n - i * 5) % 3 == 0){
            ans = i + ((n - i * 5) / 3);
        }
    }

    printf("%d", ans);
}
