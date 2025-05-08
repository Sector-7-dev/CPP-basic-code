#include<bits/stdc++.h>
using namespace std;

int main() {

    int marks;
    char garde;

    cout<<"Please enter your marks";
    cin>>marks;
    if (marks<25)
        cout<<"grade"<<garde<<'F';

    
    else if ( marks<=44)

        cout<<"grade"<<garde<<'E';
    
    else if ( marks<=49 )

        cout<<"grade"<<garde<<'D';

    
    else if ( marks<=59)

        cout<<"grade"<<garde<<'C';

    
    else if (marks<=79)

        cout<<"grade"<<garde<<'B';

    

    else if (marks>=80 && marks<=100)
        cout<<"grade"<<garde<<'A';
    


}