// 1. switch case 문에 대하여 알아 봅시다.
//#include <stdio.h>
//int main()
//{
//    int number = 1;
//    switch(number){
//        case    1: case 2:
//        printf("둘");break;
//        case 3:
//        case 4: printf("넷");break;
//        default : puts("1부터 4이외의 값");
//    }
//    puts("입니다.");
//}




// 2. switch case 문의 default에 대하여 알아 봅시다.
//#include <stdio.h>
//int main()
//{
//    int number =3;
//
//    switch(number){
//        case 1: printf("하나"); break;
//        case 2: printf("둘"); break;
//        default : puts("1,2아님"); break;
//    }
//    puts("입니다.");
//}


// 3. switch case 문의 break에 대하여 알아봅시다.
//#include <stdio.h>
//int main()
//{
//    int number =1;
//    switch(number){
//        case 1 : printf("하나");
//        case 2 : printf("둘");
//        default : puts("1,2아님");
//    }
//    puts("입니다.");
//}
// 하나둘1,2아님
// 입니다.



// 4. 키보드로부터 입력된 값을 사용하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int number;
//    printf("정수를 입력 하세요 :");
//    scanf("%d", &number);
//    switch(number){
//        case 1: printf("1번을 누르셨습니다~");break;
//        case 2: printf("2번을 누르셨습니다~");break;
//        case 3: printf("3번을 누르셨습니다~");break;
//        case 4: printf("4번을 누르셨습니다~");break;
//        default : printf("1~4번이외의 키를 누르셨습니다~");
//    }
//}




// 숙제
// Question 1
//#include <stdio.h>
//int main()
//{
//    int num;
//    printf("복권번호를 입력 하세요 : ");
//    scanf("%d", &num);
//
//    switch(num){
//        case 2: printf("=> 축하합니다!!! 1등에 당첨되셨습니다.\n   상금은 10000000원입니다.\n");break;
//        case 5: printf("=> 축하합니다!!! 2등에 당첨되셨습니다.\n   상금은 5000000원입니다.\n");break;
//        case 6: case 7:
//            printf("=> 축하합니다!!! 3등에 당첨되셨습니다.\n   상금은 5000원입니다.\n");break;
//        default: printf("=> 안됐군요ㅠㅠ 꽝입니다~\n   다음 기회를 이용하세요.\n");
//    }
//}



// Question 2
//#include <stdio.h>
//int main()
//{
//    int first,second;
//    char operator;
//
//    printf("첫 번째 수를 입력 하세요  : ");
//    scanf("%d", &first);
//    printf("연산자(+ - * /)를 입력 하세요    : ");
//    scanf(" %c", &operator);
//    printf("두 번째 수를 입력 하세요  : ");
//    scanf("%d", &second);
//
//    switch(operator){
//        case '+': printf("=>%d %c %d = %d\n", first,operator,second, first+second);break;
//        case '-': printf("=>%d %c %d = %d\n", first,operator,second, first-second);break;
//        case '*': printf("=>%d %c %d = %d\n", first,operator,second, first*second);break;
//        case '/': printf("=>%d %c %d = %d\n", first,operator,second, first/second);break;
//        default : printf("=>연산자가 잘못 입력되었습니다.\n");
//    }
//}



// Question 3
//#include <stdio.h>
//int main()
//{
//    int age;
//    printf("나이를 입력 하세요 : ");
//    scanf("%d", &age);
//
//    switch(age / 10){
//        case 1:
//            printf("=>당신은 10대\n");break;
//        case 2:
//            printf("=>당신은 20대\n");break;
//        case 3:
//            printf("=>당신은 30대\n");break;
//        default: printf("=>당신은 기타누락자\n");
//    }
//}



// Question 4
//#include <stdio.h>
//int main()
//{
//    int num;
//    printf("번호를 입력 하세요 : ");
//    scanf("%d", &num);
//
//    switch(num){
//        case 1: case 2:
//            printf("=>A등급\n"); break;
//        case 3: case 4:
//            printf("=>B등급\n"); break;
//        case 5: case 6:
//            printf("=>C등급\n"); break;
//        default: printf("=>X등급\n");
//    }
//}



// Question 5
//#include <stdio.h>
//int main()
//{
//    int kor,eng,math;
//    float aver;
//    printf("국어 영어 수학 점수를 입력 하세요 : ");
//    scanf("%d%d%d", &kor, &eng, &math);
//    aver = (kor + eng + math) / 3.;
//
//    switch((int)aver/10){
//        case 9: case 10:
//            printf("참 잘 하셨습니다\n"); break;
//        case 7: case 8:
//            printf("좀 더 노력 하세요\n"); break;
//        case 6:
//            printf("많이 많이 노력 하세요\n");break;
//        default: printf("다음 학기에 재수강 하세요\n");
//    }
//}


// Question 6
//#include <stdio.h>
//int main()
//{
//    int num;
//    printf("정수를 입력하시오 : ");
//    scanf("%d", &num);
//
//    switch(num){
//        case 1: case 3: case 5:
//            printf("=>홀수\n"); break;
//        case 2: case 4:
//            printf("=>짝수\n"); break;
//        default: printf("1에서 5사이의 수를 입력하세요\n");
//    }
//}
