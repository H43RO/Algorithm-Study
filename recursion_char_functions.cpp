#include <iostream>
using namespace std;

int length(char *str){
    if(*str == '\0'){
        return 0;
    }
    return 1 + length(str+1);
}

void print(char *str){
    if(*str == '\0'){
        cout << endl;
        return;
    }
    cout << *str;
    print(str + 1);
}

int main(void){
    cout << length("hello") << endl;
    print("Hello, World!");
}
