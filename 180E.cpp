
#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define el                  cout<<endl
#define md                  1000000007
#define inf                 9e18
#define ps                  cout<<" ";
#define Pai                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)


#define N 200006
vector<ll>v[N];
int main()
{

    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0,sum=0, mx=-1 , mn=inf;
    cin>>n>>m>>k;
    ll a[n];
    fr1(i, n)cin>>a[i] , v[a[i] ].pb(i);

    fr1(i, n)
    {
        l=i, r=n;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            ll lw=lower_bound(all(v[a[i] ] ) , i )-v[a[i] ].begin();
            ll up=upper_bound(all(v[a[i] ] ) , mid )-v[a[i] ].begin();

            //cout<<up<<" "<<lw<<" "<<l<<" "<<r<<" "<<mid<<endl;

            ll element_ache= mid - i+1;
            ll k_ta_badh_diye= element_ache - (up - lw );

            if(k_ta_badh_diye  > k )r= mid-1;
            else
            {
                ans=max(ans,  (up - lw ) );
                l=mid+1;
            }
        }
        //cout<<endl;
    }

    cout<<ans;pn;


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



