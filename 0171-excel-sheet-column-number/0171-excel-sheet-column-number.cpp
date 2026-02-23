class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size();
        long long sum=0,i=1;
        for(int x=n-1;x>=0;x--){
            sum+= ((int)columnTitle[x]-64)*i;
            i*=26;
        }
        return sum;
    }
};