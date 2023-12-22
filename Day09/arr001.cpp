#include <iostream>
#include <limits.h>
using namespace std;
// void printArray(int arr[], int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

// }

// bool linearSearch(int arr[], int size, int target){
//     for (int  i = 0; i < size; i++)
//     {
//         if(target == arr[i]){
//             return true;
//         }
//     }
//     return false;
// }

// void fun(int arr[], int size){
//     int one = 0;
//     int zero = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i]==1){
//             one++;
//         }
//         if(arr[i]==0){
//             zero++;
//         }
//     }
//     cout<<"1 repate "<<one<<" time"<<endl;
//     cout<<"0 repate "<<zero<<" time"<<endl;

// }

// void minNum(int arr[], int size){
//     int Min = INT_MAX;
//     for (int  i = 0; i < size; i++)
//     {
//         if(arr[i]<Min){
//             Min = arr[i];
//         }
//     }
//     cout<<"Minimun : "<<Min<<endl;
// }

// void reverseArrey(int arr[], int size){

//     int right = size-1;
//     int left = 0;
//     int temp;

//     for (int i = 0; i < size; i++)
//     {
//         if(right <= left){
//             break;
//         }
//         temp =arr[left];
//         arr[left] = arr[right];
//         arr[right] = temp;
//         right--;
//         left++;
//     }

//     cout<<"After Reversing : "<<endl;
//     for (int j = 0; j < size; j++)
//     {
//         cout<<arr[j]<<" ";
//     }
//     cout<<endl;

// }

// void reverseArrey(int arr[], int size){

//     int right = size-1;
//     int left = 0;
//     int temp;

//     while (right >= left)
//     {
//         // temp =arr[left];
//         // arr[left] = arr[right];
//         // arr[right] = temp;
//         // right--;
//         // left++;
//         swap(arr[left], arr[right]);
//         left++;
//         right--;

//     }

//     cout<<"After Reversing : "<<endl;
//     for (int j = 0; j < size; j++)
//     {
//         cout<<arr[j]<<" ";
//     }
//     cout<<endl;

// }

// void reverseArrey(int arr[], int size)
// {

//     int right = size - 1;
//     int left = 0;
//     int temp;

//     for (;right>=left;)
//     {
//         cout<<arr[left]<<" "<<arr[right]<<" ";

//         right--;
//         left++;
//     }

//     // cout << "After Extreme : " << endl;
//     // for (int j = 0; j < size; j++)
//     // {
//     //     cout << arr[j] << " ";
//     // }
//     // cout << endl;
// }

int main()
{

    // int arr[5];
    // int n = 5;
    // cout<<"enter the input : ";
    // for (int  i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // int sum = 0;
    // cout<<endl<<"addition : "<<endl;
    // for (int j = 0; j < n; j++)
    // {
    //     sum = sum + arr[j];
    // }
    // cout<<sum;

    // *************************************************************

    // int arr[] = {2,4,7,9,1,3,5};
    // cout<<"enter the input : ";
    // int find ;
    // cin>>find;
    // for (int i = 0; i < 7; i++)
    // {
    //     if(find == arr[i]){
    //         cout<<"index : "<<i<<endl;
    //         break;
    //     }
    // }

    // **********************************************************************

    // int arr[5] = {6,3,7,2,5};
    // cout<<size(arr);
    // int target;
    // cout<<"enter the target : ";
    // cin>>target;

    // bool out = 0;

    // for (int  i = 0; i < 5; i++)
    // {
    //     if(target == arr[i]){
    //         out = 1;
    //     }
    // }
    // if(out == 1){
    //     cout<<"target is found :";
    // }else{
    //     cout<<"target is not found : ";
    // }

    // ***********************************************************************

    // int arr[6] = {1,2,3,4,5,6};
    // int size = 6;
    // printArray(arr, size);

    // ***********************************************************************

    // int arr[5] = {8,4,5,7,2};
    // int size = 5;
    // int target ;
    // cout<<"enter the target :";
    // cin>>target;

    // bool out = linearSearch(arr, size, target);

    // if(out == 1){
    //     cout<<"target found : ";
    // }
    // else{
    //     cout<<"target not found : ";
    // }

    // *************************************************************************

    // int arr[8] = {0,0,0,1,0,1,0,0};
    // int size = 8;
    // fun(arr , size);

    // **********************************************************************

    // minimun number in a array

    // int arr[5] = {3,5,10,7,2};
    // int size = 5;
    // minNum(arr, size);

    // *******************************************************************

    // Reverse an arrray

    // int arr[6] = {1,2,3,4,5,6};
    // int size = 6;
    // reverseArrey(arr, size);
    // Reverse an arrray

    // int arr[6] = {1,2,3,4,5,6};
    // int size = 6;
    // reverseArrey(arr, size);



}