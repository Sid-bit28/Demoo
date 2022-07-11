#include "bits/stdc++.h"
using namespace std;
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll

template<typename T1,typename T2>istream& operator>>(istream& in,pair<T1,T2> &a){in>>a.fr>>a.sc;return in;}
template<typename T1,typename T2>ostream& operator<<(ostream& out,pair<T1,T2> a){out<<a.fr<<" "<<a.sc;return out;}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;

const int N=0;



void solve(){
	int n,q;
    cin>>n>>q;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
    
    vector<vector<int>> pref(n+1,vector<int>(4,0));
    for(int i=0;i<n;i++){
    	rep(j,1,4){pref[i+1][j]=pref[i][j];}
    	pref[i+1][arr[i]]++;
    }
    rep(i,0,q){
    	int a,b;
    	cin>>a>>b;
    	rep(j,1,4){
    		cout<<pref[b][j]-pref[a-1][j]<<" ";
    	}
    	cout<<endl;
    }
}

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	// freopen("bcount.in","r",stdin);
 //    freopen("bcount.out","w",stdout);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}
