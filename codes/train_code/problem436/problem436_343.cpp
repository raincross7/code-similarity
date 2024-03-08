#include <bits/stdc++.h> 
using namespace std; 
int computeCost(int arr[], int N, int Y) 
{ 
    int cost = 0; 
    for (int i = 0; i < N; i++) 
        cost += (arr[i] - Y)*(arr[i] - Y); 
    return cost; 
} 
int minCostToMakeElementEqual(int arr[], int N) 
{ 
    int low, high; 
    low = high = arr[0]; 
    for (int i = 0; i < N; i++) { 
        if (low > arr[i]) 
            low = arr[i]; 
        if (high < arr[i]) 
            high = arr[i]; 
    }
    while ((high - low) > 2) { 
        int mid1 = low + (high - low) / 3; 
        int mid2 = high - (high - low) / 3; 
        int cost1 = computeCost(arr, N, mid1); 
        int cost2 = computeCost(arr, N, mid2); 
        if (cost1 < cost2) 
            high = mid2; 
        else
            low = mid1; 
    } 
    return computeCost(arr, N, (low + high) / 2); 
} 
  
int main() 
{ 
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    cout << minCostToMakeElementEqual(a, n); 
    return 0; 
} 