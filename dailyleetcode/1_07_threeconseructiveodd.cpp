#include<iostream>
using namespace std
bool threeconseructiveodd (vector<int>&arr){
    for(int i =0;i<arr.size();i++){
        if(arr[i]%2!=0&&arr[i+1]%2!=0&&arr[i+2]%2!=0){
            return true;
        }
    }
    return false;
}
int main(){
    return 0;
}