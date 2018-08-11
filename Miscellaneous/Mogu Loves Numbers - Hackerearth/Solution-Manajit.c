/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include<stdio.h>
#include<math.h>

int main(){
    
    int max = 1000001;    
    short int arr[max];
    
    for( int i=0;i<=max;i++){
        arr[i] = 1;
    }
    arr[0] = 0;
    arr[1] = 0;
    for(int i = 2 ; i<= sqrt(max); i++){
        if(arr[i] == 1){
            for(int j = 2; i*j<=max; j++){
                arr[i*j] = 0;
                
            }
            
        }
    }
    
    int count[max+1];
    int c = 0;
    for(int i=0; i<=max; i++){
        if(arr[i] == 1){
            c++;
        }
        count[i] = c;
    }
    
   int Q;
    
    scanf("%d", &Q);
    
    for(int i = 0; i < Q ; i++){
        
        int L, R;
        scanf("%d %d",&L, &R);
        if(L>R){
             int temp;
            temp = R;
            R = L;
            L = temp;
        }
        printf("%d\n",count[R] - count[L-1]);
    }
            
}