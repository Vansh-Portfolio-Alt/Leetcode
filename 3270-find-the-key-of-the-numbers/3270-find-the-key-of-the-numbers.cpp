class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
     int a=0,i=1;
     while(num1>0 || num2>0 || num3>0){
            int x=num1%10,y=num2%10,z=num3%10;
            a=a+min(x,min(y,z))*i;i*=10;
            num1/=10;
            num2/=10;
            num3/=10;
     }
     return a;
    }
};