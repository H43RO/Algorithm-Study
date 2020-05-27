#include <iostream>
using namespace std;

int main(void){
    int arr[5];
    int temp;
    
    for(int x = 0; x < 5; x++){
        cin >> arr[x];
    }
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            if( arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                for(int k = 0; k < 5; k++){
                    cout << arr[k]<<" ";
                }
                cout << endl;
            }
        }
    }
    
    
}

