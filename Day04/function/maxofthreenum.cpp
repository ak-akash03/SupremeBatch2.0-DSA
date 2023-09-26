#include<iostream>
using namespace std;
// int maxofthreenum(int firstnum, int secondnum, int thirdnum){
//     int maxnumber;
//     if(firstnum>secondnum && firstnum > thirdnum){
//         return firstnum;
//     }
//     else if (secondnum > firstnum && secondnum > thirdnum){
//         return secondnum;
//     }
//     else{
//         /* code */
//         return thirdnum;
//     }
    
//     return maxnumber;
// };
int main(){
    cout<<"enter the three number : "<<endl;
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    // int results = maxofthreenum(num1,num2,num3);
    // cout<<results;
    
    int results = max(max(num1,num2),num3);
    cout<<results;
    
    
    
    return 0;
}