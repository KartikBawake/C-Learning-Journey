#include <stdio.h>
#define SIZE 6

int LS(int key, int arr[SIZE]);
int key_check(int res);

void main(){

    int key;
    printf("Enter the Key: ");
    scanf("%d", &key);
    int arr[SIZE] = {10, 20, 30, 40, 50, 60};
    int res = LS(key, arr);
    key_check(res);
}


int LS(int key, int arr[SIZE]){

    for(int i = 0; i < SIZE; i++){

        if (key == arr[i]){
            return i;
        }    

    }

    return -1;

}

int key_check(int res){
    if (res == -1)
    {
        printf("Key Not Found");
    }
    else{
        printf("Key Found at Index %d", res);
    }
    return 0;
}