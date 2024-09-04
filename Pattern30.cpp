#include <iostream>
using namespace std;
int main()
{
    int n = 8;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == col)
                cout << "*";
            else
                cout << " ";
        }
        for (int col = 0; col < n; col++)
        {
            if (row == (n - 1)-col)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;

    }
}
// *              *
//  *            * 
//   *          *  
//    *        *   
//     *      *    
//      *    *     
//       *  *      
//        **       