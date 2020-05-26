#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int k = 0; k < (2 * n - 1) - i * 2; k++){
            cout << "*";
        }
        cout << endl;
    }
    
    for(int i = n - 2; i >= 0; i--){
        for(int j =0; j < i; j++){
            cout << " ";
        }
        for(int k = 0; k < (2 * n - 1) - i * 2; k++){
            cout << "*" ;
        }
        cout << endl;
    }
}
