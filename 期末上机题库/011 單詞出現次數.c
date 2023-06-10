#include<stdio.h>
#include<string.h>
int i=0;
char *judge(char str[]);
int main(){
	int key=0, num[100]={0}, sum=1;
	char strstr[1000], *substr, newstr[100][10];
	gets(strstr);
	substr = judge(strstr);
	strcpy(newstr[key],substr);
	num[key]++;
	key++;
	while(1){
		substr=judge(strstr);
		for(int j=0; j<key; j++){
			if(strcmp(substr, newstr[j])==0){
				num[j]++;
				sum=0;
				break;
			}
		}
		if(sum){
			strcpy(newstr[key], substr);
			num[key]++;
			key++;
		}
		if(strstr[i-1]=='\0') break;
	}
	for(i=1;i<key;i++){
		for(int j=0;j<key-i;j++){
			if(stricmp(newstr[j],newstr[j+1])>0){
				char t[10];
				strcpy(t,newstr[j]);
				strcpy(newstr[j],newstr[j+1]);
				strcpy(newstr[j+1],t);
				int k;
				k=num[j];
				num[j]=num[j+1];
				num[j+1]=k;
			}
		}
	}
	for(i=0;i<key;i++)
		printf("%s   %d\n",newstr[i],num[i]);
}
char *judge(char str[]){
	char sub[10];
	int j=0;
	for(;str[i]!=' '&&str[i]!='\0';i++){
		sub[j]=str[i];
		j++;
	}
	i++;
	sub[j]='\0';
	return sub;
}
