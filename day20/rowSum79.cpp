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

    for(int i=0; i<n; i++){
        int rowSum = 0;
        for(int j=0; j<k; j++){
            rowSum += mat[i][j];
        }
        cout<<" sum of all elements of Row ->"<<i+1<<" ="<<rowSum;
        cout<<endl;
    }

}