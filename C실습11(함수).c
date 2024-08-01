// 1. 함수를 호출하여 봅시다.
//#include <stdio.h>
//void good()
//{
//    printf("정말");
//    printf("미안");
//}
//
//int main()
//{
//    puts("늦어서");
//    good();
//    puts("합니다");
//    getchar();  //  c=getchar()== scanf("%c", &ch), 아무거나 키보드 하나 누를때까지 기다림
//    good();
//}



// 2. 다음 프로그램을 실행시키면 어떤 결과가 출력되는지 예측하고 확인하여 봅시다.
//#include <stdio.h>
//void printout1()
//{
//    printf("바다로 가요 ~~");
//}
//void printout2()
//{
//    printf("시원한 파도소리!!! ");
//}
//void printout3()
//{
//    printf("\n돌고래가 보여요");
//}
//void main()
//{
//    int i;
//    printout1();
//    for(i=1; i<=3; i++)
//    {
//        printout2();
//    }
//    printout3();
//}
//// 바다로 가요 ~~시원한 파도소리!!! 시원한 파도소리!!! 시원한 파도소리!!!
//// 돌고래가 보여요



// 3. 인수, 매개변수가 있는 함수를 사용하여 봅시다.
//#include <stdio.h>
//void good(int a)
//{
//    printf("%d 마리의 뻐구기\n", a);
//}
//int main()
//{
//    int cnt=10;
//    good(3);
//    good(cnt);
//}
//// 3 마리의 뻐구기
//// 10 마리의 뻐구기



// 4. 다음 프로그램의 실행결과를 예측하고 확인하여 봅시다.
//#include <stdio.h>
//void sub1(int a)
//{
//    int i;
//    for(i=1; i<=a; i++)
//    {
//        printf("반갑다\n");
//    }
//}
//void sub2()
//{
//    printf("안녕~~\n");
//}
//void main()
//{
//    puts("출력합니다");
//    sub1(3);
//    puts("*********");
//    sub1(10);
//    sub2();
//}
//// 출력합니다
//// 반갑다
//// 반갑다
//// 반갑다
//// *********
//// 반갑다 * 10.
//// 안녕~~



// 5. 반환 값이 있는 함수를 호출하여 봅시다.
//#include <stdio.h>
//int retvalue()
//{
//    int a,b;
//    a=2; b=3;
//    return(a+b);
//}
//int main()
//{
//    int a;
//    a=retvalue();
//    printf("결과=%d\n", a);
//}
//// 결과=5



// 6. 다음 프로그램의 실행결과를 예측하고 확인하여 봅시다.
//#include <stdio.h>
//void out(char a[], int n)
//{
//    int i;
//    for(i=1; i<=n; i++)
//    {
//        printf("%s\n", a);
//    }
//}
//int main()
//{
//    puts("출력 합니다");
//    out("안녕", 3);
//    puts("*********");
//    out("안녕", 10);
//    puts("종료 합니다");
//}
// 출력합니다
// 안녕
// 안녕
// 안녕
// *********
// 안녕 * 10
// 종료 합니다



// 7. 매개변수, 반환 값이 있는 함수를 호출하여 봅시다.
//#include <stdio.h>
//int sum(int num1, int num2)
//{
//    int c;
//    c = num1 + num2;
//    return (c);
//}
//int main()
//{
//    int a,b,tot;
//    a = 100;
//    b = 200;
//    tot = sum(a,b);
//    printf("합= %d\n", tot);
//    printf("합= %d\n", sum(30, 50));
//}
//// 합= 300
//// 합= 80




// 8. 함수를 main()함수 아래에 선언할 경우를 살펴 봅시다.
//#include <stdio.h>
//int AbsoCompare(int num1, int num2);
//int GetAbsoValue(int num);
//
//int main()
//{
//    int num1, num2;
//    printf("두 개의 정수 입력: ");
//    scanf("%d %d", &num1, &num2);
//    printf("%d와 %d중 절대값이 큰 정수: %d \n",
//           num1, num2, AbsoCompare(num1, num2));
//    return 0;
//}
//
//int AbsoCompare(int num1, int num2)
//{
//    if(GetAbsoValue(num1) > GetAbsoValue(num2))
//        return num1;
//    else
//        return num2;
//}
//
//int GetAbsoValue(int num)
//{
//    if (num<0)
//        return num * (-1);
//    else
//        return num;
//}


// 여기서부터 설명
// 9. 러시안 룰렛 게임을 작성하여 봅시다.  // ??? 배열에서
//#include <stdio.h>
//#include <stdlib.h> // what is this
//#include <time.h>
//
//int playRussianRoulette(int nTurns, int nBullets)
//{
//    int start = rand() % nTurns;    // 디폴트가 0
////    printf("%d", rand());
//    printf("\n총을 돌렸습니다. %d번부터 시작합니다.\n", start + 1);
//    while (1){
//        int pos = rand() % 6;
//        printf("[%d]\t탄창을 무작위로 돌렸습니다.\n", start +1);
//        printf("\t엔터를 누르면 격발됩니다...");
//        getchar();  // 이거는 왜 쓰는거임?
//        if (pos < nBullets) break;
//        printf("\t휴~~~ 살았습니다!!!\n");
//        start = (start + 1) % nTurns;
//    }
//    printf("\t빵~~~~~~~~~!!!\n");
//    return start + 1;
//}
//int main()
//{
//    int nTurn, nBullets;
//    srand((unsigned)time(NULL));
//
//    printf("게임 인원 (예:2) ==> ");
//    scanf("%d", &nTurn);
//    printf("총알 개수 (6미만) ==> ");
//    scanf("%d", &nBullets);
//    getchar();
//
//    int bang = playRussianRoulette(nTurn, nBullets);
//    printf("\n -----> %d번 참가자가 총에 맞았습니다.\n", bang);
//}



// *** 매개변수의(parameter) 초기 값 이해
// 1. 매개변수를 이해하여 봅시다.
//#include <stdio.h>
//void disp()      // C does not support defulat arguments
//{
//    printf("1");
//    //printf("당신은 %s입니다 \n", (s==1 ? "남자":"여자"));
//}
//void disp1(int s)      // C does not support defulat arguments
//{
//    printf("2");
//
//    //printf("당신은 %s입니다 \n", (s==1 ? "남자":"여자"));
//}
//void disp(int s=0, int b=0)      // C does not support defulat arguments
//{
//    printf("3");
//
//    //printf("당신은 %s입니다 \n", (s==1 ? "남자":"여자"));
//}
//int main()
//{
//    disp();
//    disp(1);
//    disp(2,10);
//    getchar();
//}




// 2. 다음 프로그램의 실행결과를 예측하고 확인하여 봅시다.
//#include <stdio.h>
//int IsUpper(char m) { return (m >=65 && m <=90 ? 1 : 0);}
//int IsLower(char m) { return (m >=97 && m <=122 ? 1 : 0);}
//int IsAlpha(char m) { return (IsLower(m) || IsUpper(m) ? 1 : 0);}
//
//
//int main()
//{
//    printf("%d\n", IsUpper('A'));   //  1
//    printf("%d\n", IsLower('A'));   //  0
//    printf("%d\n", IsAlpha('A'));   //  1
//
//}



// ** 지역변수(local) 전역변수의(global) 이해
// 1. 지역변수를 사용하여 봅시다. (Local)
//#include <stdio.h>
//int main()
//{
//    int cnt;    // local variable - main 안에
//    for (cnt=0; cnt<3; cnt++)
//    {
//        int num=0;
//        num++;  // local varialbe - for문 안에
//        printf("%d번째 반복, 지역변수 num은 %d. \n", cnt+1, num);
//    }
//    if (cnt==3)
//    {
//        int num=7;
//        num++;
//        printf("if문 내에 존재하는 지역변수 num은 %d. \n", num);
//    }
//    return 0;
//}



// 2. 전역변수를 사용하여 봅시다. (Global)
//#include <stdio.h>
//void Add(int val);
//int num;    // 전역변수는 기본 0으로 초기화됨
//
//int main()
//{
//    printf("num: %d \n", num);  // 0
//    Add(3);     // 3
//    printf("num: %d \n", num);      // 3
//    num++;      // 4
//    printf("num : %d \n", num);     // 4
//    return 0;
//}
//
//void Add(int val)
//{
//    num += val;
//}



// 숙제
// Question 1
//#include <stdio.h>
//void Sum(int a,int b)
//{
//    printf("%d + %d = %d\n", a, b, a+b);
//}
//
//int main()
//{
//    int num1, num2;
//    printf("두개의 수를 입력하시오 : ");
//    scanf("%d%d", &num1, &num2);
//    Sum(num1, num2);
//}



// Question 2
//#include <stdio.h>
//int myabs(n)
//{
//    if (n<0)
//        return -n;
//    else
//        return n;
//}
//int main()
//{
//    int input1;
//    scanf("%d", &input1);
//    printf("%d\n", myabs(input1));
//}


// Question 3
//#include <stdio.h>
//int mymax(a,b)
//{
//    if (a>b)
//        return a;
//    else
//        return b;
//}
//int main()
//{
//    printf("%d\n", mymax(10, 30));
//}



// Question 4
//#include <stdio.h>
//int mymin(a,b, c, d)
//{
//    int min=a;
//    if (b<min) min=b;
//    if (c<min) min=c;
//    if (d<min) min=d;
//    return min;
//}
//
//int main()
//{
//    int first, second, third, fourth;
//    printf("4개의 수를 입력 하세요 : ");
//    scanf("%d%d%d%d", &first, &second, &third, &fourth);
//    printf("가장 작은 수는 %d입니다\n", mymin(first, second, third, fourth));
//}



// Question 6
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void determine(rnd)
//{
//    int result;
//    printf("사용자 : ");
//    scanf("%d", &result);
//
//    if (result==rnd) printf("맞았습니다\n");
//    else printf("틀렸습니다 ㅠㅠ\n");
//}
//
//int main()
//{
//    int i,rnd;
//    srand((unsigned)time(NULL)); // 난수의 초기화
//
//    while(1)
//    {
//        char answer;
//        printf("동전을 던졌습니다.\n");
//        rnd = rand()%2;  // 0~2까지의 난수를 발생
//        determine(rnd);
//
//        getchar();
//        printf("계속 하시겠습니까 ? (y/n) ");
//        scanf("%c", &answer);
//
//        if (answer=='n') break;
//    }
//}




// Question 7
//#include <stdio.h>
//int sum(a,b)
//{
//    int result=0;
//    for (int i=a; i<=b; i++)
//    {
//        result += i;
//    }
//    return result;
//}
//
//
//int main()
//{
//    printf("합= %d\n", sum(1,10)+sum(1,100)+sum(50,60));
//}



// Question 10
//#include <stdio.h>
//void comments(n)
//{
//    switch(n/10){
//        case 8: case 9:
//            printf("=> 최고입니다!!!\n"); break;
//        case 7:
//            printf("=> 좀 더 노력하세요~\n"); break;
//        default: printf("=> 안됐군요 재수강입니다 ㅠㅠ\n");
//    }
//}
//int main()
//{
//    int result;
//    printf("점수를 입력 하세요 : ");
//    scanf("%d", &result);
//    comments(result);
//}





// Question 12
//#include <stdio.h>
//int prime_number(n)
//{
//    int i;
//    int determine=1;
//    for (i=2; i<n; i++)
//    {
//        if (n%i==0)   // if뒤에 ; 있으면 큰일남 - ; 뜻은 if가 끝난다는거
//        {
//            determine=0;
//            break;
//        }
//    }
//    return determine;
//}
//
//
//int main()
//{
//    int n=8;
//    if(prime_number(n)) printf("%d 은 소수\n", n);
//    else printf("%d 은 소수아님\n", n);
//}




// Question 14
//#include <stdio.h>
//void prime(a,b)
//{
//    printf("=> ");
//    int i, j;
//    for (i=a+1; i<b; i++)
//    {
//        for (j=2; j<i; j++)
//        {
//            if (i%j==0) break;
//        }
//        if (i==j)
//        {
//            printf("%d ", i);
//        }
//    }
//    printf("\n");
//}
//
//int main()
//{
//    int start, end;
//    printf("시작 값 을 입력 하세요 : ");
//    scanf("%d", &start);
//
//    printf("끝 값 을 입력 하세요 : ");
//    scanf("%d", &end);
//
//    prime(start,end);
//}



// Question 15
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int cnt1=0, cnt2=0, cnt3=0, cnt4=0, cnt5=0, cnt6=0;
//void dice()
//{
//    int rnd;
//    rnd = rand()%6+1;  // 1~100까지의 난수를 발생
//    printf("주사위를 던집니다 : %d번\n", rnd);
//    switch(rnd)
//    {
//        case 1: cnt1++; break;
//        case 2: cnt2++; break;
//        case 3: cnt3++; break;
//        case 4: cnt4++; break;
//        case 5: cnt5++; break;
//        case 6: cnt6++; break;
//    }
//}
//void determine()
//{
//    int side=1, max= cnt1;
//    if (cnt2>max)
//    {
//        max = cnt2;
//        side = 2;
//    }
//    else if (cnt3>max)
//    {
//        max = cnt3;
//        side =3;
//    }
//    else if (cnt4>max)
//    {
//        max = cnt4;
//        side = 4;
//    }
//    else if (cnt5>max)
//    {
//        max = cnt5;
//        side = 5;
//    }
//    else if (cnt6>max)
//    {
//        max = cnt6;
//        side = 6;
//    }
//    printf("가장 많이 던져진 면은 %d면이고 %d회입니다~\n", side, max);
//}
//
//
//int main()
//{
//    srand((unsigned)time(NULL)); // main이 시작하고 한번만 하면 됨
//    for (int i=1; i<=50; i++)
//    {
//        dice();
//    }
//    printf("%10s", "<<결과>>\n");
//    printf("1면 : %d번\n", cnt1);
//    printf("2면 : %d번\n", cnt2);
//    printf("3면 : %d번\n", cnt3);
//    printf("4면 : %d번\n", cnt4);
//    printf("5면 : %d번\n", cnt5);
//    printf("6면 : %d번\n", cnt6);
//
//     determine();
//}





// Question 16
//#include <stdio.h>
//void multipication_table(n)
//{
//    for (int i=1; i<=9; i++)
//    {
//        printf("%d * %d = %d\n", n, i, n*i);
//    }
//}
//int main()
//{
//    int dan;
//    while (1)
//    {
//        printf("구구단을 입력하세요 : ");
//        scanf("%d", &dan);
//        if (dan==0)
//        {
//            printf("종료\n");
//            break;
//        }
//        else if (dan<2 || dan >9)
//        {
//            printf("0~9단 사이만 입력하세요 ~\n");
//            continue;
//        }
//        multipication_table(dan);
//    }
//}



// Question 17
//#include <stdio.h>
//int my_isupper(word)
//{
//    int determine=1;
//    if (word>=97 && word<=122)
//    {
//        determine=0;
//    }
//    return determine;
//}
//
//int main()
//{
//    char word = 'G';
//    if (my_isupper(word)) printf("true\n");
//    else printf("false\n");
//}



// Question 18
//#include <stdio.h>
//int my_isupper(word)
//{
//    int determine=1;
//    if (word>=97 && word<=122)
//    {
//        determine=0;
//    }
//    return determine;
//}
//
//int main()
//{
//    char word = 'G';
//    if (my_isupper(word)) printf("true\n");
//    else printf("false\n");
//}



// Question 19
//#include <stdio.h>
//void my_che(input)
//{
//    if ((input>=97 && input<=122) || (input>=65 && input <= 90)) printf("%c 는 문자입니다\n", input);
//    else if (input>=48 && input<=57) printf("%c 는 숫자입니다\n", input);
//}
//int main()
//{
//    char input = '9';
//    my_che(input);
//}


// Question 20
//#include <stdio.h>
//char my_trans(input)
//{
//    char word;
//    if (input>=97 && input<=122)
//    {
//        word = input-32;
//    }
//    else if (input>=65 && input<=90)
//    {
//        word = input+32;
//    }
//    return word;
//}
//
//int main()
//{
//    char input = 'D';
//    printf("%c\n", my_trans(input));
//}



// Question 21
//#include <stdio.h>
//int cnt_add=0, cnt_minus=0, cnt_multiple=0, cnt_divide=0;
//void addition(int num1, int num2)
//{
//    printf("연산결과 =>%d\n", num1+num2 );
//    cnt_add++;
//    printf("덧셈은 총 %d번 실행되었습니다\n", cnt_add);
//}
//void subtraction(int num1, int num2)
//{
//    printf("연산결과 =>%d\n", num1-num2 );
//    cnt_minus++;
//    printf("뺄셈은 총 %d번 실행되었습니다\n", cnt_minus);
//
//}
//void multiplication(int num1, int num2)
//{
//    printf("연산결과 =>%d\n", num1*num2 );
//    cnt_multiple++;
//    printf("곱셈은 총 %d번 실행되었습니다\n", cnt_multiple);
//
//}
//void division(int num1, int num2)
//{
//    printf("연산결과 =>%d\n", num1/num2 );
//    cnt_divide++;
//    printf("나눗셈은 총 %d번 실행되었습니다\n", cnt_divide);
//}
//
//int main()
//{
//    while (1)
//    {
//        int num1, num2;
//        char operator;
//        printf("연산을 입력하시오 : ");
//        scanf("%d %c %d", &num1, &operator, &num2);
//        if (operator=='?') break;
//        if (operator=='+') addition(num1, num2);
//        else if (operator=='-') subtraction(num1,num2);
//        else if (operator=='*') multiplication(num1,num2);
//        else division(num1, num2);
//    }
//}



// Question 22
//#include <stdio.h>
//int num, a=0, b=1, c=0;
//void fibonacci(n)
//{
//    for (int i=1;i<=n;i++)
//    {
//        a = b;
//        b = c;
//        c = a+b;
//        printf("%d+",c);
//    }
//}
//int main()
//{
//    int num;
//    printf("피보나치의 번째 : ");
//    scanf("%d", &num);
//
//    fibonacci(num);
//    printf("\n=>%d번째수열은 %d입니다.\n", num, c);
//}


// Question 23
//#include <stdio.h>
//void my_factorial(num)
//{
//    int result=1;
//    for (int i=num; i>=1; i--)
//    {
//        result *= i;
//    }
//    printf("%d\n", result);
//}
//int main()
//{
//    int num=3;
//    my_factorial(num);
//}


// Question 24 - 러시안 룰렛은 배열에서


