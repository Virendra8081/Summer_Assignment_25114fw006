#include<iostream>
#include<vector>
// code for merge two sorted array;
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&ans, int n1, int n2){

    int i=n1; // for a
    int j=n2; // for b
    int k=0; // for ans

    while(i>=0&& j>=0){
        if(a[i]>b[j]) ans[k++] = a[i--];
        else ans[k++]=b[j--];
    }
    
    while(j>=0)  // a ke elements khatam 
    ans[k++]=b[j--];
    
    
    while(i>=0)  // b ke elements khatam
    ans[k++]=a[i--];
    
}

int main(){

    int arr[]={2,4,5,8};
    int n1 = sizeof(arr)/sizeof(arr[0]);

    int brr[]={ 2,3,6,7,8,12};
    int n2 = sizeof(brr)/sizeof(brr[0]);

    vector<int>a(arr,arr+n1);
    vector<int>b(brr,brr+n2);
    vector<int>ans(n1+n2);

    merge(a,b,ans,n1-1,n2-1);
    cout<<endl;

    for(int i=0 ; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }



}