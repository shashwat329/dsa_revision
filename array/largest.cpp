#include<iostream>
using namespace std;
int largest(int arr[],int n){
    int max = arr[0];
    for(int i =1;i<n-1;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[10]={1,23,4,5,7,2,24,354,4};
    cout<<largest(arr,10)<<endl;
    return 0;
}
