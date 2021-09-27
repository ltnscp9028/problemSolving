int a[90],i,n,nn,l;
class Solution {
public:
    int romanToInt(string s) {
        a[73]=1;
        a[86]=5;
        a[88]=10;
        a[76]=50;
        a[67]=100;
        a[68]=500;
        a[77]=1000;
        int r = 0;
        for(l=s.size()-1,i=l;i>=0;n=a[s[i]],n=a[s[i]],nn=a[s[i+1]],r+=i^l?n<nn?-n:n:n,i--);
        return r;
    }
};
