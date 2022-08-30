#include<iostream>
using namespace std;

int main()
{
 int n;
 cout<<"Enter the number of rows: ";
 cin>>n;
 for(int i=1;i<=n;i++){

    for(int space=1;space<=n-i;space++){
        cout<<" ";
    }

    for(int j=1;j<=i;j++){
        char c='A'+j-1;
        cout<<c;
    }

    for(int chr=i-1;chr>=1;chr--){
        char k='A'+chr-1;
        cout<<k;
    }

    cout<<endl;
 }
}