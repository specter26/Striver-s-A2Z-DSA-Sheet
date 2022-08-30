#include<iostream>
using namespace std;
int main()

{
 int n;
 cout<<"Enter the number of rows:";
 cin>>n;

 for(int i=n;i>=1;i--){
    for(int j=i;j<=n;j++){
        char c='A'+j-1;
        cout<<c;
    }

    //had to think about j=i condition too
    //need to figure out a way to solve this loop in the reverse direction
    cout<<endl;
 }
}