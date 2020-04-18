#include <iostream>

using namespace std;

bool equals(int a, int b){

	if (a==b or 32==abs(a-b))
		return true;

	return false;
}

int main(){

	string s;
	getline(cin,s);
	bool ans;

	while (s!="*"){
		ans=true;

		for (int i=0;i<s.size();i++){
			if (s[i]==' '){
				if (!equals(s[i+1],s[0]))
					ans=false;
			}
		}	

		if (ans)
			cout << "Y" << endl;
		else
			cout << "N" << endl;

		getline(cin,s);
	}

	return 0;
}
