
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, row, col;

    cout << "Enter number of lines: ";
    cin >> n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            cout << " ";
        }
        for(col=1; col<=row; col++)
        {
            cout << (char)(row+64) << " ";
        }
        cout << endl;
    }

    getch();
}





















