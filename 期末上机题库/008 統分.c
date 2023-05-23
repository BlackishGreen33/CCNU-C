#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN sizeof(struct student)

struct student{
	char Name[10];
	float Maths;
	float English;
	float C;
	float Total;
	struct student*next;
};

int n;

struct student*creat(){
	struct student*head, *p1, *p2;
	n=0;
	p1=p2=(struct student*)malloc(LEN);
	printf("student1:\nName\t");
	scanf("%s",p1->Name);
	printf("Maths\t");
	scanf("%f",&p1->Maths);
	printf("English\t");
	scanf("%f",&p1->English);
	printf(" C\t");
	scanf("%f",&p1->C);
	p1->Total=(p1->Maths+p1->English+p1->C);
	head=NULL;
	while(p1->Total!=0){
		n=n+1;
		if(n==1) head=p1;
		else{
			p2->next=p1;
			p2=p1;
			p1=(struct student*)malloc(LEN);
			printf("student%d:\nName\t",n);
			scanf("%s",p1->Name);
			printf("Maths\t");
			scanf("%f",&p1->Maths);
			printf("English\t");
			scanf("%f",&p1->English);
			printf(" C\t");
			scanf("%f",&p1->C);
			p1->Total=p1->Maths+p1->English+p1->C;
		}
	}
	p2->next=NULL;
	return(head);
}

void print(struct student*head){
	struct student*pt;
	pt=head;
	if(head!=NULL)
		do{
		printf("%-8s%8.2f%8.2f%8.2f%8.2f\n",pt->Name,pt->Maths,pt->English,pt->C,pt->Total);
		pt=pt->next;
		}while(pt!=NULL);
}

struct student* descending_order(struct student*p){
	char name[10];
	float exchange;
	struct student*m, *n, *pi, *pj;
	n=m=pi=p;
	pi=pi->next;
	if(p!=NULL)
		do{
			do{
				if(m->Total<pi->Total) m=pi;
				pi=pi->next;
			}while(pi!=NULL);
			strcpy(name,n->Name); strcpy(n->Name,m->Name); strcpy(m->Name,name);
			exchange=n->Maths; n->Maths=m->Maths; m->Maths=exchange;
			exchange=n->English; n->English=m->English; m->English=exchange;
			exchange=n->C; n->C=m->C; m->C=exchange;
			exchange=n->Total; n->Total=m->Total; m->Total=exchange;
			m=pi=n=n->next;
			pi=pi->next;
		}while(pi!=NULL);
	return(p);
}

int main(){
	struct student*p, *pin;
	printf("?�̦�?�JName�BMaths�BEnglish�BC���ȡA�H0�B0�B0�B0?�J?���G\n");
	p=creat();
	printf("\n ���\n    Name   Maths English       C  Total\n");
	print(p);
	pin=descending_order(p);
	printf("����?�X?�G\n");
	print(pin);
}
