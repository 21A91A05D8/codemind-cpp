#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin>>n;
    ll cnt=0;
    while(n!=0){
        cnt++;
        n=n/2;
    } 
    cout << (1<<(cnt-1))-1 << endl;
    
}
int main()
{
    ll TEST=1;
    cin >> TEST;
    while(TEST--) 
    {
        solve();
        }
    
}