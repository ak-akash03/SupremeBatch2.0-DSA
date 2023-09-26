#include<iostream>
using namespace std;
bool returnoddoreven(int num){
    
    if(num % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cout<<"hello ak :";
    int num;
    cout<<"enter the number to check odd or even : "<<endl;
    cin>>num;
    int result = returnoddoreven(num);
    if(result){
        cout<<"Even Number : "<<endl;
    }
    else{
        cout<<"Odd Number : "<<endl;
    }
    return 0;
}