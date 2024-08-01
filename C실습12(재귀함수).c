// 1. 재귀호출에 대하여 알아봅시다.
//#include <stdio.h>
//int main()
//{
//    printf("안녕");
//    main();
//}
// 무한루프 안녕


// 2. 1씩 감소된 값을 매개변수에 전달시켜봅시다.
//#include <stdio.h>
//void KK (int a)
//{
//    if (a==0) return;
//    KK(a-1);
//    printf("%3d", a);
//}
//int main()
//{
//    KK(2);
//}
////   1  2



// 3. 1씩 증가된 값을 매개변수에 전달시켜봅시다.
//#include <stdio.h>
//void DispNum(int a)
//{
//    if(a==3) return;
//    DispNum(a+1);
//    printf("%3d", a);
//}
//void main()
//{
//    DispNum(0);
//}
////   2  1  0




// 1. 다음 프로그램의 실행결과를 예측하시오.
//#include <stdio.h>
//void KK1(int N)
//{
//    if (N==0) return;
//    KK1(N-1);
//    printf("%3d", N);
//}
//void KK2(int a, int N)
//{
//    printf("%3d", a);
//    if (a==N) return;
//    KK2(a+1, N);
//    printf("%3d", a);
//}
//int main()
//{
//    KK1(3); printf("\n");
//    KK2(1,3); printf("\n");
//}
////   1  2  3
////   1  2  3  2  1



// 2. 다음 프로그램의 실행결과를 예측하시오.
//#include <stdio.h>
//int Sum1(int N) {return (N<=1? N:N+Sum1(N-1)); }
//int Sum(int a, int N) {return (N<=a? a:N+Sum(a, N-1)); }
//int Pow(int a, int N) {return (N<=1? a: a* Pow(a, N-1)); }
//int Fac(int N) {return (N<=1? 1:N*Fac(N-1)); }
//
//int main()
//{
//    printf("%d\n", Sum1(3) );   // 6
//    printf("%d\n", Sum(1,3) );  // 6
//    printf("%d\n", Pow(2,3) );  // 8
//    printf("%d\n", Fac(3) );    // 6
//}



// 3. 다음 프로그램의 실행결과를 예측하시오.
//#include <stdio.h>
//void Disp1(int a, int b)
//{
//    if (a > b) return;
//    printf("%3d", a); Disp1(a+1, b);
//}
//void Disp2(int a, int b)
//{
//    if (a<b) return;
//    printf("%3d", a); Disp2(a-1, b);
//}
//void Disp(int a, int b)
//{
//    if (b>a) Disp1(a,b);
//    else Disp2(a, b);
//    printf("\n");
//}
//int main()
//{
//    int a,b;
//    a=1; b=3; Disp(a,b);    Disp(b, a);
//}
////   1  2  3
////   3  2  1



// 4. 다음 프로그램의 실행결과를 예측하시오.     ?? 아직 array 안배웠음
//#include <stdio.h>
//void BubbleSort(int ary[], int len);
//int main()
//{
//    int arr[4] = {3, 2, 1, 4};
//    int i;
//    BubbleSort(arr, sizeof(arr)/sizeof(int));
//    for (i=0; i<4; i++)
//        printf("%d ", arr[i]);
//    printf("\n");
//    return 0;
//}
//void BubbleSort(int ary[], int len)
//{
//    int i,j;
//    int temp;
//
//    for (i=0; i<len-1; i++)
//    {
//        for(j=0; j<(len-i)-1; j++)
//        {
//            if (ary[j]<ary[j+1])
//            {
//                temp = ary[j];
//                ary[j] = ary[j+1];
//                ary[j+1]= temp;
//            }
//        }
//    }
//}






//5. 숫자로 된 각 자릿수를 문자단어로 바꾸어 봅시다.
//#include<stdio.h>
//#include<string.h>
//char str[10];
//char *getword(int n)
//{
//    switch(n%10){
//        case 0:strcpy(str, "zero ");break;
//        case 1:strcpy(str, "one ");break;
//        case 2:strcpy(str, "two ");break;
//        case 3:strcpy(str, "three ");break;
//        case 4:strcpy(str, "four ");break;
//        case 5:strcpy(str, "five ");break;
//        case 6:strcpy(str, "six ");break;
//        case 7:strcpy(str, "seven ");break;
//        case 8:strcpy(str, "eight ");break;
//        case 9:strcpy(str, "nine ");break;
//    }
//    return str;
//}
//void dispword(int n)
//{
//    if(n<10) printf("%s", getword(n));
//    else
//    {
//        dispword(n/10);
//        printf("%s", getword(n));
//    }
//}
//
//int main()
//{
//    int n;
//    printf("정수를 입력:");
//    scanf("%d", &n);
//    dispword(n);
//}
//// if n==3, three
//// if n== 700, seven zero zero



// Question 1
//#include <stdio.h>
//void repet(int n)
//{
//    if (n==8) return;
//    printf("%3d", n);
//    repet(n+1);
//}
//int main()
//{
//    int num=1;
//    repet(num);
//}


// or


//#include <stdio.h>
//void repet(int n)
//{
//    if (n==0) return;
//    repet(n-1);
//    printf("%3d", n);
//}
//int main()
//{
//    int num=7;
//    repet(num);
//}



// Question 2
//#include <stdio.h>
//void repet(int n)
//{
//    if (n==6) return;
//    repet(n+1);
//    printf("%3d", n);
//}
//int main()
//{
//    repet(1);
//}



// Question 3
//#include <stdio.h>
//void repet(int n)
//{
//    if (n==11) return;
//    repet(n+1);
//    printf("#");
//}
//int main()
//{
//    repet(1);
//}



// Question 4
//#include <stdio.h>    // for문 써서 풀었음
//void repet(int n)
//{
//    if (n==11) return;
//    repet(n+1);
//    printf("#");
//}
//int main()
//{
//    for(int i=1; i<=5; i++)
//    {
//        repet(1);
//        printf("\n");
//    }
//}


// or   - 재귀로만 풀었음

//#include <stdio.h>
//void rows(int n)
//{
//    if (n==11) return;
//    rows(n+1);
//    printf("#");
//}
//void lines(int n)
//{
//    if (n==6) return;
//    lines(n+1);
//    rows(1);
//    printf("\n");
//}
//int main()
//{
//    lines(1);
//}



// Question 5
//#include <stdio.h>
//void rows(int n)
//{
//    if (n==11) return;
//    printf("%3d", n);
//    rows(n+1);
//}
//void lines(int n)
//{
//    if (n==6) return;
//    lines(n+1);
//    rows(1);
//    printf("\n");
//}
//int main()
//{
//    lines(1);
//}



// Question 6
//#include <stdio.h>
//void rows(int n)
//{
//    if (n<=0) return;
//    rows(n-1);
//    printf("#");
//
//}
//void lines(n)
//{
//    if (n==0) return;
//    lines(n-1);
//    rows(n);
//    printf("\n");
//}
//int main()
//{
//    lines(5);
//}



// Question 7
//#include <stdio.h>
//void rows(int n)
//{
//    if (n<=0) return;
//    rows(n-1);
//    printf("#");
//
//}
//void lines(n)
//{
//    if (n==6) return;
//    lines(n+1);
//    rows(n);
//    printf("\n");
//}
//int main()
//{
//    lines(1);
//}





// Question 8
//#include <stdio.h>
//int addition(int n)
//{
//    printf("%d+", n);
//    if (n==10) return n;
//    else return n + addition(n+1);
//    addition(n+1);
//}
//int main()
//{
//    printf("=%d\n",addition(1));
//}




// Question 9
//#include <stdio.h>
//int Factorial(int n)
//{
//    if (n==1)
//    {
//        return n;
//    }
//    else
//    {
//        return n*Factorial(n-1);
//    }
//}
//int main()
//{
//    printf("1! = %d \n", Factorial(1));
//    printf("2! = %d \n", Factorial(2));
//    printf("3! = %d \n", Factorial(3));
//    printf("4! = %d \n", Factorial(4));
//    printf("10! = %d \n", Factorial(10));
//    return 0;
//}



// Question 10
//#include <stdio.h>
//int addition(int a, int b)
//{
//    if (a==b) return a;
//    else return a + addition(a+1, b);
//}
//
//int main()
//{
//    int first, second;
//    printf("첫 번째수 입력 : ");
//    scanf("%d", &first);
//    printf("첫 번째수 입력 : ");
//    scanf("%d", &second);
//
//    printf("%d부터 %d까지의 합 = %d\n", first, second, addition(first,second));
//}



// Question 11
//#include <stdio.h>
//#include <stdio.h>
//int multiplication(int n)
//{
//    if (n==1)
//    {
//        return n;
//    }
//    else
//    {
//        return n*multiplication(n-1);
//    }
//}
//int main()
//{
//    int num;
//    printf("어디까지의 곱을 계산할까요 ? ");
//    scanf("%d", &num);
//
//    printf("1부터 %d까지의 곱은 %d\n", num, multiplication(num));
//}



// Question 12
//#include <stdio.h>
//int Recursive(int n)
//{
//    if (n==1)
//        return 1;
//    if(n==0)
//        return 0;
//    else
//    {
//        return (Recursive(n-1) + Recursive(n-2));
//    }
//}
//int main()
//{
//    printf("%d\n", Recursive(6));   // 8
//    return 0;
//}



// Question 13 ?? array 아직 안배움




// Question 14
//#include <stdio.h>
//int exponential(int n)
//{
//    if (n==1) return 2;
//    else return 2 * exponential(n-1);
//}
//int main()
//{
//    int power;
//    printf("2의 몇승을 구할까요 ? ");
//    scanf("%d", &power);
//
//    printf("%d\n", exponential(power));
//}




// Question 15
//#include <stdio.h>
//void binary(int n)
//{
//    if (n==1)
//  {
//      printf("%d", n);
//      return;
//  }
//    binary(n/2);
//    printf("%d", n%2);
//}
//int main()
//{
//    int input1;
//    printf("10진수 값 입력 : ");
//    scanf("%d", &input1);
//
//    binary(input1);
//    printf("\n");
//}




// Question 16
//#include <stdio.h>
//void recursive(int n)
//{
//    if (n==0) return;
//    printf("%3d", n%10);
//    recursive(n/10);
//}
//int main()
//{
//    int num;
//    printf("정수 입력 : ");
//    scanf("%d", &num);
//
//    recursive(num);
//}



// Question 17
//#include <stdio.h>
//void recursive(int n)
//{
//    if (n<1) return;
//    recursive(n/10);
//    printf("%3d", n%10);
//}
//int main()
//{
//    int num;
//    printf("정수 입력 : ");
//    scanf("%d", &num);
//
//    recursive(num);
//}



// Question 18. 다음의 순환적인 프로그램을 반복 구조를 사용환 비순환적 프로그램으로 바꾸시오.
//int recursive(int n)
//{
//    if (n==1) return 1;
//    else return (n * recursive(n-1));
//}



// 비순환적 프로그램
//#include <stdio.h>
//int main()
//{
//    int result =1;
//    for (int i=1; i<=6; i++)
//    {
//        result *= i;
//    }
//    printf("%d\n", result);
//}

    

// Question 19
//#include <stdio.h>
//int addition(int n)
//{
//    if (n==1) return 1;
//    else return n + addition(n-1);
//}
//int main()
//{
//    int num=6;
//    printf("%d\n", addition(num));
//}



// Question 20
//#include <stdio.h>
//int result(int n)
//{
//    if (n==1) return 1;
//    else return n*n*n + result(n-1);
//}
//
//int main()
//{
//    int num;
//    printf("몇까지 ? ");
//    scanf("%d", &num);
//
//    printf("%d\n", result(num));
//}



// Question 21 - 배열 아직 안배움




// Question 22
//#include <stdio.h>
//void odd(start, end)
//{
//    if (start == end) return;
//    if (start%2!=0)
//    {
//        printf("%3d", start);
//    }
//    odd(start+1, end);
//}
//
//int main()
//{
//    int start, end;
//    printf("시작값 : ");
//    scanf("%d", &start);
//    printf("끝 값 : ");
//    scanf("%d", &end);
//
//    odd(start+1, end);
//}
