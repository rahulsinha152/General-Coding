#include <iostream>
#include <stdlib.h>

using namespace std;

int keyfinding(int newarray[],int k, int n){
    if (newarray[n/2]==k){
        cout<<"key is in the location:"<<k;
    }
    else if(newarray[n/2]>k){
        for (int a=0; a<n/2;a++){
            if (newarray[a]==k){
                cout<<"key is in the location:"<<a;
            }
        }
    }
    else{
            for (int b=((n/2)+1); b<n;b++){
            if (newarray[b]==k){
                cout<<"key is in the location:"<<b;
            }
        }

    }
    return -1;

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
    for (int j=0;j<n;j++){
        for (int k=j+1;k<n;k++){
            if (newarray[j]>newarray[k]){
                int temp=newarray[k];
                newarray[k]=newarray[j];
                newarray[j]=temp;
            }
        }
    }
    for (int m=0;m<n;m++){
        cout<<newarray[m]<<endl;
    }
    int k;
    cin>>k;
    keyfinding(newarray,k,n);


}
