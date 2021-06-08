#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <unordered_set>
using namespace std;

void intersection (vector<int> &arr1, vector<int> &arr2, int n1, int n2){
    int i = 0;
    int j = 0;

    while (i<n1 && j<n2){
        if (arr1[i] < arr2[j]) i++;
        else if (arr1[i] > arr2[j]) j++;
        else {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
}

void union_f(vector<int> &arr1, vector<int> &arr2, int n1, int n2){
    unordered_set<int> hash;
    for (auto ele : arr1){
        hash.insert(ele);
    }
    for (auto ele : arr2){
        hash.insert(ele);
    }

    for (auto h : hash){
        cout<<h<<" ";
    }
}

int main() {
    int n1;
    cin>>n1;
    vector<int> arr1;
    for (int i=0;i<n1;i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    int n2;
    cin>>n2;
    vector<int> arr2;
    for (int i=0;i<n2;i++){
        int x;
        cin>>x;
        arr2.push_back(x);
    }

    union_f(arr1,arr2,n1,n2);
    cout<<endl;
    intersection(arr1,arr2,n1,n2);

    return 0;
}
