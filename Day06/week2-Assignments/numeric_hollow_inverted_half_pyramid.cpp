#include<iostream>
using namespace std;
int main(){
    cout<<"Hello Ak : "<<endl;
    
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            cout<<j<<" ";        }
        cout<<endl;
    }
    
    



    return 0;
}