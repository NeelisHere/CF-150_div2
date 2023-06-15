#include <bits/stdc++.h>
using namespace std;
void solve(){
    int q; cin>>q;
    vector<int>a,res;
    int desc=0;
    while(q--){
        int x; cin>>x;
        int n=a.size(),y=0;
        if(n){
            if(desc==0 and x>=a[n-1])y=1;
            else if(desc==0 and x<a[n-1] and a[0]>=x)y=1,desc++;
            else if(desc==1 and x<a[n-1])y=0;
            else if(desc==1 and x==a[n-1] and x<=a[0])y=1;
            else if(desc==1 and x>a[n-1] and x<=a[0])y=1; 
            else if(desc>1)y=0;
        }else y=1; 

        res.push_back(y);
        if(y)a.push_back(x);
    }
    for(int val:res){
        cout<<val;
    }
    cout<<endl;
}
int main() {
    int t; cin>>t;
    while(t--){
        solve();
    }
}
