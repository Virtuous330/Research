#include <bits/stdc++.h>

using namespace std;

struct stu
{
	
	string na;
	int yu,shu,tot;

};

int main()
{
	
	cout<<"学生数量："; 
	int stAmo;
	cin>>stAmo;
	cout<<endl;
	stu stus[stAmo];
	
	for(int i = 0;i < stAmo;i++)
	{
		
		cout<<i + 1<<"：";
		cin>>stus[i].na>>stus[i].yu>>stus[i].shu;
//		cout<<endl;
		stus[i].tot = stus[i].yu + stus[i].shu;
		
//		cout<<i + 1<<". "<<stus[i].na<<"'s total:"<<stus[i].tot<<endl;	
		
	}
	
	for(int i = stAmo - 1;i > 0;i--)
	{
		
		for(int j = 0;j < i;j++)
		{
			
			int thisStudentScore = stus[j].tot;
			int nextStudentScore = stus[j + 1].tot;
			
			if(thisStudentScore < nextStudentScore)
			{
				
				swap(stus[j],stus[j+1]);
				
			}
			
		}
		
	}
	
	cout<<"========================="<<endl;
	
	for(int i = 0;i < stAmo;i++)
	{
		
		cout<<i + 1<<". "<<stus[i].na<<" "<<stus[i].yu<<" "<<stus[i].shu<<" "<<stus[i].tot<<endl;
		
	}
	
	return 0;
	
}
