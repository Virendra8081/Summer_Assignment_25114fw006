#include<iostream>
#include<cmath>
using namespace std;

void armstrong(int i){

    int a=i, c=i, b=0, digit=0;

    for( ; a>0; a = a / 10){
        digit++;
    }
    
    for(int j=c; j>0; j=j/10){
        b= b+ pow((j%10),digit);
    }
    
    if(i==b)
        cout<<" number is armstrong :"<<b<<endl;


}

void range(int n){

    for(int i=1; i<=n; i++){
        armstrong(i);
    }
}


int main(){

    int n;
    
    cout<<" enter the range to find the armstong number :";
    cin>>n;
    
    range(n);
}