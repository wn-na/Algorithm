#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
	string inp;
	getline(cin,inp);
	stringstream ss(inp);
	string type;
	ss>>type;
	string str;
	while(ss>>str) {
		str.erase(str.end()-1);
		cout<<type;
		int i;
		for(i = str.length()-1; ;i--){
			if(isalpha(str[i])) break;
			else if(str[i] == ']'){
				cout << "[]";
				i--;
			}else cout << str[i];
		}
		cout << " ";
		for(int i = 0; i < str.length(); i++){
			if(isalpha(str[i])) cout << str[i];
		}
		cout <<";\n";
	}
	return 0;
}
