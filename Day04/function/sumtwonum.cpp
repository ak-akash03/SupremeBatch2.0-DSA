#include<iostream>
using namespace std;
int printsomething(int a,int b){
    int results = a + b;
    return results;
}
int main(){
    cout<<"start of the program : "<<endl;
    cout<<printsomething(3,4);
    return 0;
}