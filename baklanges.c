/*Program to reverse text in an array*/
#include<stdio.h>
#include<string.h>

/*function to reverse text from one array to another*/
char baklanges(char s1[], char s2[]){  
    int n = strlen(s1);
    int i= 0, j = n-1;
    for(int i = 0; i < n; i++){
        s2[i] = s1[j];
        j--;
    }
    return printf("The copied string is: %s", s2);
}

int main(){
    char a[20], b[20];
    printf("Enter text to be copied: ");
    gets(a);
    //strcpy(t2, t1);   //This instruction copy one array to another
     printf(baklanges(a, b));
    return 0;
}
/*
int main(){
    char s[100], arr[100];
    printf("Enter string to reverse: ");
    gets(s);
    strrev(s);
    strcpy(arr, s);
    printf("The reverse string is: %s", arr);
    return 0;
}*/