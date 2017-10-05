class Solution {
public:
    
   static bool compare(int a, int b){
        return abs(a)>abs(b) ;
    }
    
    int maximumProduct(vector<int>& nums) {
        
        int sum1=1,sum2=1,sum3=1 ;
        
        vector<int> num1 ;
        vector<int> num2 ; 
        
        if(nums.size() == 3){
            return nums[0]*nums[1]*nums[2] ;
        }
        
        sort(nums.begin(), nums.end() , compare) ;
        
        int f=0,k1=0,k2=0 ;
        
        for(int i=0 ;i<nums.size() ;i++){
          if(nums[i]>0){
              num1.push_back(nums[i]) ;
          }else {
              num2.push_back(nums[i]) ;
          }
        }
        
        for(int i=0 ;i<num1.size() && i<3 ; i++){
            sum1*=num1[i] ;
        }
    
        for(int i=0 ;i<num2.size() && i<2 ; i++){
            sum2*=num2[i] ;
        }
        
        if(num1.size() ==1 ){
            sum3 = sum1*sum2 ;
        }else if(num1.size() ==2){
            if(num2.size() == 1){
                sum3 = sum1*sum2 ;
            }else {
                sum3 = num1[0]*sum2 ;
            }
        }else {
            if(num2.size()<2){
                sum3 = sum1 ;
            }else {
               sum3 = max(sum1 , sum2*num1[0]) ;
            }
        }      
        return sum3 ;
    }
};
