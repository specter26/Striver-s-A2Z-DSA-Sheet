#include <iostream>
using namespace std;
int main()

{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int space = 1; space <= n-i; space++)
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