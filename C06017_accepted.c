#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int cmp(const void *a, const void *b){
	char *x=(char*)a;
	char *y=(char*)b;
	return strcmp(x,y);
}

int main(){
	char c1[1000],c2[1000],a[100][100],b[100][100];
	gets(c1);
	gets(c2);
	int dem1=0,dem2=0;
	char*token=strtok(c1, " ");
	while(token!=NULL){
		strcpy(a[dem1],token);
		dem1++;
		token=strtok(NULL," ");
	}
	token=strtok(c2," ");
	while(token!=NULL){
		strcpy(b[dem2],token);
		dem2++;
		token=strtok(NULL," ");
	}
	qsort(a,dem1,sizeof(a[0]),cmp);
	for(int i=0;i<dem1;i++){
		while(strcmp(a[i],a[i+1])==0){
			i++;
	    }
		int ok=0;
		for(int j=0;j<dem2;j++){
			if(strcmp(a[i],b[j])==0){
				ok=1;
				break;
			}
		}
		if(!ok) printf("%s ",a[i]);
	}
}