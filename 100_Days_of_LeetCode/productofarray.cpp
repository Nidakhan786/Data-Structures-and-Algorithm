// Product of Array Except Self
#include <iostream>
#include <vector>
#include <unordered_map>
#include <utility>
#include <bits/stdc++.h>
using namespace std;
void Product_of_arrays(vector<int>nums){
    vector<int> arr(nums.size());
arr[0]=1;
for(int i=1; i<=nums.size();i++){
    arr[i]=arr[i-1]*nums[i-1];
}
int R=1;
for(int i=nums.size()-1;i>=0;i--)
{
arr[i]=R*arr[i];
R=R*nums[i];

}
for (int i = 0; i < nums.size(); i++) 
        cout << arr[i];
}
int main(){
   vector<int> nums={2,3,4,5,6,};
    Product_of_arrays(nums);
    return 0;
}