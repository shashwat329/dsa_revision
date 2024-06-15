// reverse an array 
#include<iostream>
using namespace std;
int *reverse (int arr[],int n){
    int s = 0;
    int e = n-1;
    while(e>s){
        swap(arr[s],arr[e]);
        e--;
        s++; 
    }
    return arr;
}
int main(){
    int arr[10] = {1,12,233,23,4532,5567,12,14,4,1};
    int* revseredarr= reverse(arr,10);
    for(int i =0 ;i<10;i++){
        cout<<revseredarr[i]<<" ";
    }
    return 0;
}