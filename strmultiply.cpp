#include<iostream>
#include<string>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;

string add(string a,string b){
	string fa="";
	stringstream st;
	int m=a.length();int n=b.length();
	if(m==n){int c=0;
		for(int i=m-1;i>=0;i--)
		{
			int aa=((int)b[i]-48)+((int)a[i]-48)+c;
			c=aa/10;
			int ld=aa%10;
			fa=((char)(ld+48))+fa;
			if(i==0 && c>0){st<<c;
			string ss=st.str();
			fa=(ss)+fa;}
		}
		}
		else{
			if(m<n){//cout<<"a is small"<<endl;
			int l=n-m;
			for(int i=0;i<l;i++){a="0"+a;}	
			fa=add(a,b);
				}
				else if(m>n){
			int l=m-n;
			for(int i=0;i<l;i++){b="0"+b;}	
		fa=add(a,b);}
			}
	return fa;
}
string multiply(string a,string b){
	string fa="",ffa="0";int c=0;
	stringstream st;
	for(int i=b.length()-1;i>=0;i--){c=0;
		for(int j=a.length()-1;j>=0;j--){
			int m=((int)b[i]-48)*((int)a[j]-48)+c;
			c=m/10;
			int ld=m%10;
			
			fa=((char)(ld+48))+fa;
			if(j==0 && c>0){st<<c;
			string ss=st.str();
			fa=(ss)+fa;}
			}
			
			if(i!=b.length()-1){
			fa=fa+"0";
			ffa=add(ffa,fa);}else
			ffa=add(ffa,(fa));
			fa="";
			
	}
	return ffa;
}
void fact(int n){
	string a="1";
	
	for(int i=1;i<=n;i++){
		stringstream ss;ss<<i;
		string aa=a,bb=ss.str();
		a=multiply(aa,bb);
		}
	cout<<a<<endl;
}
int main(){
	//int t;cin>>t;
	
		int a;cin>>a;
		fact(a);
		
//	}
	return 0;
}
