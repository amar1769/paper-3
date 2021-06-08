#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void reverse_f(vector<int> &arr, int s, int e){
    while (s<e){
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
    return;
}

void rotate_f(vector<int> &arr, int n, int d){
    d = d%n;

    reverse_f(arr,0,d-1);

    reverse_f(arr,d,n-1);

    reverse_f(arr,0,n-1);

    return;
}

int main() {
    int n;
    cin>>n;
    int d;
    cin>>d;
    vector<int> arr;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    rotate_f(arr,n,d);

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

