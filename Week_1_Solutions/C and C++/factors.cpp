#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;    //the number you want to find the factors of
    cout<<"Enter number: ";     
    cin>>n;
    cout<<"Factors are: ";
    for(int fact=1; fact<=n; fact++){
        if(n%fact==0){
            cout<<fact<<" ";
        }
    }
    return 0;
}
