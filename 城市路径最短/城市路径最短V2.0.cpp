#include <bits/stdc++.h>

using namespace std;

int city[8][8] = {
		
							{1,0,0,0,1,0,1,1},
							{0,1,1,1,1,0,1,1},
							{0,1,1,0,0,1,1,1},
							{0,1,0,1,1,1,0,1},
							{1,1,0,1,1,1,0,0},
							{0,0,1,1,1,1,1,0},
							{1,1,1,0,0,1,1,0},
							{1,1,1,1,0,0,0,1}
							
						};

queue <int> q;
int sq[100],fa[10];

void searchCity()
{
	
	q.push(0);
	sq[0] = 1;
	int x;
	
	while(!q.empty())
	{
		
		x = q.front();
		q.pop();
		
		for(int i = 0;i < 8;i++)
		{
			
			if(city[x][i] == 0 && sq[i] != 1){
				
				fa[i] = x + 1;
//				cout<<"i="<<i<<" x="<<x<<endl;
				
				if(i == 7){
					
					return;
					
				}
				
				sq[i] = 1;
				q.push(i);
				
			}
			
		}
		
	}
	
	
}

int main()
{
	
	memset(sq,0,sizeof(sq));
	
	searchCity();
//	
//	while(!q.empty())
//	{
//		
//		cout<<q.front()<<" ";
//		q.pop();
//		
//	}
	
	cout<<endl;
	
	for(int i = 8;i != 0;i = fa[i - 1]){
		
		cout<<i<<"->"; 
		
	}
	
	
	
	return 0;
	
}

 
