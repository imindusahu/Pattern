#include <iostream>
using namespace std;
int main()
{
    int n = 9;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == 0 || col == 0 || row == n - 1 || (col == n - 1 && row == n - 2) || (col == n - 1 && row == n - 3) || (col == n - 1 && row == n - 4) || (col == n - 1 && row == n - 5))
                cout << "*";
            else
                cout << " ";
        }
        cout << "";
        for (int col = 0; col < n; col++)
        {
            if (row == n / 2 || (row == n - 4 && col == 8) || (row == n - 3 && col == 8) || (row == n - 2 && col == 8) || (row == n - 1 && col == 8))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
        ;
    }
}
// *********         
// *                 
// *                 
// *                 
// *       **********
// *       *        *
// *       *        *
// *       *        *
// *********        *