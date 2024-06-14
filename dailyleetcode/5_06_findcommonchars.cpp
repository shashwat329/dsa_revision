// Day 5
// find the common char in all the string in the vector
#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
// void display(vector<string>v){
//     int arr[26] ={0};
//     for(int j= 0;j<v[0].size();j++){
//         int index = int(v[0][j]-96);
//         cout<<v[0][j];
//         arr[index]++;
//     } 
//     for(int i =0;i<26;i++){
//         if(arr[i]>0){
//             cout<<char(i+96)<<"->";
//         }
//     }
// }
vector<string> commonChars(vector<string>& words) {
    string ans ="";
    int arr[26] ={0};
    for(int j= 0;i<v[0].size();j++){
        int index = int(v[0][j]-96);
        arr[index]++;
    } 
    for(int i =1;i<v.size();i++){  
        for(int j =0;j<v[i].size();j++){
            int index = int(v[i][j])-96;
            if(arr[index]>0){
            }
            else{
                
            }
        }
    }
    }
int main(){
    string a = "bella";
    string b = "label";
    string c = "roller";
    vector<string> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    display(v);
    return 0;
}
 