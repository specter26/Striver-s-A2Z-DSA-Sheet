#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-1;space++){
            cout<<" ";
        }
        for(int stars=1;stars<=i;stars++){
            cout<<"*";
        }

        cout<<endl;
    }

    for(int i=n-1;i>=1;i--){
        for(int space=1;space<=n-1;space++){
            cout<<" ";
        }
        for(int stars=1;stars<=i;stars++){
            cout<<"*";
        }
        cout<<endl;
    }
}
