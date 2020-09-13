#include <bits/stdc++.h>

using namespace std;

struct stu
{
	
	string na;
	int soc;
	
};

bool comp1(stu x,stu y)
{
	
	if(x.soc == y.soc){
		
		return x.na < y.na;
		
	}
	
	return x.soc > y.soc;
	
}

int main()
{
	
	int amo;
	cout<<"Amount:";
	cin>>amo;
	
	stu stus[amo];
	
	for(int i = 0;i < amo;i++)
	{
		
		cout<<"NO."<<i + 1<<":";
		cin>>stus[i].na>>stus[i].soc;
		
	}
	
	sort(stus,stus + amo,comp1);
	
	cout<<"===================="<<endl;
	
	for(int i = 0;i < amo;i++)
	{
		
		cout<<"NO."<<i + 1<<" "<<stus[i].na<<" "<<stus[i].soc<<endl;
		
	}
	
	return 0;
	
}


