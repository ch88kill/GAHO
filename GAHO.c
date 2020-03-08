#include <stdio.h>

int main(void){
    unsigned char name1[10], name2[10];
    int result;
start:
    result = 0;
    puts("두 이름을 공백 또는 줄바꿈으로 구분하여 입력해 주세요");
    scanf("%s %s", name1, name2);

    for(int i = 0; name1[i] != 0;i++){
        result += name1[i];
    }
    for(int i = 0; name2[i] != 0 ;i++){
        result += name2[i];
    }

    for(; result > 100; )
        result -= 100;
    printf("%s님과 %s님의 궁합은 %d%%\n", name1, name2, result);
    goto start;

    //printf("%d", result);

    /*switch(result){
        case 1:
            puts("");
            break;
        case 2:
            puts("");
            break;
        case 3:
            puts("");
            break;
        case 4:
            puts("");
            break;
        case 5:
            puts("");
            break;
        case 6:
            puts("");
            break;
        case 7:
            puts("");
            break;
        case 8:
            puts("");
            break;
        case 9:
            puts("");
            break;
        case 10:
            puts("");
            break;
        case 11:
            puts("");
            break;
        case 12:
            puts("");
            break;
        case 13:
            puts("");
            break;
        case 14:
            puts("");
            break;
        case 15:
            puts("");
            break;
        case 16:
            puts("");
            break;
        case 17:
            puts("");
            break;
        case 18:
            puts("");
            break;
        case 19:
            puts("");
            break;
        case 20:
            puts("");
            break;
        case 21:
            puts("");
            break;
        case 22:
            puts("");
            break;
        case 23:
            puts("");
            break;
        case 24:
            puts("");
            break;
        case 25:
            puts("");
            break;
        case 26:
            puts("");
            break;
        case 27:
            puts("");
            break;
        case 28:
            puts("");
            break;
        case 29:
            puts("");
            break;
        case 30:
            puts("");
            break;
        case 31:
            puts("");
            break;
        case 32:
            puts("");
            break;
        case 33:
            puts("");
            break;
        case 34:
            puts("");
            break;
        case 35:
            puts("");
            break;
        case 36:
            puts("");
            break;
        case 37:
            puts("");
            break;
        case 38:
            puts("");
            break;
        case 39:
            puts("");
            break;
        case 40:
            puts("");
            break;
            
    

    }*/
}
