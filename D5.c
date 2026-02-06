#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    int left = 0;
    int right = strlen(str)-1;
    bool ispalindrome = true;
    while(left<right){
        if (str[left] != str[right]){
            ispalindrome = false;
            break;
        }
        ispalindrome = true;
        left++;
        right--;
    }
    printf("%s", ispalindrome ? "YES" : "NO");
    return 0;
}
update 2026-02-06 #1
