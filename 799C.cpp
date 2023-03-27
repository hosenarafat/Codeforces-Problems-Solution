//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
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
#define pn                  cout<<endl;
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)


#define N 100006

int main()
{
    fast;
    ll t;

    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    char ch;

    cin>>n>>c>>d;
    ll cnt=0,ans=0,sum=0;

    vector<pair< ll, pair< ll, char> > > v;

    fr(i, n)
    {
        cin>>x>>y>>ch;
       //v.pb(make_pair(y, make_pair( x, ch)) );
       v.pb({y, x, ch});
    }

    sort(all(v));
    reverse(all(v));

    //pn;
    fr(i, n)
    {
       // cout<<v[i].first<<" "<<v[i].second.first <<" "<<v[i].second.second<<endl;

        ll cost=v[i].first;
        ll beauty=v[i].second.first ;
        char cd=v[i].second.second;

        if( cd=='C' and cost<=c ){ans+=beauty; c-=cost; cnt++;}
        else if(cd=='D' and cost<=d) {ans+=beauty; d-=cost; cnt++;}

        if(cnt==2)break;
    }

    if(cnt>1) cout<<ans<<endl;
    else cout<<0<<endl;


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1









