#include<iostream>
using namespace std;
int main(){
    int result=1;
    int num;
    cout<<"enter a number to calculate factorial: ";
    cin>>num;
    for (int i = 1; i<=num; i++)
    {
     result*=i;
    }
    
return 0;
}