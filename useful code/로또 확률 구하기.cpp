class Solution{
public:
    double solution(int N){
        double list[700][701]= {1};
        for(int i = 1; i <= 600; i++){
            for(int j = 0; j <= i; j++){
                // nCn, nC0 = 1
                if(i == j || j == 0) list[i][j] = 1.0f;
                // nCr = n-1Cr-1 + n-1Cr
                else list[i][j] = list[i-1][j-1] + list[i-1][j];
                list[i][j];
            }
        }
        return N < 3? 1 : N*(
            list[5][3]*list[5*N-5][2]/(list[5*N][5])
            +list[5][4]*list[5*N-5][1]/(list[5*N][5])
            +list[5][5]*list[5*N-5][0]/(list[5*N][5]));
    }
};
