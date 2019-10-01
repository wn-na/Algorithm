int arr[25][25];
int visit[25][25];
int siz[500];
int count = 0;
int k;
int rr(int* a, int*b){
return *a>*b;
}
void dfs(int i, int j){
	if(arr[i][j] == 0 || visit[i][j]) return;
	visit[i][j] = 1;
	siz[count]++;
	if(i >0) dfs(i-1,j);
	if(i < k-1) dfs(i+1,j);
	if(j >0) dfs(i,j-1);
	if(j < k-1) dfs(i,j+1);
}
int main(){
scanf("%d",&k);
for(int i = 0; i < k; i++){
for(int j = 0; j < k; j++){
scanf("%1d",&arr[i][j]);
}
}

for(int i = 0; i < k; i++){
for(int j = 0; j < k; j++){
	if(arr[i][j]==1 && !visit[i][j]) {
dfs(i,j);
count++;
}
}
}
qsort(siz,count,4,rr);
printf("%d\n",count);
for(int i = 0; i < count; i++)printf("%d\n",siz[i]);
}
