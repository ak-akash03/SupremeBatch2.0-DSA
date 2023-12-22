#include<iostream>
using namespace std;

// int getUnique(int arr[], int n){
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans = ans^arr[i];
//     }
//     return ans;
    
// }

void printPairs(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<<"("<<arr[i]<<","<<arr[j]<<")  ";
        }
        cout<<endl;
        
    }
    


}

int main(){
    // int arr[] = {2,10,11,10,2,13,15,13,15};
    // int n = 9;
    // int finalAns = getUnique(arr, n);
    // cout<<"Final Answar Is : "<<finalAns;




    int arr[] = {1,2,3};
    int size = 3;
    printPairs(arr,size);










} 
