/*
Given an integer array, find the largest consecutive sum of elements.
Time complexity : O(n)

example 1)
Input: [-1, 3, -1, 5]
Output: 7 // 3 + (-1) + 5

example 2)
Input: [-5, -3, -1]
Output: -1 // -1

example 3)
Input: [2, 4, -2, -3, 8]
Output: 9 // 2 + 4 + (-2) + (-3) + 8
*/

// O(n)
int main(){
	int max	= 0, k = 0, nowmax = 0;
	for(; ~scanf("%d",&k); nowmax = nowmax < max ? max : nowmax) {
		if(max + k <= k)
			max = k;
		else 
			max = k + max;
	}
	printf("%d",max > nowmax ? max : nowmax); 
}
