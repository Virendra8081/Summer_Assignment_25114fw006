#include<iostream>
#include<vector>
using namespace std; 

int main(){
    vector<int>v= {3,4,7,8,9,10};
    int target;

    bool find = false;

    cout<<"enter the target ";
    cin>>target;

    for(int i=0 ;i< v.size(); i++){
        for(int j=0; j<v.size(); j++){
            if(v[i]+v[j]== target){
            cout<<i<<" "<<j;
            find = true;
            break;}
        }
        if(find == true){
        break;
        return 0 ;

    }

    if(find == false)
    cout<<" target sum not find";


}}