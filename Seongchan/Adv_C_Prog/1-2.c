#include <stdio.h>
//
// Created by HolyChan on 2024. 7. 6..
//
int main(){

    char first_string[20] = {'\0'};
    char second_string[20] = {'\0'};
    char third_string[20] = {'\0'};
    char fourth_string[20] = {'\0'};
    char fifth_string[20] = {'\0'};


    scanf("%s", first_string);
    scanf("%s", second_string);
    scanf("%s", third_string);
    scanf("%s", fourth_string);
    scanf("%s", fifth_string);

    char string[100];

    int length = 0;


    for(int i = 0; i < 20; i++){
        if(first_string[i] != '\0'){
            string[length] = first_string[i];
            length++;
        }
        if(second_string[i] != '\0'){
            string[length] = second_string[i];
            length++;
        }
        if(third_string[i] != '\0'){
            string[length] = third_string[i];
            length++;
        }
        if(fourth_string[i] != '\0'){
            string[length] = fourth_string[i];
            length++;
        }
        if(fifth_string[i] != '\0'){
            string[length] = fifth_string[i];
            length++;
        }

    }

    for(int i = 0; i < 100; i++){
        if(string[i] == '\0') break;
        printf("%c", string[i]);
    }

    return 0;
}