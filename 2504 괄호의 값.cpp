#include <cstdio>
#include <iostream>
#include <stack>
#include <string>

/*
  원리는 [,(일때 각각의 값을 tmp에 곱해준다.
  그 후, ),]일때 먼저 스택이 비거나 스택의 top값이 (,[이 아니라면 0으로 반환하고 0인것!
  그리고 나서, i-1번이 (, [ 이면 구햇던 값을 저장하고, 각각의 값으로 나눈다 => 
    쌍으로 이루워질때 n-2~.. 까지 비교하기 힘들기에 그전값만 구하면 결과가 나온다.(분배법칙)
  결과 부분에서 스택이 비여있지 않으면 0

*/
using namespace std;
  int main(){
  stack<char> st;
  string str;
  int tmp = 1, sum=0;
  cin >> str;

  for(int i = 0; i < str.length(); i++ ){
	  if(str[i] == '('){
		  tmp *= 2;
		  st.push('(');
	  }
    if(str[i] == ')'){
	  	if(st.empty() || st.top() != '('){
			  sum = 0;
			  break;
		  }
		  if(str[i-1] == '(')
        sum += tmp;
		  st.pop();
		  tmp /= 2;
	  }
    if(str[i] == '['){
	  	tmp *= 3;
	  	st.push('[');
	  }
    if(str[i] == ']'){
		  if(st.empty() || st.top() != '['){
			  sum = 0;
			  break;
		  }
		  if(str[i-1] == '[') 
        sum += tmp;
		  st.pop();
  		tmp /= 3;
	  }
  }

  cout <<(st.empty() ? sum : 0);

}
