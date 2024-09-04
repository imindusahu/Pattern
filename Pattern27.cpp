#include <iostream>
using namespace std;
int main()
{
    int n = 9;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == 0 || col == n / 2 || (row == n - 1 && col == 1) || (row == n - 1 && col == 3)|| (row == n - 2 && col == 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
        ;
    }
}
// *********
//     *    
//     *    
//     *    
//     *    
//     *    
//     *    
//  *  *    
//  * **    