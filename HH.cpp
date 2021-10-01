#include <stdio.h>
int data[1000];
int main(void){
    int i, j, min, temp, index, num;
    scanf("%d", &num);
    for(i=0; i<num; i++){
    scanf("%d", &data[i]);
    
    }
    for(i=0; i<num; i++){
    min = 1001;
    for(j=i; j<num; j++){
        if(min > data[j]){
        min = data[j];
        index = j;
        
        }
    }
    temp = data[i];
    data[i] = data[index];
    data[index] = temp;
    }
    for(i = 0; i<num; i++){
    printf("%d ", data[i]);
    }
    return 0;
}
