// C++ program to find  
// maximum XOR subset 
#include<bits/stdc++.h>

#define int long long

using namespace std;

// Number of bits to  
// represent int 
#define INT_BITS 64

// Function to return 
// maximum XOR subset 
// in set[] 
int maxSubarrayXOR(vector<int> set, int X) {
    int n = set.size();
    // Initialize index of 
    // chosen elements 
    int index = 0;

    // Traverse through all 
    // bits of integer  
    // starting from the most 
    // significant bit (MSB) 
    for (int i = INT_BITS - 1; i >= 0; i--) {
        if( (X >> i & 1) == 0 ) {
            // Initialize index of
            // maximum element and
            // the maximum element
            int maxInd = index;
            int maxEle = LONG_LONG_MIN;
            for (int j = index; j < n; j++) {
                // If i'th bit of set[j]
                // is set and set[j] is
                // greater than max so far.
                if ((set[j] & (1ll << i)) != 0)
                    maxEle = set[j], maxInd = j;
            }

            // If there was no
            // element with i'th
            // bit set, move to
            // smaller i
            if (maxEle == LONG_LONG_MIN)
                continue;

            // Put maximum element
            // with i'th bit set
            // at index 'index'
            swap(set[index], set[maxInd]);

            // Update maxInd and
            // increment index
            maxInd = index;

            // Do XOR of set[maxIndex]
            // with all numbers having
            // i'th bit as set.
            for (int j = 0; j < n; j++) {
                // XOR set[maxInd] those
                // numbers which have the
                // i'th bit set
                if (j != maxInd &&
                    (set[j] & (1ll << i)) != 0)
                    set[j] = set[j] ^ set[maxInd];
            }

            // Increment index of
            // chosen elements
            index++;
        }else{

        }
    }

    // Final result is  
    // XOR of all elements 
    int res = 0;
    for (int i = 0; i < n; i++)
        res ^= set[i];
    return res;
}

signed main() {
    int n;
    cin >> n;
    vector<int> a;

    int tot = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
        tot ^= x;
    }
    int t = maxSubarrayXOR(a, tot);
    cout << t + (t ^ tot) << endl;
}

  