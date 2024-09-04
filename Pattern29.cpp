#include <iostream>
using namespace std;
int main()
{
    int n = 8;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == 0 || row == n / 2 || row == n - 1 || (col == 0 && row == 1) || (col == 0 && row == 2) || (col == 0 && row == 3) || (col == n - 1 && row == 5) || (col == n - 1 && row == 6) || (col == n - 1 && row == 7))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
// ********
// *       
// *       
// *       
// ********
//        *
//        *
// ********