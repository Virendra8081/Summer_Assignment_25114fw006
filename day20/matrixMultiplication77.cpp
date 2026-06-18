#include<iostream>
using namespace std;

int main(){
    int n, m;

    cout<<" enter the number of row :";
    cin>>n;

    cout<<" enter the number of colnum :";
    cin>>m;

    int mat1[n][m];
    int mat2[n][m];
    int c [n][m] ;


    cout<<" enter the matrix 1 elements :";

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat1[i][j];
        }
    }

    cout<<" enter the matrix 2 elements :";

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat2[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < m; k++) {
                c[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>c[i][j];
        }
        cout<<endl;
    }
}