#include <iostream>
using namespace std;

int main(){
    int day, night, height;
    cin >> day >> night >> height;
    
    int result = 0;
    
    cout << (height - night - 1) / (day - night) + 1 << endl;
}
