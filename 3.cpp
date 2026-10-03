#include<bits/stdc++.h>
#define LL long long
using namespace std;
//
const int N=1e3+10;
//
void solve(){
	srand(time(0)); 
	cout<<"请输入范围：\n";
	int n,m;cin>>n>>m;
	int num=rand()%(m-n+1)+n;
	int a,cnt=0;
	cout<<"范围："<<n<<" ~ "<<m<<'\n';
	while(1){
		cout<<"请输入数字\n";
		cin>>a;
		if(a<n||a>m){
			cout<<"不在范围内，请重新输入\n";
			continue;
		}
		cnt++;
		if(a==num){
			cout << "    BOOM!!!    \n";
			cout<<"总共花费"<<cnt<<"轮";
			break;
		}
		else if(a<num){
			cout<<"范围"<<a+1<<" ~ "<<m<<'\n';
			n=a+1;
		}
		else if(a>num){
			cout<<"范围："<<n<<" ~ "<<a-1<<'\n';
			m=a-1;
		}
	}
	
}
//
int main(){
	system("chcp 65001");
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
	return 0;
}