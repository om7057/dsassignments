#include <iostream>
using namespace std;

// greatest of 3 integers
int add(int x, int y)
{
    int c = x + y;
    return c;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << add(a, b);
    return 0;
}