#include<bits/stdc++.h>
using namespace std;

void dena(int n){

    for(int i =0;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    dena(n);
}