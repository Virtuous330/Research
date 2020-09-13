#include <bits/stdc++.h>

using namespace std;

string letters[26] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};

string Order2Letter(int order)
{
	
	if(order < 0){
		
		order = order * -1;
		
	}
	
	if(order < 0 || order > 25){
		
		return "null";
		
	}
	
	return letters[order];
	
}

struct let
{
	
	int ind;
	char ch;
	
};

let Text2Order(string letter)
{
	
	let let1;
	
//	ch=(ch>='A'&&ch<='Z')?(ch+32):ch;
	
	if(letter.length() != 1){
		
		return let1;
		
	}
	
	char ch = letter[0];
	
	bool big = false;
	if(ch >= 'A' && ch <= 'Z'){
		
		big = true;
		cout<<"CH1:"<<ch<<" ";
		ch = ch + 32;
		cout<<"CH2:"<<ch<<endl;
		
	}
	
	for(int i = 0;i < sizeof(letters);i++){
		
		if(letters[i][0] == ch){
			
			if(big){
				
				ch = ch - 32;
				
			}
			
			let1.ch = ch;
			let1.ind = i;
			
			return let1;
			
		}
		
	}
	
	return let1;
	
}

string C2M(string m,string c)
{
	
	string k = "";
	
	int ml = m.length();
	int cl = c.length();
	
	cout<<"Len ML:"<<ml<<" Len CL:"<<cl<<endl;
	
	if(ml != cl){ return "null"; }
	
	for(int i = 0;i < ml;i++)
	{
		
//		const char *mac = m[i];
//		const char *cbc = c[i];
		
		string ma = m.substr(i,1);
		string cb = c.substr(i,1);
		
		cout<<"Ma:"<<ma<<" Cb:"<<cb<<endl;
		
		let letm = Text2Order(ma);
		let letc = Text2Order(cb);
		
		int mo = letm.ind;
		int co = letc.ind;
		
		int len = co - mo;
		
		cout<<"Mo:"<<mo<<" Co:"<<co<<" Len:"<<len<<endl;
		
		string letter = Order2Letter(len);	
		
		k+=letter;
		cout<<"Now k = "<<k<<endl;
		
	}
	
	return k;
	
}

int main()
{
	
	string m;
	string c;
	cin>>m>>c;
	
	cout<<"k="<<C2M(m,c);
	
//	int order;
//	cin>>order;
//	cout<<Order2Letter(order);
//	
//	cout<<endl<<"=========="<<endl;
//	
//	string letter;
//	cin>>letter;
//	let let1 = Text2Order(letter);
//	cout<<let1.ch<<" - "<<let1.ind;
	
	return 0;
	
}


