#include <iostream>
#include <string>

using namespace std;



int main(){

    string str;
    cin>>str;
    int str1= s(str);
    int n;
    int arr[n];
    int temp;
    for (int i=str.size()-1;i>=0;i--){
            arr[i]=str1%10;

    }
    for (int j=0;j<n;j++){
        for (int k=j+1;k<n;k++){
                if (arr[k]>arr[j]){
                        temp=arr[j];
                        arr[j]=arr[i]
                        arr[i]=temp;

                }



        }
    }

}


