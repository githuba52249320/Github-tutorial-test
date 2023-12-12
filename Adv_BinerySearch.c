#include<stdio.h>
#include<stdlib.h>

#define N 5

void print_ary(int *ary){
	int i;
	
	for(i=0;i<N;i++){
		printf("%d ", ary[i]);
	}
	printf("\n");
	
	return;
}

int search(int *ary, int value){
	
	int low = 0, high = N, mid;
	
	while(low <= high){
		mid = (low+high)/2;
		if(ary[mid] < value)
			low = mid+1;
		else if(ary[mid] > value)
			high = mid-1;
		else
			return mid;
	} 
	
	return -1;
}

int main(){
	
	int ary[N];	
	int i, j, key, tar, res;
	
	for(i=0;i<N;i++){
		scanf("%d", &key);
		for(j=i-1;j>=0 && ary[j]>key;j--){
			ary[j+1] = ary[j]; 
		}
		ary[j+1] = key;
	}
	
	print_ary(ary);
	
	printf("Import a number for searching\n");
	scanf("%d", &tar);
	res = search(ary, tar);
	if(res == -1)
		printf("Do not found\n");
	else
		printf("Found it, at the position with index %d\n", res+1);
	
	return 0;
}
