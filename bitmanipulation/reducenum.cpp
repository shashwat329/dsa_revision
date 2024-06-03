// 1404. Number of Steps to Reduce a Number in Binary Representation to One
#include<iostream>
using namespace std;
long long convertbinarytodeci(string s){
    long long sum =0;
    for(int i =0;i<s.size();i++){
       if(s[s.size()-1-i]=='1'){
         sum = pow(2,i)*1 +sum;
       }
        else{
         sum = pow(2,i)*0 +sum;
        }
    }
    return sum;
}
int reducestep(string s){
    long long num = convertbinarytodeci(s);
    int count;
    while(num!=1){
        if(num%2==0){
            num= num/2;
        }
        else{
            num = num+1;
        }
        count++;
    }
    return count-1;
}
int main(){
    string s ="1101";
    cout<<reducestep(s)<<endl;
    return 0;
}