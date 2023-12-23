#include <iostream>
using namespace std;
int fun2(int a)
{
    cout << a << endl;
    return a;
}
int fun1(int a)
{
    int c = fun2(a);
    return c;
}
int main()
{

    int a = fun1(5);

    // float f = 5.0;
    // cout<<f<<endl;
    // float ff = 5.11;
    // cout<<ff<<endl;
    // int a = 3.2;
    // cout<<a<<endl;

    return 1;
}