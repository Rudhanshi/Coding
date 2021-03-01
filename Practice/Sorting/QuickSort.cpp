#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int low,int high){
    int value_piviot=a[low];
    int left=low;
    int right=high;
    while(left<right){
        while(a[left]<=value_piviot){
            left++;
        }
        while(a[right]>value_piviot){
            right--;
        }
        if(left<right){
            int temp=a[left];
            a[left]=a[right];
            a[right]=temp;
        }
        
    }
    a[low]=a[right];
    a[right]=value_piviot;
    return right;

}

void QuickSort(int a[],int low,int high){
    int piviot;
    if(high>low){
        int piviot=partition(a,low,high);
        QuickSort(a,low,piviot-1);
        QuickSort(a,piviot+1,high);
        }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    QuickSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}