#include <stdio.h>
const int max = 100;
int n, r;
char arr[max];
int check[max];
void bf(int x){
    if(x>=r){
    printf("%s\n",arr);
    }else{
    for(int i=0; i<n; i++){
        char alpha = 'a'+i;
        if(check[i] == false){
        arr[x] = alpha;
        check[i] = true;
        bf(x+1);
        arr[x] = 0;
        check[i] = false;
        }
    }
    }
}
int main(){
    scanf("%d %d",&n, &r);
    bf(0);
    return 0;
}
