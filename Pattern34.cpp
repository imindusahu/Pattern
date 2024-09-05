#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (col <= (n - 1) - row)
                cout << "*";
            else
                cout << " ";
        }
        for (int col = 0; col < n; col++)
        {
            if (col >= row)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
           if (col <= row)
                cout << "*";
            else
                cout << " ";
        }
        for (int col = 0; col<n; col++)
        {
            if (col >= (n - 1) - row)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********