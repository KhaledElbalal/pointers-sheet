#include <iostream>

int main()
{
    using std::cout, std::cin;
    int x, y, z;
    cin >> x >> y >> z;

    int ***arr = new int **[x];
    for (int i = 0; i < x; i++)
    {
        arr[i] = new int *[y];
        for (int j = 0; j < y; j++)
        {
            arr[i][j] = new int[z];
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cin >> arr[i][j][k];
            }
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cout << arr[i][j][k] << " ";
            }
            cout << '\n';
        }
        cout << '\n';
    }
}