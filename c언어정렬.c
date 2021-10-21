#include <stdio.h>
int main()
{
    char number[99];
    char str = 'a';
    int cnt = 1 ;
    scanf("%s", &str);
    //아스키코드에 따라 소문자를 판별하고 배열의 길이가 99가 되면 입력받는것을 멈춘다.
    while (str >= 97 && str<= 122 && cnt < 99){
        number[cnt] = str;
        scanf("%s", &str);
        cnt++;
    }
    
    
    for (int i = 1; i < cnt; i++){
        int target = number[i];
        int cur = i-1;
        while (cur >= 0 && target < number[cur]){
            number[cur +1] = number[cur];
            cur--;
        }
    number[cur + 1] = target;
    }
    for (int i = 1; i < cnt; i++) {
    printf("[%c]",number[i]);}


}