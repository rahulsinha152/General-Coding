#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter =1;
    int arr[n];
    for (int j=0;j<n;j++){
        arr[j]=rand();
        cout<<arr[j]<<endl;
    }
    for (counter=1;counter<n;counter++){
        for (int i=0;i<n;i++){
            if (arr[i+1]<arr[i]){
                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for (int k=0;k<n;k++){
        cout<<arr[k]<<endl;
    }

}
