#include<iostream>
using namespace std;
int main()

{
 int n;
 cout<<"Enter the number of rows: ";
 cin>>n;

 for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<j;
    }

    for(int space=1;space<=2*n-2*i;space++){
        cout<<" ";
    }
    for(int num=i;num>=1;num--){
        cout<<num;
        }
        cout<<endl;
 }
 
}