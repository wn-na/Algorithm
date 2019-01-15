char arr[251][251];
char visit[251][251];
int r,c;
int sh = 0, wo = 0;
void dfs(int i, int j, int *sheep, int *wolf){
	if(visit[i][j]) return;
	if(arr[i][j] == '#') return;
	visit[i][j] = 1;
	if(arr[i][j] == 'v') *wolf = *wolf + 1;
	if(arr[i][j] == 'o') *sheep = *sheep + 1;
	if(i + 1 < r) dfs(i+1,j,sheep,wolf);
	if(j + 1 < c) dfs(i,j+1,sheep,wolf);
	if(i - 1 >= 0) dfs(i-1,j,sheep,wolf);
	if(j + 1 >= 0) dfs(i,j-1,sheep,wolf);
}
main(){
	scanf("%d%d",&r,&c);gets(arr[0]);
	for(int i = 0; i < r; i++)
		gets(arr[i]);

	for(int i = 0; i < r; i++)
		for(int j = 0; j < c; j++)
			if(!visit[i][j] && arr[i][j] != '#'){
				int sp=0,wp=0;
				dfs(i,j,&sp,&wp);
				if(sp > wp){
					sh += sp;
				}else{
					wo += wp;
				}
			}
	printf("%d %d",sh,wo);			
}
	
