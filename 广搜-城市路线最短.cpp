#include <bits/stdc++.h>
using namespace std;

int cities[9][9] = {
		
							{0,0,0,0,0,0,0,0,0},
							{0,1,0,0,0,1,0,1,1},
							{0,0,1,1,1,1,0,1,1},
							{0,0,1,1,0,0,1,1,1},
							{0,0,1,0,1,1,1,0,1},
							{0,1,1,0,1,1,1,0,0},
							{0,0,0,1,1,1,1,1,0},
							{0,1,1,1,0,0,1,1,0},
							{0,1,1,1,1,0,0,0,1}
							
						};

int a[101],b[101];
bool s[9];

int out(int d)
{
	
	cout<<char(a[d] + 64);
	while(b[d])
	{
		
		d = b[d];
		cout<<"--"<<char(a[d] + 64);
		
	}
	
	cout<<endl;
	
}

void doit()
{
	
	int head,tail,i;
	head = 0;tail = 1;
	a[1]=1;
	b[1]=0;
	s[1]=1;
	
} 

int main()
{
	
	
	
	
	return 0;
	
} 


