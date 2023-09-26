#include<iostream>
using namespace std; 
int returnfun(){
    return 0;
}
int main(){
    cout<<"Hello akash : "<<endl;
    int num;
    cout<<"enter the valid integer number : "<<endl;
    cin>>num;
    switch (num)
    {
    case /* constant-expression */100:
        /* code */cout<<"this is 100 : "<<endl;
        break;
    case /* constant-expression */90:
        /* code */cout<<"this is 90 : "<<endl;
        break;
    case /* constant-expression */80:
        /* code */cout<<"this is 80 : "<<endl;
        break;
    case /* constant-expression */70:
        /* code */cout<<"this is 70 : "<<endl;
        break;
    
    default:cout<<"enter the another value : "<<endl;
        break;
    }



    return 0;
}