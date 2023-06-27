#include<iostream>
using namespace std;
string duplicate(string s){
	if(s.length()==0){
		return "";
	}
	
	char f=s[0];
	string ans = duplicate(s.substr(1));
	
	if(f==ans[0]){
		return ans;
	}
	else{
		return f+ans;
	}
	
}
int main(){
	string str;
	cout<<"Enter the String:";
	cin>>str;
	cout<<"After removing duplicates: "<<duplicate(str);

	return 0;
}
