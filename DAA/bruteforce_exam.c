#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char StrMatch(char *t, char *p);
void main() {
    int ans;
    FILE *fptr;
    fptr = fopen("file.txt", "r");
    char myString[100];
    fgets(myString, 100, fptr);
    printf("%s\n", myString);
    fclose(fptr);
    char t[] = "Something";
    char p[] = "Bother";
    ans = StrMatch(myString,p);
    printf("Found at pos = %d",ans);
}
char StrMatch(char *t, char *p){
    int n,m;
    n = strlen(t);
    m = strlen(p);
    for(int i=0;i<n-m+1;i++){
        int j=0;
        while(j<m && t[i+j] == p[j]){
            j++;
        }
        if(j==m){
            return (i+1);
        }
    }
    printf("No Match Found");
    return -1;
}