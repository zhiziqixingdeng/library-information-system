#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
using namespace std;
struct book{
  string name;
  string zz;//作者
  int sl;//总数量
  int jy;//借阅几本
}s[999999];
struct tojy{
  string mz;//名字
  string phone;//手机号
  string bookname;
  int flag;//是否归还
}t[999999];
string str;
int n,w;
int ans,cnt;
void add(){
  system("cls");
  ans++;
  getline(cin,s[ans].name);
  cout<<"请输入图书名字:";
  getline(cin,s[ans].name);
  cout<<"请输入图书作者:";
  getline(cin,s[ans].zz);
  cout<<"请输入总数量:";
  cin>>s[ans].sl;
  cout<<"创建完成!"<<endl;
  sleep(1);
  system("cls");
  return;
}
void xg(){
  system("cls");
  cout<<"请输入图书名称:";
  cin.clear();
  getline(cin,str);
  int tflag;
  for(int i=1;i<=ans;i++){
    if(s[i].name==str){
      cout<<"请输入该书新作者:";
      getline(cin,s[i].zz);
      cout<<"请输入新的数量:";
      cin>>s[i].sl;
      tflag=1;
    }
  }
  if(tflag==0){
    cout<<"未找到图书"<<endl;
    sleep(1);
  }
  else{
    cout<<"ok"<<endl;
    sleep(1);
  }
  system("cls");
  return;
}
void jymd(){
  system("cls");
  for(int i=1;i<=cnt;i++){
    cout<<"借阅书名:"<<t[i].bookname<<" 电话:"<<t[i].phone<<endl;
  }
  system("pause");
  system("cls");
  return;
}
void clean(){
  system("cls");
  cout<<"确定吗? 1.确定 2.不确定"<<endl;
  cin>>w;
  if(w==1){
    freopen("图书.in","w",stdout);
    cout<<0<<endl;
    freopen("借阅.in","w",stdout);
    cout<<0<<endl;
    freopen("CON","w",stdout);
    return;
  }
  else{
    cout<<"好的"<<endl;
  }
  return;
}
void thlb(){
  for(int i=1;i<=ans;i++){
    cout<<s[i].name<<endl;
  }
  system("pause");
  system("cls");
  return;
}
void cd(){
 freopen("book.in","r",stdin);
  cin>>ans;
  if(ans>=1){
  	for(int i=1;i<=ans;i++){
    getline(cin,s[i].name);
    getline(cin,s[i].name);
    getline(cin,s[i].zz);
    cin>>s[i].sl>>s[i].jy;
    }
	}
  freopen("CON","r",stdin);
  freopen("借阅.in","r",stdin);
  cin>>cnt;
  if(cnt>=1){
  	for(int i=1;i<=cnt;i++){
    getline(cin,t[i].mz);
    getline(cin,t[i].phone);
    getline(cin,t[i].bookname);
    cin>>t[i].flag;
    }
	}
  freopen("CON","r",stdin);
  return;
}
int main(){
	cd();
  cout<<"欢迎使用图书管理系统"<<endl;
  sleep(1);
  system("cls");
  cin.sync();
  while(true){
    cout<<"请输入干什么"<<endl;
		cout<<"0.退出"<<endl;
		cout<<"1.增加图书"<<endl;
		cout<<"2.修改图书"<<endl;
		cout<<"3.查看借阅名单"<<endl;
		cout<<"4.清空所有信息"<<endl;
		cout<<"5.图书列表"<<endl;
		cin.clear();
    cin>>n;
    if(n==1){
      add();
    }
    else if(n==2){
      xg();
    }
    else if(n==3){
      jymd();
    }
    else if(n==4){
      clean();
    }
    else if(n==5){
      thlb();
    }
    else if(n==0){
      freopen("book.in","w",stdout);
      cout<<ans<<endl;
      for(int i=1;i<=ans;i++){
        cout<<s[i].name<<endl<<s[i].zz<<endl<<s[i].sl<<" "<<s[i].jy<<endl;
      }
      freopen("CON","w",stdout);
      cout<<"感谢使用"<<endl;
      sleep(1);
      system("cls");
      return 0;
    }
    else{
      cout<<"错误"<<endl;
    }
  }
}
