#include <iostream>
using namespace std;

void star(int n){
    if(n<=0){
        return;
    }
    star(n-1);
    for(int i =0; i<n; i++){
        cout<<"*";
    }
    cout << endl;
}

int main(void){
    int num;
    cout << "Enter the number of stars : ";
    cin >> num;
    
    star(num);
}
