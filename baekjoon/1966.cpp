#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
int v[102];
bool cmp(int a, int b){ return a>b;}
queue<int> q;
int main(){
    int t;
    scanf("%d",&t);
    for(;t--;){
        int n,m;
        // 큐 초기화
        while(!q.empty())q.pop();
        
        scanf("%d %d ",&n,&m);
        for(int i = 0; i < n; i++){
            scanf("%d ",&v[i]);
            q.push(v[i]);
        }
        // 크기 정렬
        sort(v, v+n, cmp);
        int count=0;
        for(;;){
        	int k = q.front();
        	q.pop();
            if(k != v[count]){
                q.push(k);
            }else{
            	// 뽑는게 처음으로 오면
                if(m==0)break;
                // 그게 아니면, 배열 크기 감소, 그다음값으로 넘어가기
                n--;
                count++;
            }
            m = (n + m - 1) % n;
        }
        printf("%d\n",count+1);
    }
}
