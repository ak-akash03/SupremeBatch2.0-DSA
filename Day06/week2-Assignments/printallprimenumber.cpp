#include<iostream>
using namespace std;
// bool iseven(int num){
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             return false;
//         }

//     }
//     return true ;   
// };
// int main(){
    // cout<<"Hello Ak "<<endl;


    // cout<<"enter the number : ";
    // int num;
    // cin>>num;
    // bool result = iseven(num);
    // for (int i = 2; i <= num; i++)
    // {
    //     bool result = iseven(i);
    //     if (result)
    //     {
    //         cout<<i<<"  ";
    //     }
        
    // }
    
    // if(result){
    //     cout<<"Prime number : ";
    // }
    // else{
    //     cout<<"Not Prime Number : ";
    // }


    
//     return 0;
// }



bool isprime(int num){
    for (int i = 2; i < num; i++)
    {
        if(num % i == 0){
            return false;
        }
    }
    
    return true;
}
int main(){
    cout<<"hello ak : "<<endl;
    cout<<"enter the number : ";
    int num;
    cin>>num;
    
    for (int i = 2; i <= num; i++)
    {
        int result = isprime(i);
        if (result)
        {
            cout<<i<<"  ";
        }
        
    }
    



    return 0;
}