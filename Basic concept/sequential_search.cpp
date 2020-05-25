#include <iostream>
using namespace std;

int sequentialSearch(int a[], int n, int key){
    for(int i = 0; i < n; i++){
        if(a[i] == key){
            return i;
        }
    }
    return -1;
}

int main(void){
    int a[10] = {1,10,34,2,7,95,100,745,3,56};
    cout <<"Best : "<<sequentialSearch(a,10,1)<<endl;
    cout <<"Avg : " <<sequentialSearch(a,10,95)<<endl;
    cout <<"Worst : " <<sequentialSearch(a,10,56)<<endl;
    cout << "NA : " << sequentialSearch(a,10,1004)<<endl;


    return 0;
}