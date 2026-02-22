class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
       int c=0;
       for(int i=0;i<flowerbed.size();i++){
        int left_empty = (i==0)||(flowerbed[i-1]==0);
        int right_empty = (i==flowerbed.size()-1)||(flowerbed[i+1]==0);
        if(flowerbed[i]==0 && left_empty && right_empty){
            c++;
            flowerbed[i]=1;
        }
       }
       if(n<=c){return true;}
       else{return false;}
    }
};