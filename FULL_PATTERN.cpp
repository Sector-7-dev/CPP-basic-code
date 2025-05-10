//first pattern
#include<bits/stdc++.h>
using namespace std;
/* void printtdd(){
    for (int i=0;i<4;i++){
        for(int j=0;j<4;j++){

            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    printtdd();
}
//Real first pattern
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print2(n);
} */

//first pattern
/* void printdd(int n){

    for (int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";

        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    printdd(n);

} */

/* void printddd(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printddd(n);

} */
/* void printddd(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    printddd(n);    
} */

/* void print5(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"x";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print5(n);

} */
/* void printgg(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    printgg(n);
} */
void prindd(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for (int j=0;j<2*n+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;

    }
}

int main(){
    int n;
    cin>>n;
    prindd(n);
    
}