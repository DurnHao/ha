 
#include<bits/stdc++.h>
using namespace std;
//创建的一个结构体ava
struct ava{
	int data;
	struct ava *next;
};  
//声明函数：
struct ava* merge(struct ava*,struct ava*,struct ava*);
struct ava* add1(struct ava*);
void putout(struct ava*);
//创建第一个有数据的节点 
int a,c;
int main(){
	//声明两个节点
	struct ava *head=NULL;
	struct ava *fir=NULL;
	struct ava *seco=NULL;
	struct ava *he=NULL ;   //合并后的表头 
	//确定链表值的个数 
	cout<<"ava节点有：";
	cin>>a; 
	cout<<"ave节点有：";
	cin>>c; 
	//创建节点
	fir = add1(head);
	seco= add1(head);
	he = merge(fir,seco,he);
	putout(he);
}
//增加ava链表的节点 
struct ava* add1(struct ava *head){     //?

	struct ava *befor,*end;
	befor=end = new struct ava;
	cout<<"请输入第一个结构体的data：";
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


struct ava* merge(struct ava* fir,struct ava* seco,struct ava* he) {//合并 
	struct ava *point1=fir;
	struct ava *point2=seco;
	struct ava *end;
	//如果point1>piont2就将1插入2的前面
	//如果相等直接结束内部循环
	//如果小于就跳到下一个piont2 
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











////增加ave链表的节点  
//void add2(struct ave r){
//
//	struct ave *befor,*end;
//	befor=end = new struct ave;
//	cout<<"请输入第一个结构体的data：";
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

//将两个链表递增合并,将他们合并到ave表 



//
//			
//	
	


