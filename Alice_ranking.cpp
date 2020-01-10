#include<iostream>
#include<string>
using namespace std;
class list{
		int n;
		int marks[50];
		int amark, result;
		public:
		list(){
			result=0;
		}
		void getdat(){
			cout<<"enter the number\n";
			cin>>n;
			cout<<"enter the marks\n";
			for(int i=0;i<n;i++){
				cin>>marks[i];				
			}
			cout<<"enter the marks of alice:";
			cin>>amark;
		}
		int rank(){
			for(int i=0; i<n; i++){
				if(i<n-1)
					if(marks[i]==marks[i+1])
						continue;
				if(amark>=marks[i]){
					return result;
				}
				else if(amark<marks[i])
				{
					++result;
				}
			}
		}
};

int main(){
	list l;
	int k;
	l.getdat();
	k=l.rank();
	cout<<"\nthe rank is:"<<k+1;
	return 0;
}
