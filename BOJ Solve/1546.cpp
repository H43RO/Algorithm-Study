#include <iostream>
using namespace std;

int main(void){
    float n, max;
    float score[1000];
    float sum = 0;
    float result;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> score[i];
    }
    
    max = score[0];
    for(int i = 0; i < n; i++){
        if(max < score[i]){
            max = score[i];
        }
    }
    
    for(int i = 0; i < n; i++){
        score[i] = (score[i] / max) * 100;
        sum += score[i];
    }
    
    result = sum / n;
    
    cout << result << endl;
}