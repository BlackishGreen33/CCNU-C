#include<stdio.h>
#include<stdlib.h>
#define N 10
#define M 5

struct man{
	long int num;
	char name[10];
	int year;
	int month;
	int day;
}stu[N];

int main(){
	int y=2014;
	int i=0;
	for(i=0;i<N;i++){
		printf("?入??：");
		scanf("%ld", &stu[i].num);
		printf("?入名字：");
		scanf("%s", stu[i].name);
		printf("?入年月日（例：2013.1.12）：");
		scanf("%d.%d.%d", &stu[i].year, &stu[i].month, &stu[i].day);
	}
	FILE *txt;
	txt=fopen("student.dat","wb");
	if(txt==0){
		printf("1 wrong!");
		exit (-1);
	}
	for(i=0;i<N;i++){
		fwrite(&stu[i].num,sizeof(long),1,txt);
		fwrite(stu[i].name,sizeof(char),14,txt);
		fwrite(&stu[i].year,sizeof(int),1,txt);
		fwrite(&stu[i].month,sizeof(int),1,txt);
		fwrite(&stu[i].day,sizeof(int),1,txt);
	}
	fclose(txt);
	
	printf("___________\n");
	FILE *dat;
	dat = fopen("student.dat","rb");
	if(dat == 0){
		printf("2 wrong!");
		exit(-1);
	}
	for(i=0; i<M; i++){
		fread(&stu[i].num, sizeof(long), 1, dat);
		fread(stu[i].name, sizeof(char), 14, dat);
		fread(&stu[i].year, sizeof(int), 1, dat);
		fread(&stu[i].month, sizeof(int), 1, dat);
		fread(&stu[i].day, sizeof(int), 1, dat);
	}
	for(i=0;i<M;i++){
		printf("%ld ",stu[i].num);
		printf("%s ",stu[i].name);
		printf("%d\n",y-stu[i].year);
	}
	fclose(dat);
}
