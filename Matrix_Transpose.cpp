#include <iostream>

using namespace std;

int main()
{
    int n;
    int m;
    cin>>n>>m;
    int arr[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int p=m;
    int q=n;
    int A[p][q];
    for (int k=0;k<p;k++){
        for (int l=0;l<q;l++){
            if (k==l){
                A[k][l]=arr[k][l];
            }
            if (k!=l){
                A[k][l]=arr[l][k];
            }
        }
    }
    for (int a=0;a<p;a++){
        for (int b=0;b<q;b++){
            cout<<A[a][b];
        }
        cout<<endl;
    }
}
