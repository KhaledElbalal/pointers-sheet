#include <iostream>

void sqrt(int &x, int &y)
{
    x *= x;
    y *= y;
};

// Alternative Approach
// void sqrt(int *x, int *y)
// {
//     *x *= *x;
//     *y *= *y;
// }

int main()
{
    using std::cout, std::cin;
    int x, y;
    cin >> x >> y;
    sqrt(x, y);
    cout << x << ' ' << y;
    // ALternative Approach
    // sqrt(&x, &y);
    // cout << '\n' << x << ' ' << y;
}