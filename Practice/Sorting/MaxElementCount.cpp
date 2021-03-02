#include<bits/stdc++.h>
using namespace std;
void MaxElement(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0,maxCount=0,element=a[0];
    for(int i=0;i<n;i++){
        count=0;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
              count++;
            }
        }
        if(count>maxCount){
            maxCount=count;
            element=a[i];
        }
    }
    cout<<"Max Element: "<<element;
     
}
int main(){
    MaxElement();
    return 0;
}
