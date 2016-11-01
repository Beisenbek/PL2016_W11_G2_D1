#include <iostream>
#include <set>
#include <ctype.h>
       

using namespace std;


int main(){

	set<char> s;

	string str;

	getline(cin,str);

	for(int i = 0; i < str.length(); ++i){
		if(isdigit(str[i])){
			s.insert(str[i]);
		}
	}

	for(set<char>::iterator i = s.begin(); i != s.end(); i++){
        	cout << *i << " ";
        }
            


	return 0;
}