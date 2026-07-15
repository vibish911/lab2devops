#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mult(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    return a / b;
}
int rem(int a, int b)
{
    return a % b;
}
int main()
{
    int a = 10, b = 10;
    cout << add(a, b);
    cout << sub(a, b);
    cout << mult(a, b);
    cout << divide(a, b);
    cout << rem(a, b);
    cout<<add(1,2);
    cout<<sub(2,3);
    return 0;  
}