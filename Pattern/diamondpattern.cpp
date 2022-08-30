#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int n1=n/2;

    for (int i = 1; i <= n1; i++)
    {

        for (int space = 1; space <= n1 - i; space++)
        {
            cout << " ";
        }

        for (int stars = 1; stars <= 2 * i - 1; stars++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n1; i >= 1; i--)
    {
        for (int space = 1; space <= n1-i; space++)
        {
            cout << " ";
        }
        for (int stars = 1; stars <= 2 * i - 1; stars++)
        {
            cout << "*";
        }
        cout << endl;
    }
}