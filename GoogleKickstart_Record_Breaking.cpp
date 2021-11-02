#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int j=0;j<n;j++){
        cout<<arr[j]<<endl;
    }
    int RB=1;
    for (int k=0;k<1;k++){
            if (arr[k]>arr[k+1]){
                RB=RB+1;
            }
    }
    for (int k=1;k<n-1;k++){
            if ((arr[k]>arr[k-1]) && (arr[k]>arr[k+1])){
                RB=RB+1;
            }

    }

    cout<<"The Output is:"<<RB;
    cout<<"A";

    return 0;
}
