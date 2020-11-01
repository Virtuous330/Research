# Floyed

```cpp
#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1001;

int dis[MAXN][MAXN],num,p1,p2,q;

void Floyd()
{
	
	for(int k = 1;k <= num;++k)
	{
		
		for(int i = 1;i <= num;++i)
		{
			
			for(int j = 1;j <= num;++j)
			{
				
				if(dis[i][j] > dis[i][k] + dis[k][j])
				{
					
					dis[i][j] = dis[i][k] + dis[k][j];
					
				}
				
			}
			
		}
		
	}
	
}

int main()
{
	
	cin>>num;
	
	memset(dis,0x7fffffff,sizeof(dis));
	
	for(int i = 1;i <= num;++i)
	{
		
		scanf("%d %d %d",&p1,&p2,&q);
		dis[p1][p2] = q;
		dis[p2][p1] = q;
		
	}
	
	Floyd();
	
	for(int i = 1;i <= num;++i)
	{
		
		for(int j = 1;j <= num;++j)
			if(i != j && dis[i][j] != 0x7fffffff)
				cout<<i<<"-"<<j<<":"<<dis[i][j]<<endl;
		
	}
	
	return 0;
	
}

```

