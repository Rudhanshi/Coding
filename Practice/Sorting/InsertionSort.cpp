#include<bits/stdc++.h>
using namespace std;
void InsertionSort(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n-1;i++){
        int key=a[i];
        int j=i;
        while(a[j-1]>key && j>=1){
            a[j]=a[j-1];
            j--;
        }
        a[j]=key;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


}
int main(){
    InsertionSort();
    return 0;
}


