#include <iostream>
#include <string>

using namespace std;

int primefactor(int n){
    int prime[n+2]={0};
    for (int i=2;i<n;i++){
        if (n%i==0){
            prime[i]=1;
        }
    }
    for (int i=2;i<n;i++){
        if (prime[i]==1){
            cout<<i<<endl;
        }
    }
}


int main(){
   int n;
   cin>>n;
   primefactor(n);

}


