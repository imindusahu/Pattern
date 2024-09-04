#include <iostream>
using namespace std;
int main()
{
    int n = 8;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == 0  || col == 0 || row == (n - 1) / 2 || (row == 1 && col == n -1)||(row == 2  && col == n - 1))
                
                    cout << "*";
                else
                    cout << " ";
        }
        cout << endl;
        ;
    }
}
// ********
// *      *
// *      *
// ********
// *       
// *       
// *       
// *       
