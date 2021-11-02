#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        arr[i]=rand();
        cout<<arr[i]<<endl;
    }
    for (int j=1;j<n;j++){
        int current=arr[j];
        for (int k=j-1;k>0;k--){
            if (arr[k]>current){

                arr[k+1]=arr[k];
                arr[k]=current;
            }
        }
    }
    for (int m=0;m<n;m++){
        cout<<arr[m]<<endl;
    }
}
