#include<iostream>
using namespace std;
int main(){
    int num01,num02;
    cout<<"enter the two number : "<<endl;
    cin>>num01>>num02;
    cout<<"enter the op"<<endl;
    char op;
    cin>>op;
    switch (op)
    {
    case /* constant-expression */'-':
        /* code */cout<<num01-num02<<endl;
        break;
    case /* constant-expression */'+':
        /* code */cout<<num01+num02<<endl;
        break;
    case /* constant-expression */'*':
        /* code */cout<<num01*num02<<endl;
        break;
    case /* constant-expression */'/':
        /* code */cout<<num01/num02<<endl;
        break;
    case /* constant-expression */'%':
        /* code */cout<<num01%num02<<endl;
        break;
    
    default:
        break;
    }

    return 0;
}