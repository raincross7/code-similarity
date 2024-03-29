#include <iostream>
using namespace std;
constexpr int MAX=1000000;
constexpr int NIL=-1;

struct Node{int parent, left, right;};
Node T[MAX];
int n, D[MAX];

void print(int u){
   int i, c;
   cout << "node " << u << ": ";
   cout << "parent = " << T[u].parent << ", ";
   cout << "depth = " << D[u] << ", ";

   if(T[u].parent == NIL) cout << "root, ";
   else if(T[u].left == NIL) cout << "leaf, ";
   else cout << "internal node, ";
   
   cout << "[";

   for(i=0, c=T[u].left; c!=NIL; i++, c=T[c].right){
      if(i) cout << ", ";
      cout << c;
   }
   cout << "]" << endl;
}

int rec(int u, int p){
   D[u]=p;
   if(T[u].right!=NIL) rec(T[u].right, p);
   if(T[u].left!=NIL) rec(T[u].left, p+1);
}

int main(){
   int i, j, d, v, c, l, r;
   cin >> n;
   for(i=0; i<n; i++) T[i].parent = T[i].left = T[i].right = NIL;
   for(i=0; i<n; i++){
      cin >> v >> d;
      for(j=0; j<d; j++){
         cin >> c;
         if(j==0) T[v].left=c;
         else T[l].right=c;
         l=c;
         T[c].parent=v;
      }
   }
   for(i=0; i<n; i++){
      if(T[i].parent==NIL) r=i;
   }

   rec(r, 0);

   for(i=0; i<n; i++) print(i);

   return 0;
}
