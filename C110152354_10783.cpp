#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(){
	int T;
	int a,b;
	int sum;
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
		sum = 0;
		scanf("%d",&a);
		scanf("%d",&b);
		for( int j=a;j<=b;j++){
			if (j % 2 == 0){
				continue;
			}
			sum =sum+j;
		}
		printf("Case %d: %d\n",i,sum);
	}	
	return 0;
}
