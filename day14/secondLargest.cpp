    #include<iostream>
    using namespace std;

    int main()
    {  
        
    int n, x;

    int max = INT_MIN;
    int max2 = INT_MIN;
    

    cout<<" enter the array length :";
    cin>>n;

    int  arr[n];

    cout<<" enter the array elements :";

    for(int i= 0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i]>max2 && arr[i]!= max){
            max2 = arr[i];
        }
    }

    cout<<" largest element in the Array = "<<max<<endl;
    cout<<" second largest element in the Array = "<<max2<<endl;



    }