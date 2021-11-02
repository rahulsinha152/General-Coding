#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int j=0;j<n;j++){
        cin>>arr[j];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    int len=2;
    int temp=0;
    for (int k=0;k<n;k++){
        int pd=arr[k+1]-arr[k];
        if(arr[k+2]-arr[k+1]==pd){
            len=len+1;
        }
        else{
            pd=arr[k+2]-arr[k+1];
            if (len>temp){
                temp=len;
                len=2;
            }
            else{
                len=2;
            }
        }




    }
    cout<<"The output is:"<<temp;

}
