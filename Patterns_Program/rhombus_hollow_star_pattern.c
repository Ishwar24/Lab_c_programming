#include <stdio.h>  

void rhombus_hollow_star_pattern(int num){

    for(int i=num; i>1; i--){
        for(int j=1; j<i-1; j++){
            printf(" ");
        }
		for(int k=1; k<=num; k++){
            if(i==1||i==num||k==1||k==num){
                printf("* ");  
            }  
            else
            printf("  ");
        }
        printf("\n");
    }
}
 int main()  
{  
    int number;  
    printf("Enter the number of rows: ");  
    scanf("%d",&number);  
    rhombus_hollow_star_pattern(number);
      
    return 0;  
}  