#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n = 8;
    for (int i = 0; i < n; i++)
    {
        // print I
        for (int j = 0; j < n; j++)
        {
            if (j == n / 2 or i == 0 or i == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        // Print N
        cout << "     ";
        for (int j = 0; j < n; j++)
        {
            if (j == i or j == 0 or j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        // Print D
        cout << "     ";
        for (int j = 0; j < n; j++)
        {
            if (j == 0 or j == n - 1 or i == 0 or i == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        // Print U
        cout << "     ";
        for (int j = 0; j < n; j++)
        {
            if (i == n - 1 or j == 0 or j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        // Print S
        cout << "              ";
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n / 2 || i == n - 1 || (j == 0 && i == 1) || (j == 0 && i == 2) || (j == 0 && i == 3) || (j == n - 1 && i == 5) || (j == n - 1 && i == 6) || (j == n - 1 && i == 7))
                cout << "*";
            else
                cout << " ";
        }
        // Print A
        cout << "     ";
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || i == (n - 1) / 2 || i == 0 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        // Print H
        cout << "     ";
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || i == (n - 1) / 2 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        // Print U
        cout << "     ";
        for (int j = 0; j < n; j++)
        {
            if (i == n - 1 or j == 0 or j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
// ********     *      *     ********     *      *              ********     ********     *      *     *      *
//     *        **     *     *      *     *      *              *            *      *     *      *     *      *
//     *        * *    *     *      *     *      *              *            *      *     *      *     *      *
//     *        *  *   *     *      *     *      *              *            ********     ********     *      *
//     *        *   *  *     *      *     *      *              ********     *      *     *      *     *      *
//     *        *    * *     *      *     *      *                     *     *      *     *      *     *      *
//     *        *     **     *      *     *      *                     *     *      *     *      *     *      *
// ********     *      *     ********     ********              ********     *      *     *      *     ********