#include <iostream>

using std::cout, std::cin;

void swap(int *a, int *b, int *c)
{
    int temp = *c;
    *c = *a;
    *a = *b;
    *b = temp;
};

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    swap(&a, &b, &c);
    cout << a << ' ' << b << ' ' << c;
}