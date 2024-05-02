#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int last_generic_binarycSearch(int l, int r, int c){
  while(l<r){
    long long m = (l+r+1)/2;
    if(v[m]>c){
      //descartamos l = m+1;
      r = m-1;
    }
    else{
      l = m;
    }
  }
  return l;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,k; cin>>n>>k;
  for(int i = 0;i<n; i++){
    int tmp; cin>>tmp;
    v.emplace_back(tmp);
  }
  while(k--){
    int q;cin>>q;
    int devueltoI = last_generic_binarycSearch(0,n-1,q);
    /*cerr<<"devueltoI "<<devueltoI<<endl;
    cerr<<"ans "<<endl;*/
    if(v[devueltoI]==q){
      cout<<devueltoI+1<<"\n";
    }
    else if(devueltoI==0){
      if(q<v[devueltoI]){
      cout<<0<<"\n";
      }
      else{
        cout<<devueltoI+1<<"\n";
      }
    }
    else{
      cout<<devueltoI+1<<"\n";
    }

  }
  return 0;
}
