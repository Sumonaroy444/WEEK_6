
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int ans =0;
        for(int i=1;i<=n;i++){
            ans= __gcd(ans,abs(a[i]-i));
        }
           cout<<ans<<endl;
    }
}

