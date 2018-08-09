#include <stdio.h>
#include <string.h>

int main(){
    
    int num;
    
    scanf("%d",&num);
    
    // Declaring an array of strings
    char arr[num][30];

    // Declaring of string
    char temp[30];
    
    for(int i=0; i<num; i++){
        scanf("%s",&arr[i]);
    }

    //Looping through the array
    for(int i=0; i<num; i++){
        strcpy(temp,arr[i]);
        
        int j = 0;
        // Looping through the string
        while(j < strlen(temp)){
            if(temp[j] == temp[j+1]){
               j=j+1; 
            }
            else {
                printf("%c",temp[j]);
                j=j+1;
            }
        }
        printf("\n");
    }

}