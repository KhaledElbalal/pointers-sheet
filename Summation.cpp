#include <iostream>

int **sumMat(int **m, int **n, int size)
{
    int **finalMat = new int *[size];
    for (int i = 0; i < size; i++)
    {
        finalMat[i] = new int[size];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            finalMat[i][j] = m[i][j] + n[i][j];
        }
    }
    return finalMat;
};

int main()
{
    using std::cout, std::cin;
    int size;
    cin >> size;
    int **m = new int *[size];
    for (int i = 0; i < size; i++)
    {
        m[i] = new int[size];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> m[i][j];
        }
    }
    int **n = new int *[size];
    for (int i = 0; i < size; i++)
    {
        n[i] = new int[size];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> n[i][j];
        }
    }
    int **finalMat = sumMat(m, n, size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << finalMat[i][j] << " ";
        }
        cout << '\n';
    }
}