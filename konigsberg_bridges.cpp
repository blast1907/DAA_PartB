
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y;
    cin>>n>>m;
    int deg[n];
    for(int i=0;i<n;i++)
        deg[i]=0;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        deg[x]++;
        deg[y]++;
    }
    int flag=1;
    for(int i=0;i<n;i++){
        if((deg[i])&1)
            flag=0;
        cout<<deg[i]<<" ";
    }
    if(flag==1)
        cout<<"\nHurray,Euler Circuit exists"<<endl;
    else
        cout<<"\nEuler Circuit doesnt exist"<<endl;
    
}
 
