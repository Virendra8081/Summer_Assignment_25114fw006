#include<iostream>
using namespace std;

int main(){
    int n, k;

    cout<<" enter the number of row :";
    cin>>n;

    cout<<" enter the number of colnum :";
    cin>>k;

    int mat[n][k];

    int digSum = 0;

    cout<<" enter the matrix  elements :";

    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            cin>>mat[i][j];
        }
    }

    for(int i=0; i<n; i++){
        digSum += mat[i][i];
        if( i != n-i-1){
            digSum += mat[i][n-i-1] ;
        }
    }
    cout<<digSum; 
}