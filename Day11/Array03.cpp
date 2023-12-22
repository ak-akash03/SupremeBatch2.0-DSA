#include <iostream>
using namespace std;

void shiftOneIndex(int arr[], int size){

    // wrong logic 

    // for (int i = 0; i < size; i++)
    // {
    //     arr[i+1] = arr[i];
    // }

    // for (int j = 0; j < size; j++)
    // {
    //     cout<<arr[j]<<" ";
    // }


// ********** mainnnnn logic *****************


//     int firstPossition = arr[size-1];

//     for (int i = size-1; i > 0; i--)
//     {
//         arr[i] = arr[i-1];
//     }
    
//     arr[0] = firstPossition; 
    
//     for (int j = 0; j < size; j++)
//     {
//         cout<<arr[j]<<" ";
//     }
    
    

// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int size = 6;

//     shiftOneIndex(arr, size);

// }