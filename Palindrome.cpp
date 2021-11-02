#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n];
    cin>>arr;
    int x=1;

    for (int i=0;i<n-1-i;i++){
        if (arr[i]!=arr[n-1-i]){
            x=0;
            break;
        }





        }
        if (x==1){

            cout<<"Palindrome";
        }
        else{
            cout<<"Not a Palindrome";
        }

}
