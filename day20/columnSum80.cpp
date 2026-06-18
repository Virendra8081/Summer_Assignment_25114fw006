#include<iostream>
using namespace std;

int main(){
    int n, k;

    cout<<" enter the number of row :";
    cin>>n;

    cout<<" enter the number of colnum :";
    cin>>k;

    int mat[n][k];

    

    cout<<" enter the matrix  elements :";

    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            cin>>mat[i][j];
        }
    }

    for(int i=0; i<k; i++){
        int columnSum = 0;
        for(int j=0; j<n; j++){
            columnSum += mat[j][i];
        }
        cout<<" sum of all elements of Column ->"<<i+1<<" ="<<columnSum;
        cout<<endl;
    }

}