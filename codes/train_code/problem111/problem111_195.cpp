#include <iostream>
#include <vector>

struct Node{
  Node () :   //constracter
    parent (-1),
    id(-1),
    depth(0)
  {}

  int id;
  int depth;
  int parent;
  std::vector<Node*>children; //stack,pointa
};

int FindRoot(Node* nodes, int n){
  for(int i=0; i<n; i++){
    if(nodes[i].parent == -1){
      return i;
    }
  }
  return n-1;
}

void ComputeDepth(Node*nodes, int idx, int depth){
  nodes[idx].depth = depth;
  for(int i=0; i<nodes[idx].children.size(); i++){
    ComputeDepth(nodes, nodes[idx].children[i]->id, depth+1);
  }
}

int main(){
  //input
  int n;
  std::cin >> n;
  Node nodes[n];
  for(int i=0; i<n; ++i){
    int id, num_children;
    std::cin >> id >> num_children;
    nodes[id].id = id;
    for(int j=0; j<num_children; ++j){
      int c;
      std::cin >> c;
      nodes[id].children.push_back(&nodes[c]);//pointa
      nodes[c].parent = id;
    }
  }

  //compute depth
  int root = FindRoot(nodes, n);
  ComputeDepth(nodes, root, 0);

  for(int i=0; i<n; i++){
    std::cout << "node " << nodes[i].id;
    std::cout << ": parent = " << nodes[i].parent;
    std::cout << ", depth = " << nodes[i].depth << ", ";

    if(nodes[i]. parent == -1){ std::cout << "root, ["; }
    else if(nodes[i].children.size() != 0){ std::cout << "internal node, ["; }
    else { std::cout <<"leaf, ["; }

    for(int j=0; j<nodes[i].children.size(); j++){
      std::cout <<nodes[i].children[j]->id;
      if(j != nodes[i].children.size() -1 ){
        std::cout << ", ";
      }
    }
    std::cout << "]" <<std::endl;
  }
  return 0;
}

