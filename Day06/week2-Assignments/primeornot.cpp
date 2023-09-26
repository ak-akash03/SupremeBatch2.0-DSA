#include<iostream>
using namespace std;
int main(){
    cout<<"Hello Ak :"<<endl;
    cout<<"enter the number to check prime or not : ";
    int num;
    cin>>num;
    int count = 0;
    for (int i = 2; i < num; i++)
    {
        if(num % i == 0){
            count++;
        }
    }
    if(count == 0){
        cout<<"Prime Number ";
    }
    else{
        cout<<"Not Prime Number : ";
    }
    



    return 0;
}