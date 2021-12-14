#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string text;
	string r_text;
    cout << "Input text: ";
	cin >> text;
	r_text = func1(text);
    cout << "Reversed text: " << r_text << endl;
	if (func2(text)==func2(r_text)){
		cout << "Palindrome: Yes";
	}
    else{
		cout << "Palindrome: No";
	}
    return 0;
}
