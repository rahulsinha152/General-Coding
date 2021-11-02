#include <iostream>
#include <stdlib.h>
using namespace std;

int maximum(int newarray[],int a, int n){
    int maxi;
    maxi=a;
    for(int j=1;j<n;j++){
        if (newarray[j]>maxi){
            maxi=newarray[j];
        }
    }
    cout<<maxi<<endl;
}

int minimum(int newarray[],int b, int n){
    int mini;
    mini=b;
    for(int k=1;k<n;k++){
        if (newarray[k]<mini){
            mini=newarray[k];
        }
    }
    cout<<mini<<endl;
}

int main()
{
 int n;
 cin>>n;
 int newarray[n];
 for (int i=0;i<n;i++){
    newarray[i]=rand();
    cout<<newarray[i]<<endl;
 }

 int a=newarray[0];
 int b=newarray[0];
 maximum(newarray,a,n);
 minimum(newarray,b,n);
return 0;
}
