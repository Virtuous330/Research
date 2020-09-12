
#include<cstring>
#include<iostream>
using namespace std;

int main()
{
    
    int a;
    cin>>a;
    
    if(a < 0){
    	
    	cout<<"Input error!";
    	return -1;
    	
	}
	
	int ints[a];
	
	int max;
	
	for(int i = 0;i < a;i++){
		
		int c;
		cout<<"Number of "<<i+1<<" is : ";
		cin>>c;
		cout<<endl;
		ints[i] = c;
		
		if(c > max){
			
			max = c;
			
		}
		
		
	}
    
    //========================
    
    int nums[max];
    memset(nums,0,max);
    
    for(int i = 0;i <= max;i++){
    	
    	int amount = 0;
//    	bool has = false;
    	for(int j = 0;j < a;j++){
    		
    		int number = ints[j];
//    		cout<<"I: "<<i<<" Number: "<<number<<endl;
    		if(number == i){
    			
//    			cout<<"11111111111"<<endl;
//    			if(!has){
    				
//    				has = true;
//    				cout<<"22222222222222"<<endl;
    				
//				}
    			
    			amount++;
    			
			}
    		
		}
		
//		if(has){
			
			cout<<endl<<"Number of "<<i<<"'s amount is "<<amount<<endl;
			
//		}
    	
	}
    
//    for(int i = 0;i < a;i++){
//    	
//    	int now = ints[i];
//    	int number = nums[now];
//    	nums[now] = number + 1;
//    	cout<<">>> "<<now<<" <<< number: "<<number<<" > "<<nums[now]<<endl;
//    	
//	}
//	
//	
//    
//    for(int i = 0;i < a;i++){
//    	
//    	int number = ints[i];
//    	cout<<"Number "<<number<<" appears amount is "<<nums[number]<<endl;
//    	
//	}
    
    return 0;
}




 
