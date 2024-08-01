// 1. 포인터 변수를 이용하여 배열 모양으로 공간에 접근하여 봅시다.
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//   char *ap, **bp;
//   ap = (char *)malloc(4);
//   strcpy(ap, "ABC");  puts(ap);   printf("%c\n", ap[1]);  // B
//   bp = &ap;
//   puts(*bp);  printf("%c", bp[0][1]);
//   free(ap);
//}



//#include <stdio.h>
//int main()
//{
//    int *p1;
//    char *p2;
//    double *p3;
//    int n;
//    p1=&n;
//    printf("%d %d %d ",sizeof(p1), sizeof(p2), sizeof(p3));
//}




// 2. 2중 포인터 변수를 이용하여 동적 공간에 접근하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//    char **ap;
//    ap = (char **)malloc(sizeof(char *)*2);
//    ap[0] = (char *)malloc(3);
//    ap[1] = (char *)malloc(3);
//    strcpy(ap[0], "AB");
//    strcpy(ap[1], "CD");
//    puts(ap[0]);    puts(ap[1]);
//    free(ap[0]);    free(ap[1]);
//    free(ap);
//}



// 3. 1차원 포인터 배열을 사용하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char *M[]={"ABC", "DEF"};
//    puts(M[0]);
//    puts(M[1]);
//    putchar(M[1][1]);
//}
//


// 4. 2중 포인터 변수에 주소변수의 시작 주소값을 대입하여 사용하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char *M[]={"ABC", "DEF"};
//    char **ap;
//    ap = M;
//    puts(*ap);  // ABC
//    puts(ap[1]);    // DEF
//    putchar(ap[1][1]);  // E
//}



// 5. 2중 포인터 변수를 활용하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char *M[2]= {"AB", "CD"}, *N[2]={"EF", "GH"};
//    char **ap[]= {M,N};
//    puts(ap[0][0]); // AB
//    puts(ap[0][1]); // CD
//    puts(ap[1][0]); // EF
//    puts(ap[1][1]); // GH
//    putchar(ap[1][1][1]); // H
//}



// 6. 2차원 포인터 배열을 이해하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char *M[2][2] = {{"AB", "CD"}, {"EF", "GH"} };
//    puts(M[0][0]);
//    puts(M[0][1]);
//    puts(M[1][0]);
//    putchar(M[1][1][1]);
//}



// 7. 실행결과를 기재하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//    char m[]="ABC";
//    char *ap=(char *) malloc(sizeof(m));
//    char *aap;
//    strcpy(ap, m); aap=m; puts(ap); puts(aap);  printf("%c", *ap++);
//    printf("%c", ap[0]);    ap--;   printf("%c", *aap); free(ap);
//}



// 8. M 변수에 최종적으로 담겨지는 값을 기재하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int M;
//    int *ap;
//    int **bp;
//    int ***cp;
//    ap = &M;
//    bp=&ap;
//    cp=&bp;
//    *ap=1;
//    **bp+=2;
//    ***cp+=3;
//    printf("%d=n", M);  // 6
//}



// 9. M배열의 요소에 최종적으로 담겨지는 값을 기재하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char M[] = "YYYY";
//    char *ap, **bp;
//    ap=M;   bp=&ap;  *ap='A';  ap++;  **bp='B';
//    bp[0][3]='C';
//    ap[1]='D';
//    puts(M);
//}



// 10. 두 개의 수를 swap하는 SwapIntPtr 수를 완성하여 봅시다.
//#include <stdio.h>
//void SwapIntPtr(int **dp1, int **dp2)
//{
//    int tmp = **dp1;
//    **dp1 = **dp2;
//    **dp2 = tmp;
//}
//
//int main()
//{
//    int num1=10, num2=20;
//    int *ptr1, *ptr2;
//    ptr1=&num1, ptr2=&num2;
//    printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2); // 10 20
//
//    SwapIntPtr(&ptr1, &ptr2);
//    printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
//    return 0;
//}




// 11. 다음에서 틀린 부분을 찾고 실행결과와 같이 출력되도록 수정하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int n=20;
//    int *np = &n;
//    int **npp = &np;
//
//    printf("%d %d %d \n", n, *np, **npp);
//}



// 12. 다음과 같이 3차원 배열에 값을 기억시키고 주소값을 확인한 후 결과를 예측하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char carr3[2][2][3]=
//    {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'};
//
//    printf("%d %d %d %d\n",
//           carr3, carr3[0], carr3[0][0], carr3[0][0][0]);
//
//    printf("%d %d %d %d\n",
//           carr3+1, carr3[0]+1, carr3[0][0]+1, carr3[0][0][0]+1);
//
//    printf("%d %d %d %d\n",
//           carr3+1, *carr3+1, **carr3+1, ***carr3+1);
//}




// 13. 2차원 배열에서 배열 이름 기억용 주소변수를 이해하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char M[2][3] = {"AB", "CD"};
//    char (*ap)[3];
//    ap=M;
//    puts( ap[0] );
//    puts( ap[1] );
//    putchar(ap[1][1]);  // D
//}
 


// 14. 3차원 배열의 포인터변수를 이해하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char M[2][2][3]= { {"AB", "CD"}, {"EF", "GH"} };
//    char (*ap)[2][3];
//    ap=M;
//    puts(ap[0][0]);     // AB
//    puts(ap[1][0]);     // EF
//    putchar(ap[1][1][1] );      // H
//}



// 15. 2차원 배열의 포인터배열에 대하여 이해하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char M[2][3] = {"AB", "CD"};
//    char N[2][3] = {"EF", "GH"};
//    char (*ap[2]) [3];
//    ap[0] = M;  ap[1]=N;
//    puts( ap[0][0] );   // AB
//    puts( ap[0][1] );   // CD
//    puts( ap[1][0] );   // EF
//    putchar( ap[0][0][0] ); putchar( ap[0][0][1] );
//    putchar( ap[1][0][0] ); putchar( ap[1][0][1] ); // ABEF
//}



// 16. char 형 1차원 배열을 2차원 배열처럼 사용하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char carr[4] = {'A', 'B', 'C', 'D'};
//    char (*ap)[2] = (char(*)[2]) carr;
//
//    printf("%c %c %c %c\n", carr[0], carr[1], carr[2], carr[3]);    // A B C D
//    printf("%c %c %c %c\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);    // A B C D
//}



// 17. int 형 1차원 배열을 2차원 배열처럼 사용하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int iarr[4] = {1,2,3,4};
//    int (*ap)[2] = (int(*)[2]) iarr;
//
//    printf("%d %d %d %d\n", iarr[0], iarr[1], iarr[2], iarr[3]);  // 1 2 3 4
//    printf("%d %d %d %d\n",ap[0][0], ap[0][1], ap[1][0], ap[1][1]);   // 1 2 3 4
//}



// 18. char 형 2차원 배열을 2차원 배열처럼 접근하는 포인터 변수를 사용하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char carr2[2][2]= {'A', 'B', 'C', 'D'};
//    char (*ap)[2] = (char(*)[2]) carr2;
//
//    printf("%c %c %c %c\n", carr2[0][0], carr2[0][1],
//           carr2[1][0],carr2[1][1]);    // A B C D
//    printf("%c %c %c %c\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);    // A B C D
//}



// 19. int 형 2차원 배열을 2차원 배열처럼 접근하는 포인터 변수를 사용하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int iarr2[2][2]={1,2,3,4};
//    int (*ap)[2] = iarr2; // 형변환 생략 (type이 같음!!)
//
//    printf("%d %d %d %d\n", iarr2[0][0], iarr2[0][1],
//           iarr2[1][0], iarr2[1][1]);   // 1 2 3 4
//    printf("%d %d %d %d\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);    // 1 2 3 4
//}



// 20. char 형 1차원 배열을 다차원 배열처럼 사용하여 봅시다.
//#include <stdio.h>
//int main( )
//{
//    char carr[12]={'A','B','C','D','E','F',
//        'G','H','I','J','K','L'};
//
//    char (*ap1)[4] = (char (*)[4])carr;
//    char (*ap2)[3] = (char (*)[3])carr;
//    char (*ap3)[2][3] = (char (*)[2][3])carr;
//
//    printf("%c%c%c%c%c%c%c%c%c%c%c%c\n",
//           ap1[0][0],ap1[0][1],ap1[0][2],ap1[0][3],
//           ap1[1][0],ap1[1][1],ap1[1][2],ap1[1][3],
//           ap1[2][0],ap1[2][1],ap1[2][2],ap1[2][3]);
//    printf("%c%c%c%c%c%c%c%c%c%c%c%c\n",
//           ap2[0][0],ap2[0][1],ap2[0][2],
//           ap2[1][0],ap2[1][1],ap2[1][2],
//           ap2[2][0],ap2[2][1],ap2[2][2],
//           ap2[3][0],ap2[3][1],ap2[3][2]);
//    printf("%c%c%c%c%c%c%c%c%c%c%c%c\n",
//           ap3[0][0][0],ap3[0][0][1],ap3[0][0][2],ap3[0][1][0],
//           ap3[0][1][1],ap3[0][1][2],ap3[1][0][0],ap3[1][0][1],
//           ap3[1][0][2],ap3[1][1][0],ap3[1][1][1],ap3[1][1][2]);
//}



// 21. 다차원 배열의 주소를 지정하는 포인터의 크기를 출력하여 봅시다.  ?? 포인터 변수는 8이고 int는 4여서??
//#include <stdio.h>
//int main()
//{
//    char carr[12]={'A','B','C','D','E','F',
//        'G','H','I','J','K','L'};
//
//    char (*ap1)[4] = (char (*)[4])carr;
//    char (*ap2)[3] = (char (*)[3])carr;
//    char (*ap3)[2][3] = (char (*)[2][3])carr;
//
//    printf("%d %d %d %d\n", sizeof(carr), sizeof(ap1), sizeof(ap2), sizeof(ap3));   // 12 8 8 8
//}



// 22. char형 1차원 배열을 1차원 배열처럼 접근하는 포인터 변수를 사용하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char carr2[2][2] = {'A','B','C','D'};
//    char *ap = (char *) carr2;
//
//    printf("%c %c %c %c\n",
//           carr2[0][0], carr2[0][1], carr2[1][0], carr2[1][1]);
//    printf("%c %c %c %c\n",
//           ap[0], ap[1], ap[2], ap[3]);
//}




// 23. int 형 2차우너 배열을 1차원 배열처럼 접근하는 포인터 변수를 사용하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int iarr2[2][2] = {10,20,30,40};
//    int *ap = (int *)iarr2;
//
//    printf("%d %d %d %d\n",
//           iarr2[0][0], iarr2[0][1], iarr2[1][0], iarr2[1][1]);
//    printf("%d %d %d %d\n",
//           ap[0], ap[1], ap[2], ap[3]);
//}



// 24. 배열처럼 사용하는 포인터 변수에 연산을 하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char c = 'A';
//
//    char (*ap1)[2] = (char (*)[2])&c;   // 2바이트씩 (2칸) 이동
//    char (*ap2)[4] = (char (*)[4])&c;   // 4바이트씩 (4칸) 이동
//    char (*ap3)[3][3] = (char (*)[3][3])&c; // 9바이트씩 (9칸) 이동
//
//    printf("%c %c %c\n", **ap1, **ap2, ***ap3);
//    printf("%c %c %c\n", ap1[0][0], ap2[0][0], ap3[0][0][0]);
//
//    printf("%d %d %d %d\n", ap1, ap1+1, ap1[0], ap1[1]);
//    printf("%d %d %d %d\n", ap2, ap2+1, ap2[0], ap2[1]);
//    printf("%d %d %d %d\n", ap3, ap3+1, ap3[0], ap3[1]);
//
//    printf("%d %d %d %d\n", ap3[0], ap3[0]+1, ap3[0][0], ap3[0][1]);
//}



// 25. 1차원 배열의 시작 주소값 기억용 매개변수를 살펴 봅시다.
//#include <stdio.h>
//void KK( char ap[])
//{
//    putchar(ap[0]);
//    putchar(ap[1]);   // AB
//}
//
//int main()
//{
//    char M[]="ABC";
//    KK( M );
//}




// 26. 2차원 배열의 시작 주소값 기억용 매개변수를 살펴 봅시다.
//#include <stdio.h>
//void KK (char ap[][3] )
//{
//    puts(ap[0]);    // AB
//    puts(ap[1]);    // CD
//
//}
//int main()
//{
//    char M[2][3] = {"AB", "CD"};
//    KK ( M );
//}




// 27. 3차원 배열의 시작 주소값 기억용 매개변수를 살펴 봅시다.
//#include <stdio.h>
//void KK (char ap[][2][3])     // 하나 움직이면 [2][3]씩 움직이는 *ap 포인터 변수
//{
//    puts(ap[0][0]);     // AB
//    puts(ap[1][1]);     // GH
//}
//int main()
//{
//    char M[2][2][3] = { { "AB", "CD"}, {"EF", "GH"} };
//    KK( M );
//}




// 숙제
// Question 1.
//#include <stdio.h>
//int main()
//{
//    int arr[5]= {10, 20, 30, 40, 50};
//    int *ap = arr;
//    printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
//    printf("%d %d %d %d %d\n", ap[0], ap[1], ap[2], ap[3], ap[4]);
//}



// Question 2
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//    int arr[2][2]= {{10,20}, {100,200}};
//    int (*ap)[2] = arr;     // 형변환 생략(type이 같음)
//
//    printf("%d %d %d %d\n", arr[0][0], arr[0][1], arr[1][0], arr[1][1]);
//    printf("%d %d %d %d\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);
// }




// Question 3
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int arr[6]={10,20,100,200,1000,2000};
//    int (*ap)[2] = (int(*)[2])arr;
//
//    printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
//    printf("%d %d %d %d %d\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1], ap[2][0], ap[2][1]);
//}




// Question 4
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void input_string(char (*sp)[20])
//{
//    for (int i=0; i<5; i++)
//    {
//        gets(*sp++);
//    }
//}
//
//void output_string(char (*sp)[20])
//{
//    for (int i=0; i<5; i++)
//    {
//        printf("%s\n", sp[i]);
//    }
//}
//int main()
//{
//    char str[5][20];
//    input_string(str);
//    output_string(str);
//}




// Question 5
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//void swap(**ap)
//{
//    char tmp[50];
//    strcpy(tmp, ap[0]);
//    strcpy(ap[0], ap[1]);
//    strcpy(ap[1], tmp);
//}
//int main()
//{
//    char str1[50];
//    char str2[50];
//    char **ap;
//    ap = (char **)malloc(sizeof(char *) *2);
//
//    printf("첫 번째 문자열을 입력하세요 : ");
//    ap[0] = gets(str1);
//
//    printf("두 번째 문자열을 입력하세요 : ");
//    ap[1] = gets(str2);
//
//    swap(ap);
//    printf("첫 번째 문자열 : %s\n", ap[0]);
//    printf("두 번째 문자열 : %s\n", ap[1]);
//}




// Question 6
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




// Question 7
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//    int num;
//    printf("몇 개의 단어를 입력하여 저장 할까요 ? :");
//    scanf("%d", &num);
//    char ***ap;
//    ap = (char ***)malloc(sizeof(char *)*2);
//    ap[0] =   (char **)malloc(sizeof(char *)*num);
//    ap[1] =   (char **)malloc(sizeof(char *)*num);
//
//    char str1[20];
//    char str2[20];
//
//    for (int i=0; i<num; i++)
//    {
//
//        printf("%d번째 단어 : ", i+1);
//        scanf("%s %s", str1, str2);
//        ap[0][i] = (char *) malloc(sizeof(char *)* strlen(str1));
//        ap[1][i] = (char *) malloc(sizeof(char *)* strlen(str2));
//        
//        strcpy(ap[0][i], str1);
//        strcpy(ap[1][i], str2);
//    }
//    printf("== 저장이 끝났습니다.\n");
//
//
//    int cnt=0;
//    char guess[50];
//    for (int j=0; j<num; j++)
//    {
//        printf("%s : ", ap[0][j]);
//        gets(guess);
//        if (strcmp(guess, ap[1][j]))
//            cnt++;
//    }
//    printf("%d \n", cnt);
//    
//}
//
//
//
//




// Question 6
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void addFruit(int num, char **ap)
//{
//    char fruit[20];
//    for (int i=0; i<num; i++)
//    {
//        scanf("%s", fruit); 
//        ap[i] = (char *) malloc ( strlen(fruit)+1 );
//        strcpy(ap[i], fruit);
//    }
//}
//
//void addFruit1(int num, char ***ap)
//{
//    char fruit[20];
//    for (int i=0; i<num; i++)
//    {
//        scanf("%s", fruit);
//        (*ap)[i] = (char *) malloc ( strlen(fruit)+1 );
//        strcpy((*ap)[i], fruit);
//    }
//}
//
//int main()
//{
//    int num;
//    printf("당신이 알고 있는 과일의 가지 수는 ? ");
//    scanf("%d", &num);
//    
//    char **ap;
//    ap = (char **)malloc(sizeof(char *) * num);   // 주소변수를 num개
//
////    addFruit(num, ap);
//    addFruit1(num, &ap);
//
//    printf("당신이 알고 있는 과일의 종류는");
//    for (int i=0; i<num; i++)
//        printf(" %s ", ap[i]);
//    printf("이었군요!\n");
//}




// Question 11
//#include <stdio.h>
//#include <string.h>
//void input(char (*ap)[10]) {
//
//    char fruit[10];
//    for (int i=0; i<5; i++) {
//        scanf("%s", fruit);
//        strcpy(ap, fruit);
//        ap++;
//    }
//}
//void output(char (*ap)[10]) {
//    for (int i=0; i<5; i++) {
//        puts((ap));
//        ap++;
//    }
//}
//int main() {
//    char arr[5][10];
//    input(arr);
//    output(arr);
//}




// Question 12
//#include <stdio.h>
//void set_max_ptr(int **pmax)
//{
//    int  max= (*pmax)[0];
//
//    for (int i=0; i<6; i++) {
//        if ((*pmax)[i] > max )
//            max = (*pmax)[i];
//    }
//    *pmax = &max;
//}
//int main()
//{
//    int m[6]={5,6,100,3,7,9};
//    int *pmax=m;
//    set_max_ptr(&pmax);
//    printf("%d\n", *pmax);
//    return 0;
//}



// or
//#include <stdio.h>
//int set_max_ptr(int **pmax) {
//    int  max= (*pmax)[0];
//
//    for (int i=0; i<6; i++) {
//        if ((*pmax)[i] > max )
//            max = (*pmax)[i];
//    }
//    return max;
//}
//int main() {
//    int m[6]={5,6,100,3,7,9};
//    int *pmax=m;
//    printf("%d\n", set_max_ptr(&pmax));
//    return 0;
//}





// Question 17
//#include <stdio.h>
//int main()
//{
//    int data[][2]= { {10,20}, {30,40}, {50,60}, {70,80}, {90,100} };
//    int (*ptr)[2] = data;
//    
//    printf("%d %d %d %d %d \n", ptr[0][0], ptr[1][0], ptr[2][0], ptr[3][0], ptr[4][0]);
//    printf("%d %d %d %d %d \n", ptr[0][1], ptr[1][1], ptr[2][1], ptr[3][1], ptr[4][1]);
//    printf("%d %d %d %d %d %d %d %d %d %d\n",
//           ptr[0][0], ptr[0][1], ptr[1][0], ptr[1][1], ptr[2][0],
//           ptr[2][1], ptr[3][0], ptr[3][1], ptr[4][0], ptr[4][1]);
//}




