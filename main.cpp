#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
using namespace std;
struct book{
  string name;
  string zz;//����
  int sl;//������
  int jy;//���ļ���
}s[999999];
struct tojy{
  string mz;//����
  string phone;//�ֻ���
  string bookname;
  int flag;//�Ƿ�黹
}t[999999];
string str;
int n,w;
int ans,cnt;
void add(){
  system("cls");
  ans++;
  getline(cin,s[ans].name);
  cout<<"������ͼ������:";
  getline(cin,s[ans].name);
  cout<<"������ͼ������:";
  getline(cin,s[ans].zz);
  cout<<"������������:";
  cin>>s[ans].sl;
  cout<<"�������!"<<endl;
  sleep(1);
  system("cls");
  return;
}
void xg(){
  system("cls");
  cout<<"������ͼ������:";
  cin.clear();
  getline(cin,str);
  int tflag;
  for(int i=1;i<=ans;i++){
    if(s[i].name==str){
      cout<<"���������������:";
      getline(cin,s[i].zz);
      cout<<"�������µ�����:";
      cin>>s[i].sl;
      tflag=1;
    }
  }
  if(tflag==0){
    cout<<"δ�ҵ�ͼ��"<<endl;
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
    cout<<"��������:"<<t[i].bookname<<" �绰:"<<t[i].phone<<endl;
  }
  system("pause");
  system("cls");
  return;
}
void clean(){
  system("cls");
  cout<<"ȷ����? 1.ȷ�� 2.��ȷ��"<<endl;
  cin>>w;
  if(w==1){
    freopen("ͼ��.in","w",stdout);
    cout<<0<<endl;
    freopen("����.in","w",stdout);
    cout<<0<<endl;
    freopen("CON","w",stdout);
    return;
  }
  else{
    cout<<"�õ�"<<endl;
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
  freopen("����.in","r",stdin);
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
  cout<<"��ӭʹ��ͼ�����ϵͳ"<<endl;
  sleep(1);
  system("cls");
  cin.sync();
  while(true){
    cout<<"�������ʲô"<<endl;
		cout<<"0.�˳�"<<endl;
		cout<<"1.����ͼ��"<<endl;
		cout<<"2.�޸�ͼ��"<<endl;
		cout<<"3.�鿴��������"<<endl;
		cout<<"4.���������Ϣ"<<endl;
		cout<<"5.ͼ���б�"<<endl;
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
      cout<<"��лʹ��"<<endl;
      sleep(1);
      system("cls");
      return 0;
    }
    else{
      cout<<"����"<<endl;
    }
  }
}
