// Implementation of K frequent elements occurs in array in C++
#include <iostream>
#include<vector>
#include<unordered_map>
#include <utility> 
#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>p1, pair<int,int> p2){
if(p1.second == p2.second)
    return p1.first>p2.first;


return p1.second>p2.second;
}
void printFrequentElements(int arr[], int n, int k){

    unordered_map<int, int> freq;
    for(int i =0; i<n ;i++){
        freq[arr[i]]++;
    }
 vector<pair<int, int> > freqarr(freq.begin(), freq.end());
  sort(freqarr.begin(), freqarr.end(), compare);
cout<< k + "frequently occuring numbers are:";
  for(int i=0; i<k; i++){
     cout<<freqarr[i].first;
  }
}
int main() 
{ 
    int arr[] = { 1,2,4,5,5,5,5,5,3,3,2,2}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k = 2; 
    printFrequentElements(arr, n, k); 
    return 0; 
} 