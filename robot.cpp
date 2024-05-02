#include <bits/stdc++.h>
using namespace std;

void solver(){
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n; cin>>n;
  string s; cin>>s;
  pair<int,int> start = {0,0};
  int lasCycle = -1;
  for(int i = 0;i<n; i++){
    if(s[i]=='U'){
      start.second +=1;
    }
    if(s[i]=='D'){
      start.second -=1;
    }
    if(s[i]=='L'){
      start.first -=1;
    }
    if(s[i]=='R'){
      start.first +=1;
    }
    if(start.first==0 && start.second ==0){
      lasCycle = i;
    }
  }
  cout<<lasCycle+1<<endl;
  return 0;
}
