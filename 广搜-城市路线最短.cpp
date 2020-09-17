#include <bits/stdc++.h>
using namespace std;

int ju[9][9] = {
		
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
//	cout<<"A[d]="<<a[d]<<endl;
	cout<<char(a[d] + 64);
//	cout<<"==="<<endl;
	while(b[d])
	{
//		cout<<"b[d]="<<b[d]<<endl;
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
	do
	{
		
		head++;
		for(i = 1;i <= 8;i++){
			
//			cout<<i<<endl;
			cout<<endl<<"================"<<endl<<"h: "<<a[head] + 1<<" l: "<<i + 1<<" ju:"<<ju[a[head]][i]<<endl<<"================"<<endl;
			
			if((ju[a[head]][i] == 0) && (s[i] == 0)){
				
//				cout<<"a[head]"<<a[head];
				cout<<"tail="<<tail;
				tail++;
				a[tail]=i;
				b[tail]=head;
				s[i]=1;
				if(i == 8){
					
					out(tail);
					head = tail;
					
//					for(int ii = 0;ii < sizeof(a);ii++)
//					{
//						
//						cout<<"a["<<ii<<"]="<<a[ii]<<",";
//						
//					}
//	
//					cout<<endl<<endl;
//	
//					for(int ii = 0;ii < sizeof(b);ii++)
//					{
//						
//						cout<<"b["<<ii<<"]="<<b[ii]<<",";
//						
//					}
//					
//					cout<<endl<<endl;
//					
//					for(int ii = 0;ii < sizeof(s);ii++)
//					{
//						
//						cout<<"s["<<ii<<"]="<<s[ii]<<",";
//						
//					}
					
					break;
					
				}
				
			}
			
		}
		
	}while(head < tail);
	
} 

int main()
{
	
	memset(s,false,sizeof(s));
	doit();
	
	return 0;
	
} 
