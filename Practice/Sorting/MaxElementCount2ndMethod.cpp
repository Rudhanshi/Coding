#include<bits/stdc++.h>
using namespace std;
void MaxElement(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int count=0,maxCount=0,element=a[0];
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            count++;
        }
        else if(a[i]!=a[i+1]){
            count=0;
        }
        if(count>maxCount){
        maxCount = max(maxCount,count);
        element = a[i];
        }
    }
    cout<<"Max Element: "<<element;
     
}
int main(){
    MaxElement();
    return 0;
}
