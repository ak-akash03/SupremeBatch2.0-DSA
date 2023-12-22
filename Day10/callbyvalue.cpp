#include <iostream>
using namespace std;
int increment(int n)
{
    n++;
    return n;
}
int main()
{

    // int n = 200;
    // cout<<n<<endl;

    // int &k = n;
    // k++;
    // cout<<k<<endl;

    // cout<<n<<endl;

    // int &c = k;
    // cout<<c<<endl;

    int n = 100;
    cout << n << endl;
    int m = increment(n);
    cout << n << endl;
    cout << m << endl;
}