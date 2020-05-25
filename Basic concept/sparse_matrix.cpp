#include <iostream>
using namespace std;

#define MAX_TEMRS 10

typedef struct{
    int row;
    int col;
    int val;
} Term;


void printMatrix(int a[][5], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j <col; j++){
            cout << a[i][j] <<" ";
        }
        cout<<endl;
    }
}

void toSparseMatrix(int src[][5], Term dst[], int row, int col){
    
    int count = 1;
    
    dst[0].row = row;
    dst[0].col = col;
    dst[0].val = 0;
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j <col; j++){
            if(src[i][j] != 0){
                dst[count].val = src[i][j];
                dst[count].row = i;
                dst[count].col = j;
                dst[0].val++;
                count++;
            }
        }
    }
}

void printSparseMatrix(Term a[]){
    for(int i = 0; i <= a[0].val; i++){
        cout << a[i].row <<" " << a[i].col << " " << a[i].val << endl;
    }
}

void printOriginalMatrix(Term a[]){
    int count = 1;
    
    for(int i = 0; i < a[0].row; i++){
        for(int j = 0; j < a[0].col; j++){
            if(a[count].row == i && a[count].col == j){
                cout << a[count].val <<" ";
                count++;
            }else{
                cout << "0 " ;
            }
        }
        cout << endl;
    }
}

int main(void){
    
    int Mat[5][5] =
        {{0,0,0,2,0},
        {0,0,5,0,0},
        {4,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,1}};
    
    printMatrix(Mat, 5, 5);
    cout<<endl;

    Term SparseMat[MAX_TEMRS];
    
    toSparseMatrix(Mat, SparseMat, 5, 5);
    printSparseMatrix(SparseMat);
    cout<<endl;
    
    printOriginalMatrix(SparseMat);
    
    return 0;
}
