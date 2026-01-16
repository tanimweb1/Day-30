#include<stdio.h>

int main() {

   
    // contest vu -1
    
    int t,n,sum,rem,tem;
    scanf("%d", &t);



for(int i = 1; i <= t; i++){

scanf("%d", &n);

tem = n;
sum = 0;  

while(tem!= 0) {
 rem = tem%10;
sum = sum*10+rem;
tem = tem/10;
        
        
}
 if(n == sum){
   printf("Case %d: Yes\n",i);
        }
else{
printf("Case %d: No\n",i);
     }
    
    
    
    
    
    

    
    }

    return 0;
}

