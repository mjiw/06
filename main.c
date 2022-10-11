#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b){
	return a+b;
}

int square(int n){
	return n*n;
}

int get_max(int x, int y){
	if(x<y){
		return y;
	}
	else if(x>y){
		return x;
	}
}

int main(int argc, char *argv[]) {
	int res_sum,res_square,res_get_max;
	
	res_sum=sumTwo(1,2);
	res_square=square(2);
	res_get_max=get_max(1,2);
	
	printf("%d %d %d",res_sum,res_square,res_get_max);
	return 0;
}
