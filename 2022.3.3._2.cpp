#include <iostream>//����������ʽ��������Ե���ȷ�� 
using namespace std;
int main(){
	char a[100]; 
	int n;
	cout<<"��������ʽ���ȣ�"<<endl;
	cin>>n;
	cout<<"��������ʽ��"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	} 
	char data[10];
	int top;
	if(n%2==0){
		top=-1;
		for(int i=0;i<n;i++){
			if(a[i]=='('||a[i]=='['||a[i]=='{'){
			top++;
			data[top]=a[i];	
		}
			if(a[i]==')'||a[i]==']'||a[i]=='}'){
				if(data[top]==a[i]-2||data[top]==a[i]-1)top--;
				else break;
		}
	}
	if(top!=-1)cout<<data[top];
	else cout<<"ƥ��ɹ�";
	}; 
	return 0; 
}
