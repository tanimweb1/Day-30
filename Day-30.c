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
    
    
    
  // contest vu -2
    int n,total,first = 4,second;
    scanf("%d",&n);

    second = (n-1)*3;
    total = first + second;

    printf("%d\n",total);  
    
    


// vu contest -3

    int t,a,b,sum;
scanf("%d",&t);

for(int i = 0;i<t;i++){
scanf("%d%d",&a,&b);

sum = a+b;

printf("%d\n",sum);
}



   

   
    
    }

    return 0;
}



