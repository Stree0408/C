// 1. 변수의 주소 개념과 참조값을 알아 봅시다.
//#include <stdio.h>
//int main()
//{
//    short a;
//    short b;
//    short c;
////    printf("%d  %d  %d", &a, &b, &c);
//    a= 10; *&b= *&a +2; *&a+=4;     // b=12, a=14
//    c = a+b;    // 14+12=26
//    printf("%d\n",c);
//}



// 2. 배열의 주소 개념과 참조값을 알아보고, k 값을 예측하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    long M[3] = {10, 20, 30};
//    long K;
//    K = *M + M[1] + *(M+1);     // K=10+20+20=50
//    K+= *&M[2] + *M + 1;    // K=50+(30+10+1)=91
//    printf("%d\n", K);
//}



// 3. 문자가 배열어 어떻게 기억되는지 알아보고 실행결과를 확인하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char M[] = {'A', 'B', 'C', 'D'};
//    int N = sizeof(M);    // 4
//    int a;
//    *&M[0] += 32;  *(M+1)+=1; ++*(M+2); *(M+3)+=2;  //aCDF
//    for (a=0; a<N; a++)
//    {
//        putchar(*(M+a));
//    }
//}



// 4. 2차원 배열과 주소의 증감은 어떤 의미인지 알아 봅시다.
//#include <stdio.h>
//int main()
//{
//    short M[2][2]= { {10,20}, {30,40} };
//    short a;
//    a= M[0][0] + M[0][1] + M[1][0] + M[1][1];   // a=10+20+30+40=100
//    a+= ( *&M[1][0] + *M[0] + *(M[1]+1) );      // a+=30+10+40, a==180
//    a-= **M;    // a-=10, a==170
//    a+= *(*(M+1) +1);   // a+=40, a==210
//    printf("%d\n", a);  // a=210
//}




// 5. sum 변수에 최종적으로 기억되는 값을 기재하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    short M[2][2] = { {10,20}, {30,40} };
//    short a, sum=0;
//    *M[0]=15;   *(M[0] +1) =25;
//    *M[1]=35;   M[0][3]=45;
//    **M=17;     *(*(M+1)+1)=47;
//    *(*M+1)=27;     **(M+1)=37;
//    M[1][-1]+=2;
//    for (a=0;a<4;a++)
//    {
//        printf("%d\n", M[0][a]);
//        sum += M[0][a];
//    }
//    printf("%d\n", sum);    // 17+29+37+47=130
//}




// 6. 배열 M과 변수 cnt 에 최종적으로 기억되는 값을 기재하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    short M[2][2][2] = { {{10,20}, {30,40}}, {{50,60}, {70,80}} };
//    int a,b,c;
//    short cnt=0;
//
//    ++*M[0][0];
//    *M[0][1]+=2;
//
//    *M[1][0]+=3;
//    *M[1][1]+=4;
//    ++*(M[0][0]+1);
//
//    *(M[0][1]+1)+=2;
//    *(M[1][0]+1)+=3;
//
//    *(*(M[0]+0)) += 1;
//
//    *(*(M[0]+0)+1) = *(*M[0]+1) + *(**M+1) + 2 ;
//    *(*(M[0]+1)) = *(*(*M+1)) +3;
//
//    for (int i=0; i<8; i++)
//    {
//        printf("%d ", M[0][0][i]);  // 12 44 35 42 53 63 74 80
//    }
//}




// 여기서부터 **
// 7. 포인터 변수에 대하여 알아 봅시다.
//#include <stdio.h>
//int main()
//{
//    short a,b;
//    short *ap;
//    short c;
//    *&a=5;      ap = &b;    *ap=a;      *ap+=2;
//    a = a + *ap;
//    **&ap+=3;
//    c=a+b;
//    printf("%d\n",c);
//}



// 8. 포인터 변수와 배열의 관계를 알아 봅시다.
//#include <stdio.h>
//int main()
//{
//    short M[] = {10,20,30,40};
//    short *ap;
//    short c;
//    ap = M;
//    c= *ap++;
//    c += *(ap+1);
//    c+= *++ap;
//    c += ap[1]--;
//    c += ap[1];
//    printf("%d\n", c);
//}



// 9. 문자열 배열과 포인터 변수를 알아 봅시다.
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char M[] = {'P', 'A', 'E', '\0'};
//    char *ap;
//    int a=0;
//    ap = M + strlen(M) -1;
//    printf("%c\n", *ap--);  *--ap = 'T'; printf("%s\n", ap);  // ap가 무슨 뜻?
//    printf("%c\n", *++ap);  printf("%c\n", ap[a++]);
//    printf("%c\n", ap[--a]);
//}



// 10. c 변수에 최종적으로 기억되는 값을 기재하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    short M[2][2] = { {10,20}, {30,40} };
//    short *ap;
//    short c;
//    ap=M[0]; c=*ap; ap++; c+= *ap;
//    ap+=2;  c+=*ap;     c+=*ap--;   c += *--ap;
//    printf("%d %d %d %d\n", M[0][0], M[0][1], M[1][0], M[1][1]);
//    c += *ap; c += ap[-1]; c+= ++*ap; ap++;
//    c += ap[1];
//    printf("%d\n", ++*ap);
//    printf("%d\n", c);
//}



// 11. c 변수에 최종적으로 기억되는 값을 기재하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    short M[2][2] = { {10,20}, {30,40} };
//    short *ap;
//    short c;
//    ap=M[0]; c= *ap;
//    ap++; c+= *ap;
//    ap+=2; c+=*ap;
//    c+= *ap;
//    c += *--ap;
//    printf("%d %d %d %d\n", M[0][0], M[0][1], M[1][0], M[1][1]);
//    c += *(ap-2);
//    c += ap[-1];
//    c += ++*ap;     ap++;   c-=ap[-1];
//    printf("%d\n", ++*ap);
//    printf("%d\n", c);
//}



// 12. sum 변수에 최종적으로 기억되는 값을 기재하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    short M[2][2] = { {10,20}, {30,40} };
//    short *ap, *bp;
//    short a, sum=0;
//    ap = M[0];  // ap = 100
//    bp = M[0] + sizeof(M)/sizeof(M[0][0]) - 1;  // bp = M[0] + 3 = 106
//
//    for (a=0; a< sizeof(M)/sizeof(M[0][0]); a++)    // for (a=0; a<4; a++)
//        sum += *ap++ + *bp--;
//
//
//
//    *--ap=45; *++bp=15; a=0; bp[++a]++; ++ap[-a--]; ap=M[0];
//
//    for ( ; a<sizeof(M)/sizeof(M[0][0]); a++)
//        sum -= ap[a];
//
//    ap = M[1]-sizeof(M[0])/sizeof(M[0][0]);     // ???? 이건 또 무슨말? 104-4
//    printf("%d\n", *ap);
//    printf("%d\n", sum);
//    printf("%d %d %d %d \n",M[0][0], M[0][1], M[1][0], M[1][1]);
//}


//#include <stdio.h>
//int main()
//{
//    short M[2][2] = { { 10,20}, {30, 40}};
//    short *ap, *bp;
//    short a, sum=0;
//    ap = M[0];
//    bp = M[0] + sizeof(M)/sizeof(M[0][0]) - 1;
//    
//    printf("%d", *ap-*bp);
//    for (a=0; a<sizeof(M)/sizeof(M[0][0]); a++)
//        sum += *ap++ + *bp--;
//    
//    *--ap=45; *++bp=15; a=0; bp[++a]++; 
////    printf("%d", bp);
//    ++ap[-a--]; ap=M[0];
//    for (; a<sizeof(M)/sizeof(M[0][0]); a++)
//        sum -= ap[a];
//    
//    ap = M[1]-sizeof(M[0])/sizeof(M[0][0]);
//    printf("%d\n", sum);
//    printf("%d %d %d %d \n",M[0][0],M[0][1],M[1][0],M[1][1] );
//}



// 13. 실행결과를 기재하여 봅시다.
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char M[] = "ABC";
//    char *ap="ABC";   // 미리 선언 안되있는것을 넣을때! 
//    puts(M);
//    puts(ap);
//    ap="DEF";
//    puts(ap);
//    printf("%c", ap[1]);    // E
//    strcpy(M, "YZ");
//    puts(M);
//}


// 14. 실행결과를 기재하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char M[4] = "ABC";
//    printf("%c%c%c\n", M[0], M[1], M[2]);
//    *M='X';
//    *(M+1)='Y';
//    *(M+2)='Z';
//    puts(M);
//}


// 15. 실행결과를 기재하여 봅시다.
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char M[2][5]={"ABC", "XYZ"};
//    printf("%c%c%c\n", M[0][0], M[0][1], M[0][2]);      // ABC
//    puts(&M[1][0]);     //XYZ
//    *(M[0]+1)='F';      *(M[1]+1)='E';
//    puts(M[0]);     puts(*M);
//    strcpy(M[1],"GHI");
//    puts(*(M+1));   // GHI
//    printf("%c\n", **M);
//}



// 16. 실행결과를 기재하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char M[]="ABC";
//    char *ap=M;
//    *ap++ += 1;
//    *++ap += 3;
//    ap -= 2;
//    ap[1]+=2;
//    puts(M);
//}


// 17. 실행결과를 기재하여 봅시다.      // 배열에서 null 뒤에는 쓰레기값 or 비워져있음
//#include <stdio.h>
//int main()
//{
//    char M[2][7]={"KOREA", "SEOUL"};
//    char *ap=M[0];
//    puts(M[0]);
//    puts(ap);
//    ap+=sizeof(M[0]);
//    puts(ap++);
//    printf("%c\n", ap[2]);
//    printf("%c\n", *ap--);
//    puts(ap);
//    printf("%c\n", *++ap);
//}



// 18. 실행결과를 기재하여 봅시다.  ??
//#include <stdio.h>
//int main()
//{
//    char *ap = "KOREA";
//    char M[5] = {0};
//    int a=0;
//    M[0] = ap[a++];
//    M[1] = *++ap;
//    M[2] = ap[++a];
//    M[3] = ap[a-1];
//    puts(M);
//}









// 보충
// 1. 다음 결과를 예측하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int num1=100, num2=100;
//    int * pnum;
//
//    pnum = &num1;   // 포인터 pnum이 num1을 가리킴
//    (*pnum) += 30;  // num1 += 30과 동일
//
//    pnum=&num2;     // 포인터 pnum이 num2를 가리킴
//    (*pnum)-=30;    // num2-=30과 동일
//
//    printf("num1:%d, num2:%d \n", num1, num2);
//    return 0;
//}


// 2. 다음 결과를 예측하여 봅시다. (1차원배열의 포인터)
//#include <stdio.h>
//int main()
//{
//    int arr[3] = {15, 25, 35};
//    int * ptr=&arr[0];      // int * ptr = arr; 과 동일한 문장
//
//    printf("%d %d \n", ptr[0], arr[0]);
//    printf("%d %d \n", ptr[1], arr[1]);
//    printf("%d %d \n", ptr[2], arr[2]);
//    printf("%d %d \n", *ptr, *arr);
//    return 0;
//}


// 3. 다음 결과를 예측하여 봅시다.(1차원배열의 포인터)
//#include <stdio.h>
//int main()
//{
//    int arr1[3] = {1, 2, 3};
//    double arr2[3]= {1.1, 2.2, 3.3};
//    printf("%d  %g \n", *arr1, *arr2);  // 1    1.1
//    *arr1 += 100;
//    *arr2 += 120.5;
//    printf("%d  %g \n", arr1[0], arr2[0]);  // 101  121.6
//    return 0;
//}


// 4. 배열에 요소들이 메모리 상에 연속적으로 배치되는지 알아봅시다.
//#include <stdio.h>
//int main()
//{
//    int arr[3]={0, 1, 2};
//    printf("배열의 이름: %p \n", arr);
//    printf("첫 번째 요소: %p \n", &arr[0]);
//    printf("두 번째 요소: %p \n", &arr[1]);
//    printf("세 번째 요소: %p \n", &arr[2]);
//    return 0;
//}



// 5. 포인터 변수배열을 이해하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int num1=10, num2=20, num3=30;
//    int *arr[3]={&num1, &num2, &num3};
//
//    printf("%d \n", *arr[0]);
//    printf("%d \n", *arr[1]);
//    printf("%d \n", *arr[2]);
//    return 0;
//}



// 6. 포인터의 + 의미를 알아봅시다.
//#include <stdio.h>
//int main()
//{
//    int arr[3] = {11, 22, 33};
//    int *ptr=arr;   // int * ptr = &arr[0]; 과 같은 문장
//
//    printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2));
//    printf("%d ", *ptr);    ptr++;
//    printf("%d ", *ptr);    ptr++;
//    printf("%d ", *ptr);    ptr--;
//    printf("%d ", *ptr);    ptr--;
//    printf("%d ", *ptr);    printf("\n");
//    return 0;
//}



// 7. 포인터 변수와 포인터의 + 의미를 알아봅시다. ?? 배열이 아니라 그냥 int, double 형인데도 주소더하면 사이즈비례해서 증가?
//#include <stdio.h>
//int main()
//{
//    int tr1; double tr2;
//    int *ptr1=&tr1;
//    double *ptr2=&tr2;
//    printf("%d %d %d \n", ptr1, ptr1+1, ptr1+2);
//    printf("%d %d %d \n", ptr2, ptr2+1, ptr2+2);
//    ptr1++;
//    ptr2++;
//    printf("%d %d \n", ptr1, ptr2);
//    return 0;
//}





// 9. 문자형 포인터 변수를 알아봅시다. (에러 고치기)
// 틀린 코드
//#include <stdio.h>
//int main()
//{
//    char str1[]="My String";
//    char *str2="Your String";
//    printf("%s %s \n", str1, str2);
//    str1 = "Our String";    // 문제점을 해결하여 봅시다. (strcpy 쓰기)
//    str2 = "Our String";
//    printf("%s %s \n", str1, str2);
//    return 0;
//}


// 고친 코드
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str1[100]= "My String";
//    char *str2="Your String";
//    printf("%s %s \n", str1, str2);
//    strcpy(str1, "Our String"); // 배열을 벗어나면 안됨!!  왜 strcpy 짧으면 안되는거임????
//    str2 = "Our String";
//    printf("%s %s \n", str1, str2);
//    return 0;
//}



// 12. 다음 결과를 예측하여 봅시다. (2차원 배열과 포인터)???
//#include <stdio.h>
//int main()
//{
//    int num1=10, num2=20, num3=30, num4=40;
//    int arr2d[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
//    int i,j;
//    int * whoA[4]={&num1, &num2, &num3, &num4};     // 포인터 배열   ?? 포인터 배열에 주소가 저장되는건 이해하겠는데, 그럼 고유의 주소도 있음? int 형이니까 4씩 증가하는
//    int (*whoB)[4] = arr2d;     // 배열 포인터
//
//    printf("%d %d %d %d \n", *whoA[0], *whoA[1], *whoA[2], *whoA[3]);
//    for (i=0; i<2; i++)
//    {
//        for (j=0; j<4; j++)
//            printf("%d ", whoB[i][j]);
//        printf("\n");
//    }
//    return 0;
//}



// 13. 2중포인터 변수에 대하여 알아 봅시다.
//#include <stdio.h>
//int main()
//{
//    int num1=10, num2=20, num3=30;
//    int *ptr1=&num1;
//    int *ptr2=&num2;
//    int *ptr3=&num3;
//    int *ptrArr[]={ptr1, ptr2, ptr3};
//    int **dptr=ptrArr;      // ????
//    printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]) );
//    printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]) );
//    return 0;
//}




// ** 모든 프로그램은 배열을 사용하지 말고 포인터를 사용하여 작성하여 봅시다.
// Question 1.
//#include <stdio.h>
//int main()
//{
//    char str[]= "computer";
//    char *ap; 
//    ap=str;
//    for (int i=0; i<sizeof(str); i++)
//        puts(ap+i);
//}
//
//
// or
//#include <stdio.h>
//int main()
//{
//    char *ap = "computer";
//    for (int i=0; i<sizeof(ap); i++)
//        puts(ap+i);
//}



// Question 2
//#include <stdio.h>
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int *ptr = arr;
//    int size = sizeof(arr)/sizeof(arr[0]);
//
//    for (int i=1; i<size; i+=2)
//        printf("%d ", *(ptr+i) );
//    printf("\n");
//}


// or
//#include <stdio.h>
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int *ptr = &arr[1];
//    int size = sizeof(arr)/sizeof(arr[0]);
//
//    for (int i=1; i<size; i+=2)
//    {
//        printf("%d ", *ptr);
//        ptr+=2;
//    }
//    printf("\n");
//}


// Question 3
//#include <stdio.h>
//void SaChick(double a, double b, double *ap)
//{
//    ap[0] = a+b;
//    ap[1] = a-b;
//    ap[2] = a*b;
//    ap[3] = a/b;
//    // or
//    *ap = a+b;
//    *(ap+1) = a-b;
//    *(ap+2) = a*b;
//    *(ap+3) = a/b;
//
//}
//int main()
//{
//    double a=5, b=2;
//    double M[4];
//    SaChick(a, b, M);
//    printf("%.1f    %.1f\n", M[0], M[1]);
//    printf("%.1f    %.1f\n", M[2], M[3]);
//}



// ** 숙제 **
// Question 1. 변환 함수들을 살펴봅시다. (convert string literals to numerical data types)
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int a;
//    long b;
//    double c;
//    a = atoi("12");     b = atol("1234000");    c = atof("12.5");
//    printf("%f\n", a+b+c);
//}



// Question 2. 참, 거짓을 얻는 함수들을 살펴 봅시다.
//#include <stdio.h>
//#include <ctype.h>   // Includes the header for character classification functions like islower() and isdigit().
//int main()
//{
//    printf("%d\n", islower('a'));   printf("%d\n", isdigit('9'));   // digit의 기준 (0~9까지의 숫자가 문자로 들어있어야된다)
//    printf("%d\n", isupper('A'));   printf("%d\n", !islower('a'));
//    printf("%d\n", isdigit('a'));
//}



// Question 3. 문자열 관련 함수들을 살펴 봅시다.
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char M[11];
//    strcpy(M, "ABC");
//    puts(M);    // ABC
//    strncpy(M, "DEFG", 2);  // null은 카피안함
//    puts(M);    // DEC
//    strcat(M, "HI");
//    puts(M);
//    strncat(M, "JKLM", 2);
//    puts(M);
//    printf("%d\n", strlen(M));
//    printf("%d\n", strcmp("abc", "ABC"));
////    printf("%d\n", _strcmpi("abc", "ABC"));
//
//    printf("%d\n", strncmp("ABCD", "ABDE", 2));
////    printf("%d\n", strnicmp("abcd", "ABDE", 2));
//    strcpy(M, "ABCDCE");    puts(M);
//    printf("%d\n", strchr(M, 'C') - M);
//}




// Questino 4
//#include <stdio.h>
//void Myupper(char *str1)
//{
//    if (*str1 >= 97 && *str1 <= 122)
//        *str1-=32;
//}
//int main()
//{
////    printf("--->");
//    char str = getchar();
//    Myupper(&str);
//    putchar(str);
//}




// Question 5
//#include <stdio.h>
//#include "mystring.hpp"
//int main()
//{
//    char str[10];
//    gets(str);
//    printf("%d", Mystrlen(str));
//}



// Question 6  
//#include <stdio.h>
//#include "mystring.hpp"
//int main()
//{
//    char str[10];
//    gets(str);
//
//    Mystrreverse(str);
//    puts(str);
//}



// Question 7  
//#include <stdio.h>
//#include "mystring.hpp"
//int main()
//{
//    char str[30];
//    printf("문자열을 입력하시오 : ");
//    gets(str);
//    
//    Mynospace(str);
//    puts(str);    
//}



// Question 8   
//#include <stdio.h>
//#include "mystring.hpp"
//int main()
//{
//    char M[6]="ABc";
//    myStrcat(M, "CD");
//    puts(M);
//}



// Question 9
//#include <stdio.h>
//#include "mystring.hpp"
//int main()
//{
//    char M[4];
//    myStrcpy(M, "AB");
//    puts(M);
//}



// Question 10
//#include <stdio.h>
//#include "mystring.hpp"
//int main()
//{
//    char M[4]={0, };
//    myStrncpy(M, "ABCD", 3);
//    puts(M);
//}



// Question 11
//#include <stdio.h>
//#include "my_math .h"
//int main()
//{
//    int num=220;
//    myabs(&num);
//    printf("%d\n", num);
//}



// Question 12      // 길이가 다를때도 null이랑 문자랑 비교해서 괜찮음
//#include <stdio.h>
//#include "mystring.hpp"
//int main()
//{
//    printf("%d\n", MyStrcmp("abcde", "abcd"));
//}



// Question 13
//#include <stdio.h>
//#include "mystring.hpp"
//int main()
//{
//    char s1[]="ABCD";
//    char s2[]="abcd";
//    printf("%d\n", MyStricmp(s1,s2));
//    puts(s1);
//    puts(s2);
//}



// Question 14
//#include <stdio.h>
//#include "mystring.hpp"
//int main()
//{
//    char s1[]="ABCD";
//    char s2[]="abcd";
//    printf("%d\n", MyStrincmp(s1,s2, 2));
//    puts(s1);
//    puts(s2);
//}




// Question 15
//#include <stdio.h>
//#include "mystring.hpp"
//int main()
//{
//    char M[]="YOU LOVE YOU YOOLOVE LOVE ME  . . .YOU kkk";
//    char find[10];
//    printf("찾을 단어 : ");
//    gets(find);
//
//    Mysearch(M, find);
//}



// Question 16
//#include <stdio.h>
//#include "mystring.hpp"
//int main()
//{
//    char M[]="YOU LOVE YOU YOOLOVE LOVE ME  . . .YOU";
//    char find[10];
//    printf("찾을 단어 : ");
//    gets(find);
//
//    printf("%s = %d개존재\n", find, Mysearch2(M, find));
//}




// Question 17
//#include <stdio.h>
//#include "mystring.hpp"
//int main()
//{
//    char M[200]="YOU LOVE YOU YOOLOVE LOVE ME  . . . YOU";
//    char find[20];
//    char change[20];
//
//    printf("찾을 문자열 : ");
//    gets(find);
//
//    printf("바꿀 문자열 : ");
//    gets(change);
//
//
//    MyStrChange(M, find, change);
//    puts(M);
//}


// 배열은 메모리를 잡아놓고 시작
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char s[3]={0};
//    strcpy(s, "ABCD");
//    puts(s);
//}


// 포인터 변수만 이렇게 가능
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char *s;
//    s="ABCD";
//    puts(s);
//}




// Question 18
//#include <stdio.h>
//#include "my_math .h"
//int main()
//{
//    int num1=10, num2=20;
//    int *ptr1, *ptr2;
//    ptr1=&num1, ptr2=&num2;
//    printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
//    SwapIntPtr(ptr1, ptr2);    
//    printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
//    return 0;
//}





// Question 19`
//#include <stdio.h>
//#include "mystring.hpp"
//int main()
//{
//    char M[50];
//    char name[50];
//    char number[50];
//    char address[50];
//
//    printf("이름을 입력하시오 : ");
//    gets(name);
//
//    printf("전화번호를 입력하시오 : ");
//    gets(number);
//
//    printf("주소를 입력하시오 : ");
//    gets(address);
//
//
//    MyMultiStrCat(M, name, number, address);
//    puts(M);
//}



// Question 20
//#include <stdio.h>
//#include "mystring.hpp"
//int main()
//{
//    char M[100]={0};
//    char num1[70];      // 이렇게되면 num1="1234"일때 뒤에는 싹다 null임?
//    char num2[70];
//    printf("첫번째 숫자를 입력하세요 : ");
//    gets(num1);
//
//    printf("두번째 숫자를 입력하세요 : ");
//    gets(num2);
//
//    MyStrCalculation(M, num1, num2);
//    puts(M);
//}




// 두번째 풀어보기
// Question 4
//#include <stdio.h>
//#include "MyString2.h"
//int main()
//{
//    char word = getchar();
//    MyUpper(&word);
//    putchar(word);
//}


// Question 5
//#include <stdio.h>
//#include "MyString2.h"
//int main()
//{
//    char word[30];
//    gets(word);
//    printf("%d", Mystrlen(word) );
//}



// Question 6
//#include <stdio.h>
//#include "MyString2.h"
//int main()
//{
//    char word[30];
//    gets(word);
//    Mystrreverse(word);
//    puts(word);
//}
