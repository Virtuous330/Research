#include <bits/stdc++.h>

using namespace std;
struct node
{
	int v; 
	int next; 
};   

node a[200001];
int n,m,p;
int k[5001],c[5001];
void insert(int u,int v)
{

	a[++p].v=v;
	a[p].next=c[u];
//	cout<<"a["<<p<<"]="<<a[p].v<<" "<<"a["<<p<<"].next="<<a[p].next<<" c["<<u<<"]="<<c[u]<<" ";
	c[u]=p;
	k[u]++;
//	cout<<"c["<<u<<"]="<<c[u]<<" k["<<u<<"]="<<k[u]<<endl;

}
int main()
{

	cin>>n>>m;
	for (int i=1; i<=m; i++)
	{
		int u,v;
		cin>>u>>v;
//		cout<<"insert "<<u<<" "<<v<<endl;
		insert(u,v);
//		cout<<"insert "<<v<<" "<<u<<endl;
		insert(v,u);

	}

	for (int i=1; i<=n; i++)
	{
		
		cout<<k[i]<<" ";
		cout<<c[i]<<" ";
		for (int j=c[i]; j>0; j=a[j].next)
		{
			cout<<a[j].v<<" ";
		}  
		 
		cout<<endl;
		
	}
	
	return 0;

}
