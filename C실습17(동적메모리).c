 // 1. short형 동적공간을 할당하여 사용하여 봅시다.
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//    short a=5;
//    short *ap;
//    ap = (short*)malloc(2);
//    printf("%d\n", ap);     // %u = unsigned(-값이 없다, 양수값만 쓰겠다)
//    *ap=10;
//    printf("%d\n", *ap);    // 10
//    printf("%d\n", a + *ap);
//    free(ap);
//    printf("%d\n", *ap);    // 쓰레기 값
// }



// 2. 연속적인 동적공간을 할당하여 사용하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int *ptr1 = (int *)malloc(sizeof(int));
//    int *ptr2 = (int *)malloc(sizeof(int)*7);
//    int i;
//
//    *ptr1 = 20;
//    for (i=0; i<7; i++)
//        ptr2[i]=i+1;
//
//    printf("%d \n", *ptr1);
//    for (i=0; i<7; i++)
//        printf("%d", ptr2[i]);
//
//    free(ptr1);
//    free(ptr2);
//    return 0;
//}



// 3. char형 동적공간을 할당하여 사용하여 봅시다.
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//    char *ap;
//    ap = (char *)malloc(4);
//    strcpy(ap, "ABC");
//    printf("%u\n", ap);     puts(ap);
////    free(ap);
//    ap = (char *)malloc(4);
//    strcpy(ap, "DEF");
//    printf("%u\n", ap);     puts(ap);
//    free(ap);     // ap가 가지고있던 주소값(동적메모리 공간)을 버린다
//}




// 4. 다음 프로그램의 에러원인을 찾아보고 수정하여 봅시다.
// 틀린 코드
//#include <stdio.h>
//char * ReadUserName()     // 포인터 함수 : 주소를 리턴
//{
//    char name[30];    //  변수는 스택 메모리에 저장되서 범위를 벗어나면 메모리가 없어짐(해제됨)!!!
//    printf("What's your name? ");
//    gets(name);
//    return name;
//}
//
//int main()
//{
//    char *name1;
//    char *name2;
//    name1=ReadUserName();
//    printf("name1: %s \n", name1);
//    name2=ReadUserName();
//    printf("name2: %s \n", name2);
//    return 0;
//}


// 올바른 코드!!
//#include <stdio.h>
//#include <stdlib.h>
//char * ReadUserName()
//{
//    char *ap =(char *)malloc(30);
//    printf("What's your name? ");
//    gets(ap);
//    return ap;
//}
//
//int main()
//{
//    char *name1;
//    char *name2;
//    name1=ReadUserName();
//    printf("name1: %s \n", name1);
//    free(name1);
//    name2=ReadUserName();
//    printf("name2: %s \n", name2);
//    free(name2);
//    return 0;
//}




// 숙제
// Question 1
// 잘못된 코드
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int num;
//    int input;
//    printf("몇개의 수를 입력할까요 : ");
//    scanf("%d", &num);
//
//    int *ap= (int *)malloc(12);     // ????여기서 malloc(12) 넣었는데도 왜 잘됨??
//    for (int i=0; i<num; i++)
//    {
//        printf("%d번째 값 : ", i+1);
//        scanf("%d", &input);
//        ap[i] = input;
//    }
//
//    printf("입력한 값은 ");
//    for (int i=0; i<num; i++)
//        printf("%d ", ap[i]);
//    free(ap);
//}



// 정답
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int num;
//    int input;
//    printf("몇개의 수를 입력할까요 : ");
//    scanf("%d", &num);
//
//    int *ap= (int *)malloc(sizeof(int) * num);    // 이 부분
//    for (int i=0; i<num; i++)
//    {
//        printf("%d번째 값 : ", i+1);
//        scanf("%d", &input);
//        ap[i] = input;
//    }
//
//    printf("입력한 값은 ");
//    for (int i=0; i<num; i++)
//        printf("%d ", ap[i]);
//    free(ap);
//}



// Question 2
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//    srand((unsigned)time(NULL)); // 난수의 초기화
//
//    int n, sum=0;
//    printf("몇 개의 난수를 발생 할까요 ? ");
//    scanf("%d", &n);
//    int *ptr1 = (int *)malloc(sizeof(int) * n);
//    printf("=> ");
//
//    for (int i=0; i<n; i++)
//    {
//        ptr1[i] = rand()%100+1;
//        printf("%d ", ptr1[i]);
//        sum += ptr1[i];
//    }
//    printf("\n합=%d\n", sum);
//    free(ptr1);
//}



// Question 3
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int num, input, sum=0;
//    int max=-2147483648, min=2147483647;
//
//    printf("몇개의 수를 입력 하시겠습니까 ? ");
//    scanf("%d", &num);
//    int *ptr1 = (int *) malloc(sizeof(int) * num);   // (int *) -> int형의 포인터로 변환(casting)
////    int a  int *b
//    for (int i=0; i<num; i++)
//    {
//        printf("정수를 입력하세요 : ");
//        scanf("%d", &input);
//        ptr1[i] = input;
//        sum += ptr1[i];
//        if (ptr1[i] > max)
//            max = ptr1[i];
//        else if (ptr1[i] < min)
//            min = ptr1[i];
//    }
//    free(ptr1);
//    printf("합=%d\n", sum);
//    printf("평균=%.1f\n", (float)sum / num);
//    printf("최대값=%d\n", max);
//    printf("최소값=%d\n", min);
//}



// Question 4
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//char * ReadWord()
//{
//    char *ap =(char *)malloc(30);
//    printf("문자를 입력하세요 : ");
//    gets(ap);
//    return ap;
//}
//
//int main()
//{
//    char *word;
//    word=ReadWord();
//    for (int i=0; i<strlen(word) ; i++)
//    {
//        printf("%c->", word[i]);
//    }
//    free(word);
//    return 0;
//}



// Question 5
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//char * ReadWord()
//{
//    char *ap =(char *)malloc(30);
//    printf("문자를 입력하세요 : ");
//    gets(ap);
//    return ap;
//}
//
//int main()
//{
//    char *word;
//    word=ReadWord();
//    for (int i=strlen(word)-1; i>=0 ; i--)
//    {
//        printf("%c->", word[i]);
//    }
//    free(word);
//    return 0;
//}




// Question 6
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//char * ReadWord()
//{
//    char *word =(char *)malloc(15);
//    printf("과일이름 : ");
//    gets(word);
//    return word;
//}
//
//int main()
//{
//    char *ap =(char *)malloc(100);
//
//    for (int i=0; i<5 ; i++)
//    {
//        strcat(ap, ReadWord());     // 이렇게하면 메모리 누수되긴함
//        strcat(ap, " ");
//    }
//    printf("=>입력한 이름은 %s 입니다\n", ap);
//    free(ap);
//    return 0;
//}


// or

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void ReadWord(char *ap)
//{
//    char word[15];
//    printf("과일이름 : ");
//    gets(word);
//    strcat(ap, word);
//    strcat(ap, " ");
//}
//
//int main()
//{
//    char *ap =(char *)malloc(100);
//    for (int i=0; i<5 ; i++)
//    {
//        ReadWord(ap);
//    }
//    printf("=>입력한 이름은 %s 입니다\n", ap);
//    free(ap);
//    return 0;
//}



// 다차원배열포인터변수를 이용하여
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//// 입력 함수
//void readword(**ap)
//{
//    char word[15];
//    for (int i=0; i<5; i++)
//    {
//        printf("과일이름 : ");
//        gets(word);
//        ap[i] = (char *)malloc(strlen(word)+1);
//        strcpy(ap[i], word);    // 값을 옮기는거
//    }
//}
//// 출력함수
//void printword(**ap)
//{
//    printf("=> 입력한 이름은 ");
//    {
//        for (int i=0; i<5; i++)
//        {
//            printf("%s ",ap[i]);
//        }
//    }
//    printf("입니다\n");
//}
//
//int main()
//{
//    char **ap;
//    ap = (char **)malloc(sizeof(char *)*5);
//
//    readword(ap);
//    printword(ap);
//    for (int i=0; i<5; i++)
//    {
//        free(ap[i]);
//    }
//    free(ap);
//}
