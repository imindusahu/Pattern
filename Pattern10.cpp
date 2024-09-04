#include <iostream>
using namespace std;

int main()
{
    int n = 9;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == 0 || row == n - 1 || row == n - col)
                cout << "*";
            else
                cout << " ";
        }
        cout <<endl;
    }
}
// *********
//         *
//        * 
//       *  
//      *   
//     *    
//    *     
//   *      
// *********
