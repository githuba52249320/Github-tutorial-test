#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 3

void hanoi(int n, char from, char mid, char to, int *ct){
	
	if(n == 0){
		return;
	}
	
	hanoi(n-1, from, to, mid, ct);
	
	printf("Put plate %d from %c to %c\n", n, from, to);
	ct[n-1]++; 
	
	hanoi(n-1, mid, from, to, ct);
	
	return;
}

int main(){
	int ct[N] = {0};
	int i;
	//using in setting the dynamic memory allocation.
	//memset(ct, 0, sizeof(int)*N);  
	
	hanoi(N, 'A', 'B', 'C', ct);
	
	for(i=N;i>0;i--)
		printf("plate %d: %d\n", i, ct[i-1]);
	
	return 0;
}
