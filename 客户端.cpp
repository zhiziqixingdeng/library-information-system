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
	cout<<"����������"<<endl;
	getchar();
	getline(cin,str);
	for(int i=1;i<=cnt;i++){
		if(str==s[i].name){
			cout<<"���ҵ���"<<endl<<"1.����"<<endl<<"2.�����"<<endl;
			cin>>w;
			if(w==1){
				if(s[i].sl-s[i].jy==0){
					cout<<"�����Խ�����"<<endl;
					break;
				}
				else{
          ans++;
          cout<<"�������������:";
					cin>>t[ans].mz;
					cout<<"��������ĵ绰����:";
					cin>>t[ans].phone;
          t[ans].bookname=str;
          t[ans].flag=1;
          cout<<"ok"<<endl;
          break;
				}
			}
			else{
				cout<<"�õ�"<<endl;
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
	cout<<"��������ĵ��������"<<endl;
	getchar();
	getline(cin,str);
	cout<<"��������ĵ绰����"<<endl;
	getline(cin,phonenum);
	for(int i=1;i<=ans;i++){
		if(t[i].phone==phonenum&&t[i].bookname==str){
			cout<<"�黹�ɹ�!"<<endl;
			sleep(1);
			system("cls");
			t[i].flag=0;
			return;
		}
	}
	cout<<"δ�ҵ���¼"<<endl;
	sleep(1);
	system("cls");
	return;
}
void tc(){
	cout<<"��лʹ��"<<endl;
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
	freopen("����.in","w",stdout);
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
	freopen("����.in","r",stdin);
	cin>>ans;
	for(int i=1;i<=ans;i++){
    getline(cin,t[i].mz);
    getline(cin,t[i].mz);
    getline(cin,t[i].phone);
    getline(cin,t[i].bookname);
    cin>>t[i].flag;
	}
	freopen("CON","r",stdin);
  cout<<"��ӭ�������"<<endl;
  sleep(1);
  system("cls");
  while(true){
    cout<<"������Ҫ��ʲô"<<endl<<"1.����"<<endl<<"2.����"<<endl<<"3.�˳�"<<endl;
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
			cout<<"����"<<endl;
		}
  }
}
