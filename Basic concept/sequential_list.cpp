#include <iostream>
using namespace std;

int list[100];
int length = 0;

void insert_item(int pos, int item){
    if(pos > length || length == 100 || pos < 0){
        cout << "Insert Error!" << endl;
    }else{
        for(int i = length; i > pos; i--){
            list[i] = list[i-1];
        }
        list[pos] = item;
        length++;
    }
}

void delete_item(int pos){
    if(pos >= length || length == 0 || pos < 0){
        cout <<"Delete Error!" << endl;
    }else{
        for(int i = pos; i < length; i++){
            list[i] = list[i + 1];
        }
        length--;
    }
}

void print_list(){
    cout << "[ ";
    for(int i =0; i <length; i++){
        cout << list[i] <<" ";
    }
    cout << "]" << endl;
}

int main(void){
    insert_item(0,10);
    insert_item(0,20);
    insert_item(1,30);
    insert_item(2,40);
    insert_item(10,50);
    
    print_list();
    
    delete_item(0);
    delete_item(length);
    delete_item(length-1);
    
    print_list();
    
    return 0;
}
