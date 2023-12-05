#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
struct book{
  string name;
  string zz;
  int sl;
  int jy;
}s[999999];
struct tojy{
  string mz;
  string phone;
  string bookname;
  int flag;
}t[999999];
int ans,cnt,to;
int n,w;
string str;
void js(){
	cout<<"请输入书名"<<endl;
	getchar();
	getline(cin,str);
	for(int i=1;i<=cnt;i++){
		if(str==s[i].name){
			cout<<"已找到书"<<endl<<"1.借阅"<<endl<<"2.点错了"<<endl;
			cin>>w;
			if(w==1){
				if(s[i].sl-s[i].jy==0){
					cout<<"本书以借阅完"<<endl;
					break;
				}
				else{
          ans++;
          cout<<"请输入你的名字:";
					cin>>t[ans].mz;
					cout<<"请输入你的电话号码:";
					cin>>t[ans].phone;
          t[ans].bookname=str;
          t[ans].flag=1;
          cout<<"ok"<<endl;
          break;
				}
			}
			else{
				cout<<"好的"<<endl;
				break;
			}
		}
	}
	sleep(1);
	system("cls");
	return;
}
void hs(){
	string phonenum;
	cout<<"请输入借阅的书的名字"<<endl;
	getchar();
	getline(cin,str);
	cout<<"请输入你的电话号码"<<endl;
	getline(cin,phonenum);
	for(int i=1;i<=ans;i++){
		if(t[i].phone==phonenum&&t[i].bookname==str){
			cout<<"归还成功!"<<endl;
			sleep(1);
			system("cls");
			t[i].flag=0;
			return;
		}
	}
	cout<<"未找到记录"<<endl;
	sleep(1);
	system("cls");
	return;
}
void tc(){
	cout<<"感谢使用"<<endl;
	sleep(1);
	system("cls");
	freopen("book.in","w",stdout);
	cout<<cnt<<endl;
	for(int i=1;i<=cnt;i++){
		cout<<s[i].name<<endl;
		cout<<s[i].zz<<endl;
		cout<<s[i].sl<<" "<<s[i].jy<<endl;
	}
	freopen("CON","w",stdout);
	freopen("借阅.in","w",stdout);
	int flag=0;
	for(int i=1;i<=ans;i++){
		if(t[i].flag==1){
			flag++;
		}
	}
	cout<<flag<<endl;
	for(int i=1;flag>0;i++){
    if(t[i].flag==1){
    	cout<<t[i].mz<<endl<<t[i].phone<<endl<<t[i].bookname<<endl<<1<<endl;
		}
	}
	freopen("CON","r",stdin);
	return;
}
int main(){
  freopen("book.in","r",stdin);
  cin>>cnt;
	if(cnt>=1){
		for(int i=1;i<=cnt;i++){
			getline(cin,s[i].name);
			getline(cin,s[i].name);
			getline(cin,s[i].zz);
			cin>>s[i].sl>>s[i].jy;
		}
	}
	freopen("CON","r",stdin);
	freopen("借阅.in","r",stdin);
	cin>>ans;
	for(int i=1;i<=ans;i++){
    getline(cin,t[i].mz);
    getline(cin,t[i].mz);
    getline(cin,t[i].phone);
    getline(cin,t[i].bookname);
    cin>>t[i].flag;
	}
	freopen("CON","r",stdin);
  cout<<"欢迎来到书店"<<endl;
  sleep(1);
  system("cls");
  while(true){
    cout<<"请输入要干什么"<<endl<<"1.借书"<<endl<<"2.还书"<<endl<<"3.退出"<<endl;
    cin.clear();
    cin>>n;
    if(n==1){
      js();
    }
    else if(n==2){
    	hs();
		}
		else if(n==3){
			tc();
			return 0;
		}
		else{
			cout<<"错误"<<endl;
		}
  }
}
