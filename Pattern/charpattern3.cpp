#include<iostream>
using namespace std;
int main()

{
 int n;
 cout<<"Enter the number of rows:";
 cin>>n;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        char c='A'+i-1;
        cout<<c;
    }
    cout<<endl;
 }
}