#include <stdio.h>

//Since max function is not present, I did this
#define max(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })

int main(){
    
    //constraint 1 <= N <= 10^5
    unsigned int N=0, i, count = 1;
    scanf("%u", &N);

    //constraint -10^9 <= A[i] <= 10^9
    long A[N],sum, temp, ans;
    for(i=0; i<N; i++) {
        scanf("%ld", &A[i]);
    }
    
    //Checking to find the greatest in negative array
    ans = A[0];
    for(i = 1 ; i < N; i++) {
        ans = max(ans, A[i]);
    }
    if(ans<0){
        printf("%ld %u", ans, count);
    }
    
    //Main logic starts here
    else {

        //If first element is 0 or a positive number
        if(A[0]>=0){
        sum = ans = A[0];
        count = 1;
    }
    else {

        //If first element is a negative number
        sum = ans = 0;
        count = 0;
    }
    
    // Looping from the second element in the array
    for(i = 1 ; i<N ; i++) {

        //add to the element only if it is a positive number
        if(A[i]>0){
            sum = sum + A[i];
        }

        temp = ans;
        ans = max(ans, sum);
        if(ans != temp || A[i] == 0){ // A[i] == 0 is done because we need to find the maximum number of elements in a sub-array if two or more subarray had the same maximum sum.
            count = count + 1;
        }
        
    }
    
    printf("%ld %u", ans, count);
    }
    
    
    
}