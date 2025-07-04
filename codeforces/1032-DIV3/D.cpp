#include <bits/stdc++.h>
 
#define F first
#define S second
#define pb push_back
#define pf push_front
#define popf pop_front
#define popb pop_back
#define MOD 1000000007
#define MOD2 998244353
#define vi vector<int>
#define vii vector<pair<int,int>>
#define pi pair<int,int>
 
using namespace std;
#define ll long long
int const MAX5 = 100000, MAX6 = 1000000;
 
//printf("%.10lf\n",ans);
//cout<<fixed<<setprecision(20)<<ans<<endl;
//stoll string -> long long
 
 
/*
*/

void bubble_sort(int *a, int n, vector<pair<int, int>> &ans, int t){
  bool changed = false;
  do{
    changed = false;
    for(int i = 0; i + 1 < n; i++){
      if(a[i] > a[i + 1]){
        swap(a[i], a[i + 1]);
        ans.pb({t, i+1});
        changed = true;
      }
    }
  }while(changed);
}

void solve()
{
  int n; cin >> n;
  int a[n], b[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++) cin >> b[i];
  
  vector<pair<int,int>> ans;

  bubble_sort(a, n, ans, 1);
  bubble_sort(b, n, ans, 2);

  for(int i = 0; i < n; i++){
    if(a[i] > b[i]) ans.pb({3, i + 1});
  }

  cout << ans.size() << endl;
  for(auto op : ans) cout << op.F << " " << op.S << endl;
}
 
int main(){
  // in & out files
  /*
  freopen("outofplace.in", "r", stdin);
  freopen("outofplace.out", "w", stdout);
*/
  // fast and furious io
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
 
// testcases
  int t = 1;  cin >> t;
  while(t--){
    solve();
  }
  return 0;
 
}