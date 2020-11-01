# DFS & BFS

```cpp
#include<bits/stdc++.h>

using namespace std;

#define maxNumber 100

struct node{
	
	int next,to,d;
	
};

node map1[maxNumber];
int fa[maxNumber],head[maxNumber],vi[maxNumber],n,m,u,g,d,mapAmount;

void add(int from,int to,int d)
{
	
	map1[++mapAmount].next = head[from];
	map1[mapAmount].to = to;
	map1[mapAmount].d = d;
	head[from] = mapAmount;
	
}

queue <int> q;

void bfs(int s)
{
	
	cout<<s<<" ";
	
    int i;
    for(int i = head[s];i != 0;i = map1[i].next)
    {
    	
    	q.push(map1[i].to);
    	
    }
    	
    if(!q.empty())
    {
 
    	 i = q.front();
         q.pop();
         bfs(i);
         
    }
	
}

void dfs(int s)
{
	cout<<s<<" ";
	
	if(vi[s] != 1)
	{
		
		for(int i = head[s];i!=0;i = map1[i].next)
        {
        	
           vi[s]=1;
           dfs(map1[i].to);
           
        }
        
	}
	
}

int main()
{
	
	int n;
	cin>>n;
	
	int fr;
	
	for(int i = 1;i <= n;++i)
	{
		
		scanf("%d %d %d",&u,&g,&d);
		add(u,g,d);
		
		if(i == 1){
			
			fr = u;	
			
		}
		
	}
	
	bool select1 = false;
	
	while(!select1)
	{
		
		cout<<"1. BFS"<<endl<<"2. DFS"<<endl<<"Input:";
		int mode1;
		cin>>mode1;
	
		switch(mode1){
		
			case 1:
				bfs(fr);
				select1 = true;
				break;
			case 2:
				dfs(fr);
				select1 = true;
				break;
			default:
				cout<<"ErrorMode! Retry!"<<endl;
				break;
		
		}	
		
	}
	
}
```

