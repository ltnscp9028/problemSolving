#include<bits/stdc++.h>
using namespace std;
int i,j,n,cnt;
string s,ss;
vector<string>v[100];
int main(){
	cin>>n;
	if(n<1||n>100)return puts("�Է� ����");
	for(cin>>s;j<n;j++){
		cin>>ss;
		stack<char>st,nst;
		for(i=s.length()-1;i>=0;i--)st.push(s[i]);
		for(cnt=0;cnt!=s.length();){
			if(!st.empty()){
				if(st.top()==ss[cnt]){
					v[j].push_back("�ֱ� ������ ");
					st.pop();
					cnt++;
				}
				
				else if(st.top()!=ss[cnt]){
					v[j].push_back("�ֱ� "); 
					nst.push(st.top());
					st.pop();
				}
			}
			
			if(!nst.empty()){
				if(nst.top()==ss[cnt]){
					v[j].push_back("������ ");
					nst.pop();
					cnt++; 
				}
			}
			
			if(st.empty()&&!nst.empty()){
				v[j].clear();
				if(nst.top()!=ss[cnt])v[j].push_back("�Ұ���");
				break;
			}
		}
	}
	for(i=0;i<n;puts(""),i++)
		for(j=0;j<v[i].size();j++)cout<<v[i][j];
}
