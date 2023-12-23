#include <iostream>
using namespace std;
// int fun2(int a)
// {
//     cout << a << endl;
//     return a;
// }
// int fun1(int a)
// {
//     int c = fun2(a);
//     return c;
// }

// void firstZero(int arr[] , int size){

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i; j < size; j++)
//         {
//             if(arr[i]>arr[j]){
//                 swap(arr[i], arr[j]);
//             }
//         }
        
//     }
    

//     for (int  k = 0; k < size; k++)
//     {
//         cout<<arr[k]<<" ";
//     }
    
// }




void firstZero(int arr[] ,  int size){

    int low = 0;
    int high = size-1;

    for (int  i = 0; i < size; i++)
    {
        if(arr[low] == 0){
            low++;
        }
        else{
            
        }
    }
    

}


int main()
{


    int arr[5] = {1,0,0,0,1};
    int size = 5;
    firstZero(arr, size);



    // int arr[9] = {1,0,0,0,1,9,5,3,7};
    // int size = 9;
    // firstZero(arr, size);




    // int a = fun1(5);

    // float f = 5.0;
    // cout<<f<<endl;
    // float ff = 5.11;
    // cout<<ff<<endl;
    // int a = 3.2;
    // cout<<a<<endl;

    // return 1;
}