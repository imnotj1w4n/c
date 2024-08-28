#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int a[1001];
  int b[1001];
  int n,A;
  A=1;
  b[0]=1;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  for (int i=1; i<n; i++){
      b[i]=1;
    for(int j=0; j<i; j++){
      if(a[i]<a[j]&&b[i]<b[j]+1){
        b[i]=b[j]+1;
      }

    }
    A=max(A,b[i]);
  }
 cout<<A;
}
