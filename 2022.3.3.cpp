#include <iostream>
using namespace std;
struct Node{
	int a;
	int b;
	double c;
	Node *next;
};
int numble(int a,int b){
	if(a<b){
		int temp=b;
		b=a;
		a=temp;
	}
	while(a%b){
		int t=b;
		b=a%b;
		a=t;
	}
	return b;
}
int main(){
	Node a[100];
	int n;
	cout<<"请输入法雷序列的级数："<<endl;
	cin>>n;
	int q=0;
	int m=1;
	for(int i=n;i>0;i--){
		for(int j=1;j<=i;j++){
			a[q].a=j;
			a[q].b=i;
			a[q].c=(double)j/i;
			q++;
		}
	}
	for(int i=0;i<q-1;i++){
		for(int j=i+1;j<q;j++){
			if(a[i].c>a[j].c){
				Node temp=a[j];
				a[j]=a[i];
				a[i]=temp;				
			}
		}
	}
	cout<<"0/1"<<'\t';
	int x=1;
	for(int i=0;i<q;i++){
	if(numble(a[i].a,a[i].b)==1){
	cout<<a[i].a<<"/"<<a[i].b<<'\t'; 
	x++;
	}
	if(x%10==0)cout<<endl;	
	}	
	return 0;
}
