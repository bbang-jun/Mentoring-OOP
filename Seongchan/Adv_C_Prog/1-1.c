#include <stdio.h>
#include <string.h>
//
// Created by HolyChan on 2024. 7. 6..
//
void ascendingOrder(int string_cpy[], int length);
void descendingOrder(int string_cpy[], int length);
void printMethod(int string_cpy[], int length);
int main(void){
    char string[100];
    scanf("%s", string);

    int string_cpy[100] = { 0 };

    for(int i = 0; i < strlen(string); i++){
        string_cpy[i] = string[i];
    }

    // 0: 오름차순, 1: 내림차순 -> 추후 변경
    char sort_method[50];
    scanf("%s", sort_method);

    if(!strcmp(sort_method, "오름차순")){
        ascendingOrder(string_cpy, strlen(string));
    } else {
        descendingOrder(string_cpy, strlen(string));
    }

    return 0;
}

void ascendingOrder(int string_cpy[], int length){
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++){
            if(string_cpy[j] > string_cpy[i]){
                int temp = string_cpy[i];
                string_cpy[i] = string_cpy[j];
                string_cpy[j] = temp;
            }
        }
    }
    printMethod(string_cpy, length);
}

void descendingOrder(int string_cpy[], int length){
    for(int i = 0; i < length; i++){
        for(int j = i + 1; j < length; j++){
            if(string_cpy[i] < string_cpy[j]){
                int temp = string_cpy[i];
                string_cpy[i] = string_cpy[j];
                string_cpy[j] = temp;
            }
        }
    }

    printMethod(string_cpy, length);
}

void printMethod(int string_cpy[], int length){
    for(int i = 0; i < length; i++){
        printf("%c", string_cpy[i]);
    }
}