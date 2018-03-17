#include <iostream>

using std::cin;
using std::cout;

void diamond(int n) {

//n is number of rows
//n should be odd for symmetric diamond

    //top half + middle row
    for(int i=0;i<n/2+1;i++){
        
        //inserting space
        int s=n/2;
        for(int j=0;j<(s-i);j++)
            cout<<" ";
        
        //inserting stars
        int st=2*i+1;
        for(int k=0;k<st;k++)
            cout<<"*";
        
        cout<<"\n";
    }

    //lower row
    for(int i=n/2-1;i>=0;i--){
    
        //inserting space
        int s=n/2;
        for(int j=0;j<s-i;j++)
            cout<<" ";

        //inserting stars
        int st=2*i+1;
        for(int k=0;k<st;k++)
            cout<<"*";

        cout<<"\n";
    }
}

int main(){

int n;
cout<<"Enter the number of rows :";
cin>>n;
cout<<"\n";
diamond(n);

return 0;
}
