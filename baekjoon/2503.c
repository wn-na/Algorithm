int a[100][2];
int d[100][2];
int z[100][3];
int n, s = 0;

int max(int a,int b){return a>b?a:b;}

int isOK(int k){
	int x[3];
	for(int i = 2; i >= 0; i--,k/=10) x[i] = k%10;
	for(int i = 0; i < n; i++) {
		d[i][0] = d[i][1] = 0;
		for(int q = 0; q < 3; q++){
			for(int w = 0; w < 3; w++){
				if(z[i][q] == x[w]){
					if(q==w) d[i][0]++;
					else d[i][1]++;
				}
			}
		}
		
		if(a[i][0] != d[i][0] || a[i][1] != d[i][1]) return 0;
	}
	return 1;
}

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%1d%1d%1d %d %d",&z[i][0],&z[i][1],&z[i][2], &a[i][0], &a[i][1]);
    
	for(int i = 123; i <= 987; i++){
		if(i%10 == i/10%10 || i/100 == i%10 || i/100 == i/10%10 || i%10 == 0 || i/10%10 == 0) continue;
		if(isOK(i)) s++;
	}
    printf("%d",s);
}
