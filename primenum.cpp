#include<iostream>
#include<vector>
using namespace std;
void sieveOfEratosthenes(int n){
    vector<bool> prime(n+1,true);
    for (int p = 2; p*p<=n;++p)
    {
       if(prime[p]==true){
        for (int i = p*p; i<=n; i=i+p)
        {
            prime[i]=false; }
        
       }
    }
    for (int p = 2; p<=n; ++p)
    {
     if(prime[p]){
        cout<<p<<" ";
     }
     cout<<endl;
    }
}
int main(){
    int n;
    cout << "Enter the upper limit to find prime numbers up to: ";
    cin >> n;
    
    sieveOfEratosthenes(n);
    return 0;
    
}