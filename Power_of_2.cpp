#include <iostream>
#include <string>

using namespace std;

int powerof2(int n){
    return (n && !(n &(n-1)));
}

int main(){
    int x;
    cin>>x;
    cout<<powerof2(x);

}


