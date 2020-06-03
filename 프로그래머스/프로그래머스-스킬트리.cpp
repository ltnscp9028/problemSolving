    #include<bits/stdc++.h>
    using namespace std;
    int i,le,sle,j,k;

    int solution(string s, vector<string> v) {
        int answer = 0;
        sle = s.length();
        le = v.size();
        for(i=0;i<le;i++){
            vector<int>t;
            string str = v[i],tmp="";
            int cnt = 0;
            for(cnt=j=0;j<str.length();j++)
                for(k=0;k<sle;k++)if(str[j]==s[k])tmp+=str[j];

            for(j=0;j<tmp.length();j++)if(s[j]!=tmp[j])cnt++;

            if(cnt==0)answer++;
        }
        return answer;
    }