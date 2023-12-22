#include <iostream>
using namespace std;

// void countZeroOne(int arr[], int size){

//     int countZero = 0;
//     int countOne = 0;

//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i] == 0){
//             countZero++;
//         }
//         if(arr[i] == 1){
//             countOne++;
//         }
//     }

//     int k = 0;
//     for (; k < countZero; k++)
//     {
//         arr[k] = 0;
//     }
//     for (int m = k; m < size; m++)
//     {
//         arr[m] = 1;
//     }
    

//     // print

//     for (int l = 0; l < size; l++)
//     {
//         cout<<arr[l]<<" ";
//     }
    
    
    

// }

int main()
{
    // int arr[] = {0,0,1,1,0,0,0,0,1};
    // int size = 9;

    // countZeroOne(arr, size);








    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
        
    }

    for (int k = 0; k < size; k++)
    {
        cout<<arr[k]<<" ";
    }
    
    
   
    

}