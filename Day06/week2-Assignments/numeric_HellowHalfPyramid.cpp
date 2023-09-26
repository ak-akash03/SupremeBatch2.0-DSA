#include<iostream>
using namespace std;
int main(){
    cout<<"hellp ak : "<<endl;


    int n = 5;
    for (int row = 0; row < n; row++)
    {
        for (int  col = 0; col < n; col++)
        {
            if(row == col || col == 0 || row == n-1){
                cout<<col+1<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
        
    }
    
    
    


    return 0;
}