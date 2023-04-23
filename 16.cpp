#include<iostream>
using namespace std;

int main(){
    int x;
    for(int i=1;i<=5;i++){
        x=i;

        for(int j=1;j<=5;j++){
            cout<<x<<" ";
            x+=5;
       
        }
        cout<<endl;
    }
    return 0;
}