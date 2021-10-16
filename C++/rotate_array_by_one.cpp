#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<limits.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
     /*STL FUNCTION FOR RIGHT SHIFT OF ARRAY*/
    /* std::rotate(v.begin(),v.begin()+v.size()-k,v.end()) */
    
    /*STL FUNCTION FOR LEFT SHIFT OF ARRAY*/
    /* std::rotate(v.begin(),v.begin()+k,v.end()) */
    int n;
    cin>>n;

    int a[n],i;
    for(i=0;i<n;++i){
        cin>>a[i];
    }
    int last=a[n-1];
    for(i=n-2;i>=0;--i){
        a[i+1]=a[i];
    }
    a[0]=last;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";

        
    }
    return 0;
}