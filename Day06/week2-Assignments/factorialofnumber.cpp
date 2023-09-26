#include<iostream>
using namespace std;
int  fact(int num){
    int factcount = 1;
    for (int i = 1; i <= num; i++)
    {
        factcount = factcount * i;
    }
    return factcount;
}
int main(){
    cout<<"Hello Ak";
    cout<<"enter the number to calculate the factorial : "<<endl;
    int num;
    cin>>num;
    int result = fact(num);
    cout<<result;
    return 0;
}