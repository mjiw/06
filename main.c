#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int combination(int a,int b,int c){
	int sum=a/(b*c);
	return sum;
}

int factorial(int n){
	int res=1;
	int i;
	for(i=1;i<=n;i++){
		res=res*i;
	}
	return res;
}


int get_integer(){
	int n;
	printf("���ڸ� �Է��ϼ���:");
	scanf("%d",&n);
	return n;	
}


int main(int argc, char *argv[]) {
	int n;
	int r;
	int a;
	int b;
	int c;
	int sum; 
	n=get_integer();
	printf("ù��° ������ ���� ���� �Է��ϼ���\n");
	r=get_integer();
	a=factorial(n);
	b=factorial(n-r);
	c=factorial(r);
	sum=combination(a,b,c);
	printf("%d",sum);
	return 0;
}
