#include <iostream>
#include <cstdio>
using namespace std;

int n,arr[100001],cnt,sum;
int main(){
	while (1){
		sum = 0;
		cnt = 0;
		cin >> n;
		if (n == -1)break;
		int temp = n / 2;
		for (int i = 1;i <= temp; i++){
			if (n%i == 0){
				arr[cnt] = i;
				cnt++;
				sum += i;
			}
		}
		if (sum!=n)	printf("%d is NOT perfect.\n", n);
		else{
			printf("%d = ", n);
			for (int i = 0; i < cnt; i++){
				if (i + 1 == cnt) printf("%d\n", arr[i]);
				else
				printf("%d + ", arr[i]);
			}
		}
	}
}