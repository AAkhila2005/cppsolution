#include<iostream>
using namespace std;
int main(){
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];
    cout<<"enter the elements of the 1st array-\n";
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr1[i][j];
    }
    }
     for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<"enter the elements of the second array-\n";
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr2[i][j];
    }
    }
     for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
    }
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        arr3[3][3]=arr1[3][3]+arr2[i][j];
    }
    }
        cout<<"sum of two matrics is-\n"<<arr3[3][3];
}