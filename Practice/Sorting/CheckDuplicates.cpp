#include<bits/stdc++.h>
using namespace std;
void CheckDuplicates(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool b1;
    for(int i=0;i<n-1;i++)
     for(int j=i+1;j<n;j++){
         if(a[i]==a[j]){
             b1=true;
             break;
         }
     }
     if(b1==true){
         cout<<"YES";
     }
     else 
      cout<<"NO";
     
}
int main(){
    CheckDuplicates();
    return 0;
}
