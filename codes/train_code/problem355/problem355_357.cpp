#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <vector>
#include <iomanip>
#define ALL(x) (x).begin(), (x).end()
#define rt return
#define dll(x) scanf("%I64d",&x)
#define xll(x) printf("%I64d\n",x)
#define sz(a) int(a.size())
#define all(a) a.begin(), a.end()
#define rep(i,x,n) for(int i=x;i<n;i++)
#define repd(i,x,n) for(int i=x;i<=n;i++)
#define pii pair<int,int>
#define pll pair<long long ,long long>
#define gbtb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define MS0(X) memset((X), 0, sizeof((X)))
#define MSC0(X) memset((X), '\0', sizeof((X)))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define eps 1e-6
#define gg(x) getInt(&x)
#define db(x) cout<<"== [ "<<x<<" ] =="<<endl;
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) {return b ? gcd(b, a % b) : a;}
ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}
ll powmod(ll a, ll b, ll MOD) {ll ans = 1; while (b) {if (b % 2)ans = ans * a % MOD; a = a * a % MOD; b /= 2;} return ans;}
inline void getInt(int* p);
const int maxn = 1000010;
const int inf = 0x3f3f3f3f;
/*** TEMPLATE CODE * * STARTS HERE ***/
char str[maxn];
int n;
int main()
{
    //freopen("D:\\common_text\\code_stream\\in.txt","r",stdin);
    //freopen("D:\\common_text\\code_stream\\out.txt","w",stdout);
    // gbtb;
    cin >> n;
    cin >> str + 1;
    string ans = "";
    int isok = 0;
    // S

    // 右 s
    ans = "SS";
    rep(i, 2, n)
    {
        if (str[i] == 'o')
        {
            if (ans[ans.size() - 1] == 'S')
            {
                ans += ans[ans.size() - 2];
            } else
            {
                if (ans[ans.size() - 2] == 'S')
                {
                    ans += "W";
                } else
                {
                    ans += "S";
                }
            }
        } else
        {
            if (ans[ans.size() - 1] == 'S')
            {
                if (ans[ans.size() - 2] == 'S')
                {
                    ans += "W";
                } else
                {
                    ans += "S";
                }
            } else
            {
                ans += ans[ans.size() - 2];
            }
        }
    }
    if (str[1] == 'o')
    {
        if (ans[0] == 'S')
        {
            if (ans[1] == ans[ans.size() - 1])
            {
                isok = 1;
            } else
            {
                isok = 0;
            }
        } else
        {
            if (ans[1] != ans[ans.size() - 1])
            {
                isok = 1;
            } else
            {
                isok = 0;
            }
        }
    } else
    {
        if (ans[0] == 'S')
        {
            if (ans[1] != ans[ans.size() - 1])
            {
                isok = 1;
            } else
            {
                isok = 0;
            }
        } else
        {
            if (ans[1] == ans[ans.size() - 1])
            {
                isok = 1;
            } else
            {
                isok = 0;
            }
        }
    }
    if (str[n] == 'o')
    {
        if (ans[ans.size() - 1] == 'S')
        {
            if (ans[0] == ans[ans.size() - 2])
            {
                // isok = 1;
            } else
            {
                isok = 0;
            }
        } else
        {
            if (ans[0] != ans[ans.size() - 2])
            {
                // isok = 1;
            } else
            {
                isok = 0;
            }
        }
    } else
    {
        if (ans[ans.size() - 1] == 'S')
        {
            if (ans[0] != ans[ans.size() - 2])
            {
                // isok = 1;
            } else
            {
                isok = 0;
            }
        } else
        {
            if (ans[0] == ans[ans.size() - 2])
            {
                // isok = 1;
            } else
            {
                isok = 0;
            }
        }
    }
    // 右 w
    if (!isok)
    {
        ans = "SW";
        rep(i, 2, n)
        {
            if (str[i] == 'o')
            {
                if (ans[ans.size() - 1] == 'S')
                {
                    ans += ans[ans.size() - 2];
                } else
                {
                    if (ans[ans.size() - 2] == 'S')
                    {
                        ans += "W";
                    } else
                    {
                        ans += "S";
                    }
                }
            } else
            {
                if (ans[ans.size() - 1] == 'S')
                {
                    if (ans[ans.size() - 2] == 'S')
                    {
                        ans += "W";
                    } else
                    {
                        ans += "S";
                    }
                } else
                {
                    ans += ans[ans.size() - 2];
                }
            }
        }
        if (str[1] == 'o')
        {
            if (ans[0] == 'S')
            {
                if (ans[1] == ans[ans.size() - 1])
                {
                    isok = 1;
                }
            } else
            {
                if (ans[1] != ans[ans.size() - 1])
                {
                    isok = 1;
                }
            }
        } else
        {
            if (ans[0] == 'S')
            {
                if (ans[1] != ans[ans.size() - 1])
                {
                    isok = 1;
                }
            } else
            {
                if (ans[1] == ans[ans.size() - 1])
                {
                    isok = 1;
                }
            }
        }
        if (str[n] == 'o')
        {
            if (ans[ans.size() - 1] == 'S')
            {
                if (ans[0] == ans[ans.size() - 2])
                {
                    // isok = 1;
                } else
                {
                    isok = 0;
                }
            } else
            {
                if (ans[0] != ans[ans.size() - 2])
                {
                    // isok = 1;
                } else
                {
                    isok = 0;
                }
            }
        } else
        {
            if (ans[ans.size() - 1] == 'S')
            {
                if (ans[0] != ans[ans.size() - 2])
                {
                    // isok = 1;
                } else
                {
                    isok = 0;
                }
            } else
            {
                if (ans[0] == ans[ans.size() - 2])
                {
                    // isok = 1;
                } else
                {
                    isok = 0;
                }
            }
        }

    }
    // W

    // 右 s
    if (!isok)
    {
        ans = "WS";
        rep(i, 2, n)
        {
            if (str[i] == 'o')
            {
                if (ans[ans.size() - 1] == 'S')
                {
                    ans += ans[ans.size() - 2];
                } else
                {
                    if (ans[ans.size() - 2] == 'S')
                    {
                        ans += "W";
                    } else
                    {
                        ans += "S";
                    }
                }
            } else
            {
                if (ans[ans.size() - 1] == 'S')
                {
                    if (ans[ans.size() - 2] == 'S')
                    {
                        ans += "W";
                    } else
                    {
                        ans += "S";
                    }
                } else
                {
                    ans += ans[ans.size() - 2];
                }
            }
        }
        if (str[1] == 'o')
        {
            if (ans[0] == 'S')
            {
                if (ans[1] == ans[ans.size() - 1])
                {
                    isok = 1;
                }
            } else
            {
                if (ans[1] != ans[ans.size() - 1])
                {
                    isok = 1;
                }
            }
        } else
        {
            if (ans[0] == 'S')
            {
                if (ans[1] != ans[ans.size() - 1])
                {
                    isok = 1;
                }
            } else
            {
                if (ans[1] == ans[ans.size() - 1])
                {
                    isok = 1;
                }
            }
        }
        if (str[n] == 'o')
        {
            if (ans[ans.size() - 1] == 'S')
            {
                if (ans[0] == ans[ans.size() - 2])
                {
                    // isok = 1;
                } else
                {
                    isok = 0;
                }
            } else
            {
                if (ans[0] != ans[ans.size() - 2])
                {
                    // isok = 1;
                } else
                {
                    isok = 0;
                }
            }
        } else
        {
            if (ans[ans.size() - 1] == 'S')
            {
                if (ans[0] != ans[ans.size() - 2])
                {
                    // isok = 1;
                } else
                {
                    isok = 0;
                }
            } else
            {
                if (ans[0] == ans[ans.size() - 2])
                {
                    // isok = 1;
                } else
                {
                    isok = 0;
                }
            }
        }
    }
    // 右 w
    if (!isok)
    {
        ans = "WW";
        rep(i, 2, n)
        {
            if (str[i] == 'o')
            {
                if (ans[ans.size() - 1] == 'S')
                {
                    ans += ans[ans.size() - 2];
                } else
                {
                    if (ans[ans.size() - 2] == 'S')
                    {
                        ans += "W";
                    } else
                    {
                        ans += "S";
                    }
                }
            } else
            {
                if (ans[ans.size() - 1] == 'S')
                {
                    if (ans[ans.size() - 2] == 'S')
                    {
                        ans += "W";
                    } else
                    {
                        ans += "S";
                    }
                } else
                {
                    ans += ans[ans.size() - 2];
                }
            }
        }
        if (str[1] == 'o')
        {
            if (ans[0] == 'S')
            {
                if (ans[1] == ans[ans.size() - 1])
                {
                    isok = 1;
                }
            } else
            {
                if (ans[1] != ans[ans.size() - 1])
                {
                    isok = 1;
                }
            }
        } else
        {
            if (ans[0] == 'S')
            {
                if (ans[1] != ans[ans.size() - 1])
                {
                    isok = 1;
                }
            } else
            {
                if (ans[1] == ans[ans.size() - 1])
                {
                    isok = 1;
                }
            }
        }
        if (str[n] == 'o')
        {
            if (ans[ans.size() - 1] == 'S')
            {
                if (ans[0] == ans[ans.size() - 2])
                {
                    // isok = 1;
                } else
                {
                    isok = 0;
                }
            } else
            {
                if (ans[0] != ans[ans.size() - 2])
                {
                    // isok = 1;
                } else
                {
                    isok = 0;
                }
            }
        } else
        {
            if (ans[ans.size() - 1] == 'S')
            {
                if (ans[0] != ans[ans.size() - 2])
                {
                    // isok = 1;
                } else
                {
                    isok = 0;
                }
            } else
            {
                if (ans[0] == ans[ans.size() - 2])
                {
                    // isok = 1;
                } else
                {
                    isok = 0;
                }
            }
        }
    }

    if (!isok)
    {
        cout << -1 << endl;
    } else
    {
        cout << ans << endl;
    }
    return 0;
}

inline void getInt(int* p) {
    char ch;
    do {
        ch = getchar();
    } while (ch == ' ' || ch == '\n');
    if (ch == '-') {
        *p = -(getchar() - '0');
        while ((ch = getchar()) >= '0' && ch <= '9') {
            *p = *p * 10 - ch + '0';
        }
    }
    else {
        *p = ch - '0';
        while ((ch = getchar()) >= '0' && ch <= '9') {
            *p = *p * 10 + ch - '0';
        }
    }
}

