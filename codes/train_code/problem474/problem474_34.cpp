#include <stdio.h>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <iterator>
#include <assert.h>
#pragma warning(disable:4996) 
 
typedef long long ll;
#define MIN(a, b) ((a)>(b)? (b): (a))
#define MAX(a, b) ((a)<(b)? (b): (a))
#define LINF 9223300000000000000
#define INF 2140000000
//const long long MOD = 1000000007;
const long long MOD = 998244353;
using namespace std;


int main(int argc, char* argv[])
{
    char str[15]={0};
    scanf("%s", str);
    int i;
    for(i=11; i>=4; i--) {
        str[i+1]=str[i];
    }
    str[4]=' ';
    printf("%s\n", str);

    return 0;
}
