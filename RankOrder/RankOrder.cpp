#include <bits/stdc++.h>

using namespace std;

struct node
{
	
	int zhi;
	int pai;
	int hao;
	
};

bool cp1(node x,node y)
{
	
	return x.zhi < y.zhi;
	
}

bool cp2(node x,node y)
{
	
	return x.hao < y.hao;
	
}

int main()
{
	
	cout<<"Amount£º"; 
	int noAmo;
	cin>>noAmo;
	cout<<endl;
	node nos1[noAmo];
	
	for(int i = 0;i < noAmo;i++)
	{
		
		cout<<i + 1<<"£º";
		cin>>nos1[i].zhi;
		nos1[i].hao = i;
		
	}	
	
	sort(nos1,nos1 + noAmo,cp1);
	
	for(int i = 0;i < noAmo;i++)
	{
		
		nos1[i].pai = i + 1;
		
	}
	
	sort(nos1,nos1 + noAmo,cp2);
	
	for(int i = 0;i < noAmo;i++)
	{
		
		cout<<i + 1<<". "<<nos1[i].pai<<endl;
		
	}
	
	return 0;
	
}


