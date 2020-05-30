#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(void){
    int n, a;
    vector<float> score;
    float temp = 0;
    float avg = 0;
    float ratio = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        
        ratio = 0;
        avg = 0;
        temp = 0;
        
        for(int j = 0; j < a; j++){
            cin >> temp;
            score.push_back(temp);
        }
        
        for(int k = 0; k < score.size(); k++){
            avg += score[k];
        }
        avg /= score.size();
        
        for(int x = 0; x < score.size(); x++){
            if( avg < score[x] ){
                ratio += 1;
            }
        }
        
        ratio /= score.size();
        ratio *= 100;
        
        printf("%0.3f", round(ratio * 1000) / 1000);
        cout << "%" << endl;
        
        score.clear();
        
    }
    
    
    return 0;
}
