#include<iostream>
using namespace std;
int main(){
    int ch,n=10;
    cout<<"Do you want to print a star pattern?(0/1)"<<endl;
    cin>>ch;
    if(ch){
        for(int i=0;i<10;i++){
            cout<<endl;
            for(int j=0;j<10;j++){
                cout<<" ";

            }
            n++;
            for(int i =0;i<n-10;i++){
                cout<<"*";
            }
        }

    }
}

