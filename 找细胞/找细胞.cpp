#include <bits/stdc++.h>

using namespace std;

int n,m,next[][2]={{1,0},{-1,0},{0,1},{0,-1}};

char a[1000][1000];

struct node{
    int r,c;
}q[1000000];

void bfs(int x,int y){
	
//	node dian;
//	dian.r
	
    int i,j,h,t,r,c,nr,nc,k;
    h=t=1;
    q[t].r=x,q[t].c=y,t++;
    while(h<t){
        r=q[h].r,c=q[h].c,a[r][c]='0';
        for(k=0;k<4;k++){
            nr=r+next[k][0],nc=c+next[k][1];
            if(0<=nr&&nr<n&&0<=nc&&nc<m&&a[nr][nc]!='0'){
                q[t].r=nr,q[t].c=nc,t++;
            }
        }
        h++;
    }
}
int main(){
    int i,j,cnt=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%s",a[i]);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(a[i][j]!='0'){
                cnt++;
                bfs(i,j);
            }
    printf("%d",cnt);
    return 0;
}



























//#include <bits/stdc++.h>
//using namespace std;
//
//string jz[100];
//bool jzb[100][100];
//
//struct zb{
//	
//	int x,y;
//	
//};
//
//bool isCell(char a)
//{
//	
//	return a > '0' && a < '10';
//	
//}
//
//int x,y;
//
//queue <zb> q;
//int fa[100];
//
//int bfs()
//{
//	
//	int x,amount = 0;
//	zb zbss;
//	
//	for(int i = 0;i < y;i++){
//		
//		string str = jz[i];
//		for(int ii = 0;ii < str.length();ii++){
//			
//			if(!isCell(str[ii])){ continue; }
//			
//			zb zbs;
//			zbs.x = ii;
//			zbs.y = i;
//			q.push(zbs);
//			int now = 0;
//		
//		while(!q.empty())
//		{
//		
//			int thrAmo;
//			zbss = q.front();
//			x = zbs.x;
//			q.pop();
//		
//			if(jzb[i][x]){ continue; }
//			
////			if(str[i]){
//				
//				if(now == 4){
//					
//					amount++;
//					while(!q.empty()){
//						
//						q.pop();
//						
//					}
//					continue;
//					
//				}
//				
//				//int thrAmo;
//				
//				//Up
//				if(i != 0){
//					
//					zb zb1;
//					zb1.x = i;
//					zb1.y = x - 1;
//					q.push(zb1);
//					fa[i] = x;
//					jzb[x][y] = 1;
//					
//				}else{
//					
//					now++;
//					
//				}
//				
//				//Down
//				if(i < y){
//					
//					zb zb1;
//					zb1.x = i;
//					zb1.y = x + 1;
//					q.push(zb1);
//					fa[i] = x;
//					jzb[x][y] = 1;
//					
//				}else{
//					
//					now++;
//					
//				}
//			
//				//Left
//				if(i > 0){
//					
//					zb zb1;
//					zb1.x = i - 1;
//					zb1.y = x;
//					q.push(zb1);
//					fa[i] = x;
//					jzb[x][y] = 1;
//					
//				}else{
//					
//					now++;
//					
//				}
//				
//				//Right
//				if(i < x){
//					
//					zb zb1;
//					zb1.x = i + 1;
//					zb1.y = x;
//					q.push(zb1);
//					fa[i] = x;
//					jzb[x][y] = 1;
//					
//				}else{
//					
//					now++;
//					
//				}
//				
////			}
//		
//		}
//			
//		}
////		if(!str.find("1")){
////			
////			continue;
////			
////		}
//		
//	}
//	
////	
////	q.push(0);
////	int x,amount = 0;
////	
////	while(!q.empty())
////	{
////		
////		x = q.front();
////		q.pop();
////		
////		String str = jz[x];
////		for(int i = 0;i < y;i++)
////		{
////			
////			if(jzb[x][i]){ continue; }
////			
////			if(isCell(str[i])){
////				
////				//Up
////				if(x != 0){
////					
////					
////					
////				}
////				
////			}
////			
////		}
////		
////	}
////	
////	
//	return amount;
//	
//}
//
//int main()
//{
//	
//	cout<<"X - Y:";
//	cin>>x>>y;
//	
//	while((y < 1 || y > 100) || (x < 3 || x > 8)){
//		
//		cout<<"Error! Retry:";
//		cin>>x>>y;
//		
//	}
//	
//	for(int i = 0;i < y;i++)
//	{
//		
//		cout<<"Line."<<i + 1<<":";
//		string str;
//		cin>>str;
//		
//		while(str.length() != x){
//			
//			cout<<"Input Error! Retry:";
//			cin>>str;
//			
//		}
//		
////		for(int j = 2;j < 9;j++){
////			
////			if(str.find(j)){
////				
////				CString csa;
////				csa.Format("%d",j);
////				String num(csa.GetBuffer());
////				csa.ReleaseBuffer();
//////				char *intStr = itoa(j);
//////				string num = to_string(j);
////				str = str.replace(str.find(num) - 1,1,"1");
////				
////			}
////			
////		}
//		
//		jz[i] = str;
////		for(int j = 0;j < str.length();j++){
////			
////			
////			
////		}
////		
//	}
//	
//	cout<<"======================="<<endl;
//	
//	cout<<"Number:"<<bfs();
//	
//	return 0;
//	
//}
//

