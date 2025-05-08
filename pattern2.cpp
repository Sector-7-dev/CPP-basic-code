#include<bits/stdc++.h>
using namespace std;

void printee(int n){
    for (int i=0;i<n;i++){

        for(int j=0;j<=i;j++){
            cout<<"* ";

        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    printee(n);
}