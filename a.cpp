// He who fears nothing
#include<bits/stdc++.h>
using namespace std;
int main(){
	fstream file;
	file.open("H://BaiTapQTu/checkde.txt", ios_base::in);
	while(!file.eof()){
		string s;
		getline(file,s,'\n');
		cout<<s<<"\n";
	}
	file.close();
	system("pause");
	return 0;
}