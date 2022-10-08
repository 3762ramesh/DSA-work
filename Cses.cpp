#include <bits/stdc++.h> 
using namespace std;

using ll = long long;
using vi = vector<int>;
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define ff first
#define ss second
#define mp make_pair
#define ub upper_bound
const int MOD = 1e9+7;

void setIO(string name = "") {cin.tie(0)->sync_with_stdio(0);if (sz(name)) {	freopen((name+".in").c_str(), "r", stdin);freopen((name+".out").c_str(), "w", stdout);}}
///|||///||| Driver Code  ///|||///|||

vector<int> to_base(int n, int base){
     vector<int> ans;
       while(n){
          ans.push_back(n%base);
           n/=base;
       }
       return ans;
}

int main()
{ 
  setIO();
   int n,b;cin>>n>>b;
   vector<int> ans=to_base(n,b);
   for(auto a:ans)cout<<a;
}
    // string to_base(int n, int base){
    //      char alphabet[] = "0123456789ABCDEFGHI";//hexadecimal base conversion
    //      string result;
    //      while(n) 
    //     { 
    //            result += alphabet[n % base]; 
    //            n /= base; 
    //     }
    //     return string(result.rbegin(), result.rend());
    // }
    