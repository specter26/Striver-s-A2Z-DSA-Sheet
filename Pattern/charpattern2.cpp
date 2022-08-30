#include<iostream>
using namespace std;

int main()
{
 int n;
 cout<<"Enter the number of rows: ";
 cin>>n;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
        char c='A'+j-1;
        cout<<c;
    }
    cout<<endl;
 }
}