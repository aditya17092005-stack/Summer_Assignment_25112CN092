#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define n 6
int main(){
    int a[n]={1,2,3,1,2,4};
    int counter=0,mostFreq=-1,maxcnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                counter++;
            }
        }
        if(counter>maxcnt){
            maxcnt=counter;
            mostFreq=a[i];
        }
    }
    printf("The most frequent element is: %d",mostFreq);
}