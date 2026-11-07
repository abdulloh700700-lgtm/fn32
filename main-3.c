/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){

    int day;
    printf("kunni kiritng; ");
    scanf("%d", &day);
    
    switch (day) {
       case 1:
       case 2:
       case 3:
       case 4:
       case 5:
        printf("ish kuni");
        break;
        
        case 6:
        case 7:
            printf("dam olish kuni");
            break;
            
        default :
            printf("bunday hafta kuni yoq");
    }
 
    
    
    return 0;
}