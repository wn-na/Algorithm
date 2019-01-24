int n,r,c,count=0;
void recursion(int x, int y, int len){
    if(x==r && y==c){
        printf("%d", count);
        exit(0);
    }

    if(len==1){
        count++;
        return;
    }
    // 범위내에 들지 않으면
    if(!(x <= r && r < x+len && y <= c && c < y+len)){
        count += len * len;
        return;
    }

    recursion(x, y, len/2);
    recursion(x, y+len/2, len/2);
    recursion(x+len/2, y, len/2);
    recursion(x+len/2, y+len/2, len/2);
}
int main(){
    scanf("%d%d%d", &n, &r, &c);
    recursion(0, 0, pow(2,n));
}
