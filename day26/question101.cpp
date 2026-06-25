#include<iostream>
#include<cmath>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main(){
    int max , guess;

    cout<<" WELCOME TO MY GAME";


    cout<<endl;

    cout<<" TO EXIT THE GAME PLEASE TYPE -1";


    cout<<endl;


    cout<<"LETS START THE GAME !";

    cout<<endl;

    cout<<" enter your maximum number :";
    cin>>max;
    
    cout<<endl;
    

    srand(time(0));
    int nums = rand()% max +1;

   
    cout<<endl;

    while(true){
        cout<<" Guess the number ";
        cin>>guess;

        if( guess == -1 ){
            cout<<" user exit the game";
            break;
        }

        if(nums == guess ){
            cout<<" you are right! congrats! random number was"<<nums<<endl;
            break;
        }
        else if(guess < nums){
            cout<<"hint! your guess is too small. Please try again: "<<endl;
        }

        else {
            cout<<"hint! your guess is too large. Please try again "<<endl;
        }
    }

    return 0;
}