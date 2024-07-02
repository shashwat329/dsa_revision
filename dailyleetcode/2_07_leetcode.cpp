#include<iostream>
using namespace std;
vector<int>common{
    vector<int> ans;

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int p1 = 0;
    int p2 = 0;

    while (p1 < nums1.size() && p2 < nums2.size()) {
        if (nums1[p1] < nums2[p2]) {
            p1++;
        } else if (nums1[p1] == nums2[p2]) {
            ans.push_back(nums1[p1]);
            p1++;
            p2++;
        } else {
            p2++;
        }
    }

    return ans;
}
int main(){
    return 0;
}