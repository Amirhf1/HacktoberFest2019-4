#include<stdio.h>

int sum(int, int);

int main(){
	printf("sum: %d ", sum(50,90));
	return 0;
}

int sum(int a, int b){
	return a+b;
}
