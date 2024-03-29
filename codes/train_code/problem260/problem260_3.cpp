#include <iostream>
#include <vector>
#include <algorithm>
#define In_Heap(n,i)  ((-1)<(i))&&((i)<(n)) //??????PQ[i]????????????
#define lt(i,j) ((i)>(j)) //????????§??????????????§?????????
#define Parent(i)  ((i-1)>>1) //?±???¶??????
#define Last_Internal(n)  Parent(n-1) //?????????????????¨?????????????°±?????????????????¶???
#define LChild(i) (((i)<<1)+1) //?????????
#define RChild(i) ((1+(i))<<1) //?????????
#define Parent_Valid(i) (0<i) //??????i???????????¶??????????????????????????????????????¶??????
#define LChildValid(n,i)   In_Heap(n,LChild(i)) //????????????i??????????????????
#define RChildValid(n,i)    In_Heap(n,RChild(i)) //????????????i??????????????????
#define Bigger(PQ,i,j)  (lt(PQ[i],PQ[j])?i:j) //???????????????
#define ProperParent(PQ,n,i) \
((RChildValid(n,i))?((LChildValid(n,i))?\
Bigger(PQ,Bigger(PQ,i,LChild(i)),RChild(i)):Bigger(PQ,i,RChild(i))):\
((LChildValid(n,i))?Bigger(PQ,i,LChild(i)):(i)))//??¨???Floyd??????????±???\????????\?????????????????´????????§???


using namespace std;
class Heap
{
public:
    vector<int> V;
    int percolate_Up(int pos); //????????????
    int percolate_Down(int pos); //????????????
    //?????????????????????????????????????????????
    void insert(int u); //?????\??????
    int del_Max(); //????????????
    int get_Max() {return V[0];} //???????????§/????°????
    void heapify(); //????????????
};

int Heap::percolate_Up(int pos) //????????????
{
    while(Parent_Valid(pos)) //????????????????????¶???
    {
        int parent_pos=Parent(pos); //??°?????¶??????????????????
        if(lt(V[parent_pos],V[pos])) break; //??????????????????????°±????????????
        swap(V[parent_pos],V[pos]); //???????????¢???????????§?????????????????????
        pos=parent_pos; //??´??°?????????????????????
    }
    return pos;
}

int Heap::percolate_Down(int pos) //????????????
{
    int j; //??´??¶??????
    while(pos!=(j=ProperParent(V,V.size(),pos))) //????????????????????¶????????????????????????????????????????¬?????????????
    {
        swap(V[pos],V[j]); //?????¢??????
        pos=j; //??´??°?????????????????????
    }
    return pos;
}

void Heap::insert(int u)
{
    V.push_back(u); //????????¢??????u
    percolate_Up(V.size()-1); //??????????¬?????????????
}

int Heap::del_Max()
{
    int temp=V[0];
    swap(V[0],V[V.size()-1]); //??????????????????????????¢??????
    V.pop_back(); //???????????????????????????????????????????????´??????
    percolate_Down(0); //?????´????????????????????????
    return temp;

}

void Heap::heapify() //Floyd??????
{
    for(int i=Last_Internal(V.size());In_Heap(V.size(),i);i--)
    {
        percolate_Down(i); //????????????????????¨???????????????????¬?????????????
    }
}

int main()
{
    char order[100];
    int order_num;
    Heap heap;
    bool is_over=false;
    while(cin>>order)
    {
        switch(order[0])
        {
            case 'i': cin>>order_num;
                heap.insert(order_num);
                break;
            case 'e':
                if(order[1]=='x')
                {
                  cout<<heap.del_Max()<<endl;
                }
                else
                {
                    is_over=true;
                }
                break;
        }
        if(is_over==true) break;
    }
}