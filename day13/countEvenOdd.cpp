#include<iostream>
using namespace std;

int main(){

    int n , even =0, odd =0;

    cout<<" enter the array length :";
    cin>>n;

    int arr[n];

    cout<<" enter the array elements :";

    for(int i= 0; i<n; i++){
        cin>>arr[i];
    }

    for(int i =0; i<n; i++){
        if (arr[i] % 2==0){
            even++;
        }
        else
            odd++;
    }

    cout<<" Number of even elements in Array = "<<even<<endl;
    cout<<" Number of odd elements in Array = "<<odd<<endl;


    return 0;

}