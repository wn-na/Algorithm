#include <iostream>
#include <cstdio>
#include <queue>
#include <utility>
using namespace std;
typedef pair<int, pair<int, int> > piii;
int n,m,e;
int arr[101][101][101] = {0,};
int dx[6] = { 0,1,0,-1,0,0 };
int dy[6] = { 1,0,-1,0,0,0 };
int dz[6] = { 0,0,0,0,1,-1 };
int count = 0;
queue<piii> where;

bool findAll(){
	for(int h = 0; h < e; h++){
	    for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(arr[i][j][h] == 0){ return false;}
				if(count < arr[i][j][h]) count = arr[i][j][h];
			}
	    }
	}return true;
}    
bool print(){
	for(int h = 0; h < e; h++){
	    for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				printf("%d ",arr[i][j][h]);
			}puts("");
	    }
	}return true;
}    

int main() {
	scanf("%d%d%d", &n, &m, &e);
	for(int h = 0; h < e; h++){
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				scanf("%d",&arr[i][j][h]);
	            if(arr[i][j][h] == 1){
	                where.push({i,{j,h}});  
	            }
			}
		}
	}
    int kq = where.size();
	if(kq == n *m *e) count = 0;
    else if(kq == 0) count = -1;
    else{
		while(!where.empty()){
			int y = where.front().first;
			int x = where.front().second.first;
			int z = where.front().second.second;
			where.pop();
			for(int i = 0; i < 6; i++){
				int n_y = y + dy[i];
				int n_x = x + dx[i];
				int n_z = z + dz[i];
				if( ((n_y >= 0 && n_y < m)
				&& (n_z >= 0 && n_z < e) 
				&& (n_x >= 0 && n_x < n)) 
				&& arr[n_y][n_x][n_z] == 0){
					    arr[n_y][n_x][n_z] = arr[y][x][z] + 1;
					    where.push({n_y,{n_x,n_z}});
				 }
			}
		}
        if(findAll())  count--;
        else count = -1;
    }
	
    printf("%d",count);
	return 0;
}
