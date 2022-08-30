#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=5-i+1;j++){
            cout<<"*";
        }
        for(int spaces=1;spaces<=2*i-2;spaces++){
            cout<<" ";
        }
        for(int j=1;j<=5-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n/2;i>=1;i--){
        for(int j=i;j<=n/2;j++){
            cout<<"*";
        }
        for(int spaces=1;spaces<=2*i-2;spaces++){
            cout<<" ";
        }
        for(int j=i;j<=n/2;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}