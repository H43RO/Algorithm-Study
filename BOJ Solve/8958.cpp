#include <iostream>
using namespace std;

int main(void){
    char arr[80];
    int n, j = 0;
    int count = 0;
    int result = 0;
    
    cin >> n;
    
    int score[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr;
        while(arr[j] != '\0'){
            if(arr[j] == 'O'){
                count ++;
                result += count;
            }else{
                count = 0;
            }
            j++;
        }
        score[i] = result;
        
        count = 0;
        result = 0;
        j = 0;
    }
    
    for(int i = 0; i < n; i++){
        cout << score[i] << endl;
    }
    
}

