#include<iostream>
#include<vector>
// code for merge two sorted array;
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&ans){

    int i=0; // for a
    int j=0; // for b
    int k=0; // for ans

    while(i<a.size()&& j<b.size()){
        if(a[i]<b[j]) ans[k++] = a[i++];
        else ans[k++]=b[j++];
    }
    if(i==a.size()) { 
    while(j< b.size())  // a ke elements khatam 
    ans[k++]=b[j++];
    } 
    if(j==b.size()){ 
    while(i<a.size())  // b ke elements khatam
    ans[k++]=a[i++];
}
    
}

int main(){

    int arr[]={2,4,5,8};
    int n1 = sizeof(arr)/sizeof(arr[0]);

    int brr[]={ 2,3,6,7,8,12};
    int n2 = sizeof(brr)/sizeof(brr[0]);

    vector<int>a(arr,arr+n1);
    vector<int>b(brr,brr+n2);
    vector<int>ans(n1+n2);

    merge(a,b,ans);
    cout<<endl;

    for(int i=0 ; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }



}