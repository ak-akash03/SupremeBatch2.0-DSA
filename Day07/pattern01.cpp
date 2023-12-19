#include<iostream>
using namespace std;
int main(){

    int num = 5;

    for (int  i = 0; i < num; i++)
    {
        for (int j = i+1; j <= num; j++)
        {
            if(j == i+1 || j == num){
                cout<<j <<" ";
            }
            else{
                cout<<"  ";
            }
            // cout<<"* ";
        }
        cout<<endl;
        
    }
    

}