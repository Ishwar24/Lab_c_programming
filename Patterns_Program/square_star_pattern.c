#include <stdio.h>  

void square_star_pattern(int num){

    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            printf(" * ");
        }
        printf("\n");
    }
}
 int main()  
{  
    int number;  
    printf("Enter the number of rows: ");  
    scanf("%d",&number);  
    square_star_pattern(number);
      
    return 0;  
}