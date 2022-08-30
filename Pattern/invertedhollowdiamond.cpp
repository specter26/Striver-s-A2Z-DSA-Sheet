#include <iostream>
using namespace std;
int main()

{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int n1 = n / 2 + 1;
    int n2 = n / 2;

    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int spaces = 1; spaces <= 10 - 2 * i; spaces++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n2; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int spaces = 1; spaces <= 10 - 2 * i; spaces++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}