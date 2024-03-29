#include <bits/stdc++.h>

namespace org
{
    template <class T>
    T make_value()
    {
        T tmp;
        return tmp;
    }

    template <class T>
    T VALUE()
    {
        T tmp;
        std::cin >> tmp;
        return tmp;
    }

    template <class T>
    std::vector<T> make_vector(long long size)
    {
        std::vector<T> tmp(size);
        return tmp;
    }

    template <class T>
    std::vector<T> VECTOR(long long size)
    {
        auto tmp = make_vector<T>(size);
        for (long long i = 0; i < tmp.size(); i++)
        {
            std::cin >> tmp.at(i);
        }
        return tmp;
    }

    template <class T>
    std::vector<std::vector<T>> make_matrix(long long line, long long row)
    {
        std::vector<std::vector<T>> tmp;
        tmp.resize(line);
        for (long long i = 0; i < tmp.size(); i++)
        {
            tmp.at(i).resize(row);
        }
        return tmp;
    }

    template <class T>
    std::vector<std::vector<T>> MATRIX(long long line, long long row)
    {
        auto tmp = make_matrix<T>(line, row);
        for (long long i = 0; i < tmp.size(); i++)
        {
            for (long long j = 0; j < tmp.at(0).size(); j++)
            {
                std::cin >> tmp.at(i).at(j);
            }
        }
        return tmp;
    }

    template <class T>
    bool find(std::vector<T> vec, T value)
    {
        for (long long i = 0; i < vec.size(); i++)
        {
            if (vec.at(i) == value)
            {
                return 1;
            }
        }
        return 0;
    }

} // namespace org

std::ostream &operator<<(std::ostream &os, const std::vector<long long> vec)
{
    for (long long i = 0; i < vec.size(); i++)
    {
        os << vec.at(i) << " ";
    }
    return os;
}

std::ostream &operator<<(std::ostream &os, const std::vector<std::vector<long long>> vec)
{
    for (long long i = 0; i < vec.size(); i++)
    {
        for (long long j = 0; j < vec.at(0).size(); j++)
        {
            os << vec.at(i).at(j) << " ";
        }
        os << std::endl;
    }
    return os;
}

using ll = long long;
using namespace std;

using org::MATRIX;
using org::VECTOR;
#define VEC(name, size, type) auto name = org::VECTOR<type>(size)
#define MAT(name, line, row, type) auto name = org::MATRIX<type>(line, row)
#define llV(name, size) VEC(name, size, long long)
#define stV(name, size) VEC(name, size, std::string)
#define llM(name, line, row) MAT(name, line, row, long long)
#define stM(name, line, row) MAT(name, line, row, std::string)
#define ll(name) auto name = org::VALUE<long long>()

#define rep1(name, max1) for (long long name = 0; name < max1; name++)
#define rep2(max1, max2)                 \
    for (long long i = 0; i < max1; i++) \
        for (long long j = 0; j < max1; j++)

int main()
{

    ll(N);
    ll(M);
    ll(X);
    vector<ll> C(N);
    auto A = org::make_matrix<ll>(N, M);
    for (ll i = 0; i < N; i++)
    {
        cin >> C[i];
        for (ll j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }
    ll res = (1ll << 60);

    for (ll i = 0; i < (1 << N); i++)
    {
        auto t = org::make_vector<ll>(0);
        for (ll j = 0; j < N; j++)
        {
            if (i & (1 << j))
            {
                t.push_back(j);
            }
        }
        ll sum_price = 0;
        vector<ll> sum_value(M);
        for(ll j=0;j<t.size();j++){
            sum_price+=C[t[j]];
            for(ll k=0;k<M;k++){
                sum_value[k]+=A[t[j]][k];
            }
            bool flag=true;
            for(ll k=0;k<sum_value.size();k++){
                flag=flag&&(sum_value[k]>=X);
            }
            if(flag){
                res=min(res,sum_price);
            }
        }
        
    }
    if(res==(1ll<<60)){
        cout << "-1" << endl;
    }else{
        cout << res << endl;
    }
}