#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == col || col == 0)
                cout << "*";
            else
                cout << " ";
        }
        for (int col = 0; col < n; col++)
        {
            if (row == (n - 1) - col || col == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
// *              *
// **            **
// * *          * *
// *  *        *  *
// *   *      *   *
// *    *    *    *
// *     *  *     *
// *      **      *