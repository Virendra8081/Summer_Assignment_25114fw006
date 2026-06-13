#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 3, 4, 5, 1, 2 };

    int n= sizeof(arr)/sizeof(arr[0]);

    vector<int>v(arr, arr+n);
    sort(v.begin(), v.end());
    vector<int>c;


    for(int i=0; i<v.size();i++){
    if(i==0 || v[i]!=v[i-1] )
    c.push_back(v[i]);
        }


    for (int i=0; i<c.size(); i++){
        cout<<c[i]<<" ";
    }
    }


