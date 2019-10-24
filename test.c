#include<stdio.h>
#include<stdlib.h>

#define NLIN 3
#define NCOL 5

int main(){
	
	int matriz [NLIN][NCOL];
	int i,j =0;
	
	int a,b;
	
	char c;
	
	FILE *m;
	
	m = fopen("m.txt", "r");
	
	do{
		c=getc(m);
		if(c!='\n'){
			matriz[i][j]=c;
			j++;
			if(j==NCOL){
				j=0;
				i++;
			}
		}
		
	}while(c != EOF);
	fclose(m);
	
	for(a=0; a<NLIN; a++){
		for(b=0; b<NCOL;b++){
			printf("%c", matriz[a][b]);
		}
		printf("\n");
	}
	
	return 0;
}
