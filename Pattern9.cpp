#include <iostream>
using namespace std;

int main()
{
    int n = 12;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == 0 or col == 0 or col == n or row == n - 1 or col == n - 1 or row == col or row == (n - 1) - col)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
// ************
// **        **
// * *      * *
// *  *    *  *
// *   *  *   *
// *    **    *
// *    **    *
// *   *  *   *
// *  *    *  *
// * *      * *
// **        **
// ************