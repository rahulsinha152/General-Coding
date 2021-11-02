#include <iostream>
#include <string>

using namespace std;



int main(){

    string str;
    cin>>str;
    int count=1;
    for (int i=0;i<str.size();i++){
        int temp=1;
        for (int j=i+1;j<str.size();j++){
            if (str[j]==str[i]){
                temp+=1;
            }
            if (temp>count){
                count=temp;
            }
        }
    }
    cout<<count;


}


