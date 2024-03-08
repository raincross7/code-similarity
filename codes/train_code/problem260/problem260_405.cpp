#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void maxHeap(vector<ll> &h, int i){
    int left = i*2+1;
    int right = i*2+2;
    int largest = i;
    if(left < h.size() && h[left] > h[largest]) largest = left;
    if(right < h.size() && h[right] > h[largest]) largest = right;

    if(largest != i){
        swap(h[largest],h[i]);
        maxHeap(h,largest);
    }
}

void buildMaxHeap(vector<ll> &heap){
    for(int i=heap.size()/2;i>=0;i--){
        maxHeap(heap, i);
    }
}

void input(vector<ll> &heap, int i){
    int sub=i+1;
    if(sub <= 1)return;
    if(heap[sub-1] > heap[sub/2-1]){
        swap(heap[sub-1], heap[sub/2-1]);
        input(heap, sub/2-1);
    }

}

void printheap(const vector<ll> &h){
    cout << "size: " << h.size() << endl;;
    for(int i=0;i<h.size();i++)cout <<" " << h[i];
    cout << "\n";
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<ll> heap;
    string str;
    ll num;
    cin >> str;
    while(str != "end"){
        if(str == "insert"){
            cin >> num;
            heap.push_back(num);
            input(heap, heap.size()-1);
        }else if(str == "print"){
            printheap(heap);
        }else{
            if(!heap.empty()){
                cout << heap.front() << endl;
                heap[0] = heap.back();
                heap.pop_back();
                maxHeap(heap, 0);
            }
        }
        cin >> str;
    }
    return 0;
}

