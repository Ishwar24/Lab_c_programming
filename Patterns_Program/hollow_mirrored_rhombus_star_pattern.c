#include <stdio.h> 

void mirrored_rhombus_star_pattern(int num){

    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            printf("  ");
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
    printf("Enter the number of rows");  
    scanf("%d",&number);
    mirrored_rhombus_star_pattern(number);
    return 0;  
} 