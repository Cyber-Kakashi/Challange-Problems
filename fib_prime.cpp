#include<iostream>
#include<stdio.h>
#include<vector>
#include<sstream>
#include<string>
using namespace std;

class fibonacci {
	int f1,f2,fnext;
	public:
	fibonacci(){
		f1=0;
		f2=0;
		fnext=1;
	}
		void FSeries(){
		 	f1=f2;
		 	f2=fnext;
		 	cout<<fnext<<" ";
		 	fnext=f1+f2;
		 }
};

class prime {
	int p,count;
	public:
	prime(){
		p=2;
		count=0;
	}
		void PSeries(){
			repeat:
			for(int i=1; i<=p; i++){
				if(p%i==0){
					count++;
					if(count>2){
						count=0;
						p++;
						goto repeat;
					}
				}
			}
			if(count==2){
				cout<<p<<" ";
			}			
		}	
};

int main(){
	prime e;
	fibonacci o;
	int i,k,t;
	cout<<"Enter the number of elements to be displayed:";
	cin>>k;
	if(k%2!=0)
		t=(k+1)/2;
	else
		t=k/2;
	for(i=0;i<t;i++){
		o.FSeries();
		if((i*2)-1!=k)
			e.PSeries();
	}
	return 0;
}
















