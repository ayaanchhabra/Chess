#include <bits/stdc++.h>
using namespace std;

int power(int x,int n){
    if(n==1){
        return x;
    }
    return x * power(x,n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<"the square of then number is :"<<n*n;
}