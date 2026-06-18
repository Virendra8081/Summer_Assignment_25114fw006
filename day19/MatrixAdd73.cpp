#include<iostream>
using namespace std;

int main(){
    int n, k;

    cout<<" enter the number of row :";
    cin>>n;

    cout<<" enter the number of colnum :";
    cin>>k;

    int mat1[n][k];
    int mat2[n][k];
    int sum =0 ;


    cout<<" enter the matrix 1 elements :";

    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            cin>>mat1[i][j];
        }
    }

    cout<<" enter the matrix 2 elements :";

    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            cin>>mat2[i][j];
        }
    }
    

    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            sum = mat1[i][j] + mat2[i][j];
        }
    }

    cout<<" sum of the matrix 1 & 2 elements are  -> "<<sum;



}