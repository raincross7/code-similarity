#include<bits/stdc++.h>
using namespace std;

vector< pair<long long,long long> >adj[100006];
long long ara[100006],vis[100006],ttl[100006];

int main()
{


        long long n,m,a,b,c,d,e,f,g,h,p,q,r,fr,sc,tr,sz=0,tz,i,j,k,mx=LLONG_MIN,mn=LLONG_MAX;
        long long x=0,y=0,cnt=0,res=0,ans=0,sum=0; long long flg=0,flag=1,na=0,as=1;
        vector<long long>u,v,w; vector< pair<long long,long long> >vct; vector<string>vst;
        set<long long>st,nt,tt; map<long long,long long>mp,nq,qr; string str,ttr,ntr;

        fr=10000000000; queue<long long>qu;

        scanf("%lld %lld",&n,&m);

        for(i=0;i<m;i++)
        {
            scanf("%lld %lld %lld",&a,&b,&d);

            ttl[a]++; if(ttl[a]==1){  v.push_back(a); sz++;  }
            ttl[b]++; if(ttl[b]==1){  v.push_back(b); sz++;   }

            adj[a].push_back(make_pair(b,d));
            r=d*(-1); adj[b].push_back(make_pair(a,r));

        }

        for(i=0;i<sz;i++)
        {
            a=v[i];

            if(vis[a]==0)
            {

            x++;

            qu.push(a); ara[a]=fr; vis[a]=x;

            if(ara[a]>mx)mx=ara[a];
            if(ara[a]<mn)mn=ara[a];

            while(!qu.empty())
            {
                c=qu.front(); qu.pop();

                f=adj[c].size();

                for(int lp=0;lp<f;lp++)
                {
                    p=adj[c][lp].first; q=adj[c][lp].second;

                    if(vis[p]==0)
                    {
                        ara[p]=ara[c]+q; qu.push(p); vis[p]=x;

                        if(ara[p]>mx)mx=ara[p];
                        if(ara[p]<mn)mn=ara[p];
                    }
                    else
                    {
                        h=ara[c]+q; if(h!=ara[p]){  flag=0;  break;   }
                    }

                }

                if(flag==0)break;

            }



            }


            if(flag==0)break;


        }


        if(mn<0){ flag=0;  }
        else
        {
            b=mx-mn;

            if(b>1000000000){  flag=0;  }
        }


        if(flag==1)printf("Yes\n");
        else{ printf("No\n");   }







    return 0;
}


