/*
本代码书店可部署在官网上查看书本数量
可有可无
*/
#include <iostream>
#include <string>
using namespace std;
struct book{
  string name;
  string zz;//作者
  int sl;//总数量
  int jy;//借阅几本
}s[999999];
int main(){
	cout << "Content-type:text/html\r\n\r\n";
	freopen("book.in","r",stdin);
	int cnt;
	cin>>cnt;
	for(int i=1;i<=cnt;i++){
		getchar();
		getline(cin,s[i].name);
		getline(cin,s[i].zz);
		cin>>s[i].sl>>s[i].jy;
	}
	freopen("CON","r",stdin);
	cout<<"<html>"<<endl;
	cout<<"<head>"<<endl;
	cout<<"<title>书店书本</title>"<<endl;
	cout<<"</head>"<<endl;
	cout<<"<body>"<<endl;
	for(int i=1;i<=cnt;i++){
		cout<<"<h3>书名:"<<s[i].name<<"   存货:"<<s[i].sl-s[i].jy<<"</h3>"<<endl;
	}
	cout<<"<i>以上是所有书本</i>"<<endl;
  cout<<"</body>"<<endl;
  cout<<"</html>"<<endl;
  return 0;
}
