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
    int a;
    int x;

    for(int k=0;k<n;k++){
        for (int m=k+1;m<n;m++){
        if (arr[m]==arr[k]){
            a=k;
            cout<<"Value of K:"<<k;
            x=1;
            break;
        }
    }
    if (x==1){
        break;
    }

}
cout<<"Output"<<a;




}
