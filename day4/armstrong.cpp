#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, digit=0, a,b =0;

    cout<<" enter to check the armstrong number :";
    cin>>n;
    
    a = n;
    
    for( ; n>0; n = n / 10){
        digit++;
    }

    for(int i=a; i>0; i=i/10){
        b= b+ pow((i%10),digit);
    }

    if(a==b)
        cout<<" number is armstrong :";

    else
        cout<<" number is not armstrong :";

    return 0;


}
