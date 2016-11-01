#include <iostream>
#include <set>
#include <ctype.h>
       

using namespace std;


int main(){

	set<char> s;
	s.insert('.');
	s.insert(',');
	s.insert(';');
	s.insert(':');
	s.insert('!');
	s.insert('?');

	string str;

	getline(cin,str);

	int cnt = 0;

	for(int i = 0; i < str.length(); ++i){
		if(s.find(str[i]) != s.end()){
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}