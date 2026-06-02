#include<iostream>
#include<climits>
using namespace std;

int main(){
    
    int n;

    cout<<" enter the value the n :";
    cin>>n;
    
    int max= INT_MIN;
    
    for(int i=2; i<=n; i++){
        while(n%i==0){
            if(i>max){
                max=i;
            }

            n=n/i;
        }
    }

    cout<<"maximum prime factor of the given number ="<<max;
    return 0;
}
