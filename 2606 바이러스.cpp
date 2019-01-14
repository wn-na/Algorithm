#include<stdio.h>
char arr[102][102];
int com,count = 0;int tr;int q,w;
void find(int i){
    ++count;
    arr[i][0] = 1;
    for(int j = 1; j <= com; j++){
        if(arr[i][j] && arr[j][0]==0){
	    find(j);
        }
    }
}

int main(){
    scanf("%d%d",&com,&tr);
    for(int i = 0; i < tr; i++){
        scanf("%d%d",&q,&w);
        arr[q][w] = arr[w][q] = 1;
    }

    find(1);
    printf("%d",count-1);
}
