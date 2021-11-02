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
        cout<<arr[j];
    }
    int m=0;
    int s;
    cin>>s;
    int a;
    int b;
    int x;
    for (int k=0;k<n;k++){
        m=arr[k];
        for (int l=k+1;l<n;l++){
            m=m+arr[l];
            if (m==s){
                a=l;
                b=k;
                x=1;
            }
            if (m>s){
                break;
            }
            if (m<s){
                cout<<m;
                continue;
            }
        }
        if (x==1){
            break;
        }


    }
    cout<<"Starting Position:"<<b<<endl;
    cout<<"Ending Position:"<<a<<endl;


}
