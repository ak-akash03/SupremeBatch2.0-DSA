#include<iostream>
using namespace std;
int main(){
    cout<<"start of the program : ";
    cout<<endl;
    cout<<endl;
    
    int num ;
    cin>>num;
    // num = 5;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if(i==num-1 || j==0 || i==j){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
        
    }
    


    cout<<endl;
    cout<<endl;
    cout<<"end of the program : ";
}