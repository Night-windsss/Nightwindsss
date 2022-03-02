#include <iostream>//��ӡ���� 
#include <string.h>
const int Queuesize=6; 
using namespace std;
class Cirqueue{
public:
	Cirqueue();
	void Enqueue(int x);
	int top();
	void change();
	int f();
private:
	int front,rear;
	int data[Queuesize];
}; 
Cirqueue::Cirqueue(){
	front=rear=0;
}
void Cirqueue::Enqueue(int x){
	rear=(rear+1)%Queuesize;
	data[rear]=x;
}
int Cirqueue::top(){
	int t;
	t=front;
	t=(t+1)%Queuesize;
	return data[t]; 
}
void Cirqueue::change(){
	front=(front+1)%Queuesize;
	rear=(rear+1)%Queuesize;
}
void s(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
}
int Cirqueue::f(){
	return front;
}
int main(){
	int b[6];
	int x,e;
	e=0;
	Cirqueue str;
	cout<<"������6����������ȼ�"<<endl;
	for(int i=0;i<6;i++){
		cin>>b[i];
		str.Enqueue(b[i]);	
	} 
	s(b,6);
	cout<<"����������ע�����λ��Ϊ��"<<endl;
	cin>>x; 
 	int h=5;
	int z1=-1;
	while(z1!=x){
		if(str.top()!=b[h]){
		str.change();
		}else{
		z1=str.f();
		str.change() ;
		h--;
		e++;
		}	
	}
	cout<<"�������ʱ��Ϊ��"<<e;
	return 0;
}
