#include <iostream>
#include <cstdio>
#include <queue>
#include <utility>
using namespace std;
int n,m;
int arr[1001][1001] = {0,};
int dy[] = {0,0,-1,1};
int dx[] = {-1,1,0,0};
int count = 0;
queue<pair<int,int> > where;

bool findAll(){
    for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(arr[i][j] == 0){ return false;}
			if(count < arr[i][j]) count = arr[i][j];
		}
	}return true;
}    

int main() {
	scanf("%d%d", &n, &m);
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d",&arr[i][j]);
            if(arr[i][j] == 1){
                where.push(make_pair(i,j));  
            }
		}
	}
    int kq = where.size();
	if(kq == n *m) count = 0;
    else if(kq == 0) count = -1;
    else{
	    
	while(!where.empty()){
		int y = where.front().first;
		int x = where.front().second;
		where.pop();
		for(int i = 0; i < 4; i++){
			int n_y = y + dy[i];
			int n_x = x + dx[i];
			if( ((n_y >= 0 && n_y < m) && (n_x >= 0 && n_x < n)) && arr[n_y][n_x] == 0){
				    arr[n_y][n_x] = arr[y][x] + 1;
				    where.push(make_pair(n_y,n_x));
			 }
		}
	}
        if(findAll())  count--;
        else count = -1;
    }
	
    printf("%d",count);
	return 0;
}
