#include <stdio.h> 

void hollow_right_triangle_star_pattern(int num){

    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            if(i==1 ||i==j||i==num){
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
    printf("Enter the number of rows");  
    scanf("%d",&number);
    hollow_right_triangle_star_pattern(number);
    return 0;  
}  