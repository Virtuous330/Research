#include <bits/stdc++.h>

using namespace std;

int dx[4] = {-1,0,1,0},
	dy[4] = {0,1,0,-1};

struct dian
{
	
	int x,y;
	
};

queue <dian> d;
int bz[100][100],num = 0,n,m;

void bfs(int p,int q)
{
	
	int x,y,i;
	
	int h[1000][3];
	
	num++;
	bz[p][q] = 0;
	dian d1;
	d1.x = p;
	d1.y = q;
	
	d.push(d1);
	
	while(!d.empty())
	{
		
		d1 = d.front();
		d.pop();
		
		for(i = 0;i <= 3;i++)
		{
			
			d1.x = d1.x + dx[i];
			d1.y = d1.y + dy[i];
			
			if(d1.x >= 0 && d1.x < m && d1.y >= 0 && d1.y < n && bz[d1.x][d1.y])
			{
				
				d.push(d1);
				bz[d1.x][d1.y] = 0;
				
			}
			
		}	
		
	}
	
//	cout<<"Tot:"<<num;
	
}

int main()
{
	
	cout<<"X - Y:";
	cin>>m>>n;
	
	while((n < 1 || n > 100) || (m < 3 || m > 10))
	{
		
		cout<<"Error! Retry:";
		cin>>m>>n;
		
	}
	
//	dian start;
//	bool startBo = false;
	
	for(int i = 0;i < n;i++)
	{
		
		cout<<"Line."<<i + 1<<":";
		string str;
		cin>>str;
		
		while(str.length() != m)
		{
			
			cout<<"Input Error! Retry:";
			cin>>str;
			
		}
		
		for(int j = 0;j < m;j++)
		{
			
			if(str[j] == '0')
			{
				
				bz[i][j] = 0;
				
			}else{
				
//				if(!startBo){
//					
//					start.x = i;
//					start.y = j;
//					
//				}
				bz[i][j] = 1;	
				
			}
			
		}
		
	}
	
	cout<<"======================="<<endl;
	
	time_t t;
    time(&t);
    int start = t;
	
	for(int i = 0;i < n;i++)
	{
		
		for(int j = 0;j < m;j++)
		{
			
			if(bz[j][i] != 0){
				
				bfs(j,i);
				
			}
			
		}
		
	}
	
	time(&t);
    int end = t;
	
	cout<<"总计数量:"<<num<<" 耗时: "<<end - start<<"ms";
	
	return 0;
	
}
