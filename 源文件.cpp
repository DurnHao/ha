 
#include<bits/stdc++.h>
using namespace std;
//������һ���ṹ��ava
struct ava{
	int data;
	struct ava *next;
};  
//����������
struct ava* merge(struct ava*,struct ava*,struct ava*);
struct ava* add1(struct ava*);
void putout(struct ava*);
//������һ�������ݵĽڵ� 
int a,c;
int main(){
	//���������ڵ�
	struct ava *head=NULL;
	struct ava *fir=NULL;
	struct ava *seco=NULL;
	struct ava *he=NULL ;   //�ϲ���ı�ͷ 
	//ȷ������ֵ�ĸ��� 
	cout<<"ava�ڵ��У�";
	cin>>a; 
	cout<<"ave�ڵ��У�";
	cin>>c; 
	//�����ڵ�
	fir = add1(head);
	seco= add1(head);
	he = merge(fir,seco,he);
	putout(he);
}
//����ava����Ľڵ� 
struct ava* add1(struct ava *head){     //?

	struct ava *befor,*end;
	befor=end = new struct ava;
	cout<<"�������һ���ṹ���data��";
	cin>>befor->data;
	befor->next = NULL;
	for(int i =0;i<a;i++){
		if(head==NULL){
			head=befor;
		}else{
		end = befor;
		befor= new struct ava;
		cin>>befor->data;
		befor->next = NULL;
		end->next = befor;
		}
	}
	return head;	
}


struct ava* merge(struct ava* fir,struct ava* seco,struct ava* he) {//�ϲ� 
	struct ava *point1=fir;
	struct ava *point2=seco;
	struct ava *end;
	//���point1>piont2�ͽ�1����2��ǰ��
	//������ֱ�ӽ����ڲ�ѭ��
	//���С�ھ�������һ��piont2 
	int a = 0;

	while(point1->data!=NULL){
		while(point1->data<point2->data){
		point2=point2->next;
		a++;
		}
		if(a==1){
			he = point2;
		}else{
			he = point1;
		}
		if(a==1){
			point1->next = point2; 	
		}else if(point2->next!=NULL){
			point2->next=point1;
		}else{
			end = point2;
			point2->next=point1;
			point1 = end->next;
		}
		point1=point1->next ; 

	}
	return he;

}
void putout(struct ava* he){
	cout<<he->data; 
	he = he->next;
}


//
//
//		while(point1->data!=NULL){
//			while(point1->data>point2->data){
//			end = point2;
//			point2=point2->next;
//			}
//		if(point1->data<point2->data){
//			end->next = point1;
//			point1->next = point2;
//		}	
//	point1=point1->next;
//	}
//











////����ave����Ľڵ�  
//void add2(struct ave r){
//
//	struct ave *befor,*end;
//	befor=end = new struct ave;
//	cout<<"�������һ���ṹ���data��";
//	cin>>befor->data;
//	befor->next = NULL;
//	for(int i =0;i<c;i++){
//		if(head==NULL){
//			head=befor;
//		}else{
//		end = befor;
//		befor= new struct ave;
//		cin>>befor->data;
//		befor->next = NULL;
//		end->next = befor;
//		}
//	}
//} 
//
//void merge(){
//	
//}

//��������������ϲ�,�����Ǻϲ���ave�� 



//
//			
//	
	


