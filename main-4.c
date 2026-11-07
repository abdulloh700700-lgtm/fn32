#include <stdio.h>
int main(void){
              
              int olmalar, oquvchilar;
              olmalar = 20 ;
              oquvchilar = 6; 
              
              int olgan = olmalar / oquvchilar;
              printf("har bir oquvchi %d tadan olma olgan\n", olgan );
              
              int qolgan = olmalar % oquvchilar;
              printf("savatda %d ta olma qolgan\n ", qolgan);
              
              return 0;
}