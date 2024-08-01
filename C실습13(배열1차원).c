// *** 다음 프로그램을 입력하여 실행하고 배열을 이해하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int i;
//    int num[]= {40, 60, 200, 100, 30, 10, 80, 70, 50, 20};
//
//    for (i=0; i<10; i++)
//    {
//        printf("%4d", num[i]);
//    }
//}



// Question 1
//#include <stdio.h>
//int main()
//{
//    int i;
//    int num[10]= {40, 60, 200, 100, 30, 10, 80, 70, 50, 20};
//
//    printf("= 기억된 데이터 =\n");
//    for (i=0; i<10; i++)
//    {
//        printf("num[%d]=%d\n", i, num[i]);
//    }
//}



// Question 2
//#include <stdio.h>
//int main()
//{
//    int i;
//    int num[10]= {40, 60, 200, 100, 30, 10, 80, 70, 50, 20};
//
//    for (i=9; i>=0; i--)
//    {
//        printf("%4d", num[i]);
//    }
//}


// 3. 위의 배열을 다음과 같이 출력하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int i;
//    int num[10]= {40, 60, 200, 100, 30, 10, 80, 70, 50, 20};
//
//    for (i=1; i<10; i+=2)
//    {
//        printf("%4d", num[i]);
//    }
//}



// 4. 위의 배열에서 50 보다 큰 값만 출력하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int i;
//    int num[10]= {40, 60, 200, 100, 30, 10, 80, 70, 50, 20};
//
//    for (i=0; i<10; i++)
//    {
//        if (num[i] > 50) printf("%4d", num[i]);
//    }
//}



// 5. 위의 배열을 이용하여 다음과 같이 계산하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int i, sum=0, max, min, smax;
//    int num[10]= {40, 60, 200, 100, 30, 10, 80, 70, 50, 20};
//
//    for (i=0; i<10; i++)
//    {
//        if (i==0) max = min = num[i];
//        else if (i==1)
//        {
//            if (num[i] > max)
//            {
//                smax = max;
//                max = num[i];
//            }
//            else if (num[i] < min)
//            {
//                smax = min;
//                min = num[i];
//            }
//            else smax = num[i];
//        }
//        else
//        {
//            if (num[i]>max) max = num[i];
//            else if (num[i] > smax) smax=num[i];
//            else if (num[i]<min)
//            {
//                min = num[i];
//            }
//        }
//        sum += num[i];
//    }
//
//    printf("\n합  계 : %d\n", sum);
//    printf("평  균 : %d\n", sum/10);
//    printf("최대값 : %d\n", max);
//    printf("최소값 : %d\n", min);
//    printf("2번째 큰값 : %d\n", smax);
//}


// or
// better way


//#include <stdio.h>
//int main()
//{
//    int i, sum=0, max=-2147483648, smax= -2147483648, min=2147483647;
//    int num[10]= {40, 60, 200, 100, 30, 10, 80, 70, 50, 20};
//
//
//    for (i=0; i<10; i++)
//    {
//        if (num[i]>max)
//        {
//            smax = max;
//            max = num[i];
//        }
//        else if (num[i] > smax)
//        {
//            smax = num[i];
//        }
//        else if (num[i] < min)
//        {
//            min = num[i];
//        }
//        sum += num[i];
//    }
//    printf("\n합  계 : %d\n", sum);
//    printf("평  균 : %d\n", sum/10);
//    printf("최대값 : %d\n", max);
//    printf("최소값 : %d\n", min);
//    printf("2번째 큰값 : %d\n", smax);
//}



// Question 6
//#include <stdio.h>
//int main()
//{
//    int i, find;
//    printf("찾을 숫자 : ");
//    scanf("%d", &find);
//
//    int num[10]= {40, 60, 200, 100, 30, 10, 80, 70, 50, 20};
//
//    for (i=0; i<10; i++)
//    {
//        if (num[i]==find)
//        {
//            printf("%d번째에서 발견\n", i+1); break;
//        }
//    }
//    if (i==10) printf("발견못함\n");
//}



// Question 7
//#include <stdio.h>
//int main()
//{
//    int find, i;
//    int num[10]= {40, 60, 200, 100, 30, 10, 80, 70, 50, 20};
//
//    printf("찾을 숫자 : ");
//    scanf("%d", &find);
//
//    for (i=0; i<10; i++)
//    {
//        if (num[i] == find)
//        {
//            printf("뒤에서 %d번째에서 발견\n", 10-i); break;
//        }
//    }
//    if (i==10) printf("발견못함\n");
//}




// Question 8
//#include <stdio.h>
//int main()
//{
//    int i, cnt=0, sum=0;
//    int M[]={100, 20, 40, 50, 70, 80, 20, 5, 60, 30};
//
//    for (i=0; i<10; i++)
//    {
//        if (M[i] > 30)
//        {
//            sum += M[i]; cnt++;
//        }
//    }
//    printf("30보다 큰 수는 %d개이고 합은 %d\n", cnt, sum);
//}



// Question 9
//#include <stdio.h>
//int main()
//{
//    int i, cnt=0, sum=0;
//    int M[]={6, 8, 11, 12, 15, 16, 20, 21, 22, 24};
//
//    for (i=0; i<10; i++)
//    {
//        if (M[i] % 3==0 && M[i] % 4==0)
//        {
//            sum += M[i]; cnt++;
//        }
//    }
//    printf("3과4의 공배수개수 = %d 개\n", cnt);
//    printf("3과4의 공배수 합 = %d \n", sum);
//}


// Question 10
//#include <stdio.h>
//int main()
//{
//    int i, cnt=0, sum=0;
//    int M[]={6, 8, 11, 2, 15, 16, 20, 21, 22, 24};
//
//    for (i=0; i<10; i++)
//    {
//        printf("M[%d] : ",i);
//        for (int j=1; j<=M[i]; j++)
//        {
//            printf("#");
//        }
//        printf("\n");
//    }
//}



// Question 11
//#include <stdio.h>
//int main()
//{
//    int num, i;
//    int array[25];
//
//    for (i=0; i<20; i++)
//    {
//        printf("정수를 입력하세요 :  ");
//        scanf("%d", &array[i]);
//
//        if (array[i] == 0) break;
//    }
//    printf("입력한 수 : ");
//    for (int j=0; j<i; j++)
//    {
//        printf("%d ", array[j]);
//    }
//    printf("\n");
//    printf("반대로 출력 : ");
//    for (int j=i-1; j>-1; j--)
//    {
//        printf("%d ", array[j]);
//    }
//    printf("\n");
//}



// Question 12
//#include <stdio.h>
//int main()
//{
//    int teen=0, twenty=0, thirty=0, extra=0;
//    int M[]={10, 27, 25, 18, 9, 35, 13, 47};
//
//    for (int i=0; i<8; i++)
//    {
//        switch (M[i]/10){
//            case 1: teen++; break;
//            case 2: twenty++; break;
//            case 3: thirty++; break;
//            default : extra++;
//        }
//    }
//    printf("10대 값 = %d개  ", teen);
//    printf("20대 값 = %d개  ", twenty);
//    printf("30대 값 = %d개  ", thirty);
//    printf("기타 값 = %d개  ", extra);
//}



// Question 13
//#include <stdio.h>
//int age_list[15];
//void age_group()
//{
//    int teen=0, twenty=0, thirty=0, fourty=0, fifty=0;
//
//    printf("<<연령대별 인원>>\n");
//    for (int i=0; i<10; i++)
//    {
//        switch (age_list[i]/10)
//        {
//            case 1: teen++; break;
//            case 2: twenty++; break;
//            case 3: thirty++; break;
//            case 4: fourty++; break;
//            case 5: fifty++; break;
//        }
//    }
//    printf("10대=%d명  ", teen);
//    printf("20대=%d명  ", twenty);
//    printf("30대=%d명  ", thirty);
//    printf("40대=%d명  ", fourty);
//    printf("50대=%d명  ", fifty);
//
//}
//int main()
//{
//    int age, max=-2147483648, min=2147483647;
//    for (int i=0; i<10; i++)
//    {
//
//        printf("%d번째 사람의 나이를 입력하세요 : ", i+1);
//        scanf("%d", &age);
//
//        if (age<10 || age>=60)
//        {
//            printf("==범위를 초과합니다. 다시 입력하세요~\n"); i--; continue;
//        }
//        if (age > max) max = age;
//        else if (age < min) min = age;
//
//        age_list[i] = age;
//    }
//
//    printf("<<입력된 값들>>\n");
//    int cnt=0;
//    for (int i=0; i<10; i++)
//    {
//        cnt++;
//        printf("M[%d]=%d  ", i, age_list[i]);
//        if (cnt%5==0) printf("\n");
//    }
//
//    age_group();
//
//    printf("\n\n가장 많은 나이 : %d\n", max);
//    printf("가장 적은 나이 : %d\n", min);
//}

// or


//#include <stdio.h>
//void age_group(int arr[])
//{
//    printf("<<연령대별 인원>>\n");
//    for (int i =0; i<5; i++)
//    {
//        printf("%d0대=%d명  ", i+1, arr[i]);
//    }
//}
//int main()
//{
//    int cnt[5]={0};
//    int age_list[15];
//    int age, max=-2147483648, min=2147483647;
//    for (int i=0; i<10; i++)
//    {
//
//        printf("%d번째 사람의 나이를 입력하세요 : ", i+1);
//        scanf("%d", &age);
//
//        if (age<10 || age>=60)
//        {
//            printf("==범위를 초과합니다. 다시 입력하세요~\n"); i--; continue;
//        }
//        if (age > max) max = age;
//        else if (age < min) min = age;
//
//        age_list[i] = age;
//        cnt[age_list[i]/10-1]++;
//    }
//
//    printf("<<입력된 값들>>\n");
//    int cnt1=0;
//    for (int i=0; i<10; i++)
//    {
//        cnt1++;
//        printf("M[%d]=%d  ", i, age_list[i]);
//        if (cnt1%5==0) printf("\n");
//    }
//
//    age_group(cnt);
//
//    printf("\n\n가장 많은 나이 : %d\n", max);
//    printf("가장 적은 나이 : %d\n", min);
//}




// Question 14
//#include <stdio.h>
//int main()
//{
//
//    int M[]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
//
//    printf("이동전 : ");
//    for (int i=0; i<10; i++)
//    {
//        printf("%d, ", M[i]);
//    }
//
//    for (int i=0; i<9; i++)
//    {
//        M[i] = M[i+1];
//    }
//
//    printf("\n이동후 : ");
//    for (int i=0; i<10; i++)
//    {
//        printf("%d, ", M[i]);
//    }
//
//}



// Question 15
//#include <stdio.h>
//int main()
//{
//
//    int M[]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
//
//    printf("이동전 : ");
//    for (int i=0; i<10; i++)
//    {
//        printf("%d, ", M[i]);
//    }
//
//
//    for(int k=1; k<=2; k++)
//    {
//        for (int i=9; i>0; i--)
//        {
//            M[i] = M[i-1];
//        }
//    }
//
//    printf("\n이동후 : ");
//    for (int i=0; i<10; i++)
//    {
//        printf("%d, ", M[i]);
//    }
//}




 // Question 16
//#include <stdio.h>
//int main()
//{
//    int income;
//    printf("월급입력 : ");
//    scanf("%d", &income);
//    int values[] = {10000, 5000, 1000, 500, 100, 50, 10};
//    for (int i=0; i<7; i++)
//    {
//        printf("%d원권 ----------- %d매\n", values[i], income/values[i]);
//        income %= values[i];
//    }
//}



// Question 17
//#include <stdio.h>
//int main()
//{
//    int A[]={50, 60, 80, 40, 90, 70, 30, 100, 20, 10};
//    int B[20];
//
//    for (int i=0; i<10; i++)
//    {
//        B[i] = A[i];
//    }
//
//    printf("배열 B : ");
//    for (int i=0; i<10; i++)
//    {
//        printf("%d,", B[i]);
//    }
//    printf("\n");
//}



// Question 18
//#include <stdio.h>
//int main()
//{
//    int A[]={50, 60, 80, 40, 90, 70, 30, 100, 20, 10};
//    int B[20];
//
//    for (int i=0; i<10; i++)
//    {
//        B[i] = A[9-i];
//    }
//
//    printf("배열 B : ");
//    for (int i=0; i<10; i++)
//    {
//        printf("%d ", B[i]);
//    }
//    printf("\n");
//}




// Question 19
//#include <stdio.h>
//int main()
//{
//    int even_B[10], odd_C[10], cnt_even=0, cnt_odd=0;
//    int A[] = {8, 3, 5, 1, 6, 9, 4, 2, 7, 10};
//
//    printf("원본 A : ");
//    for (int i=0; i<10; i++)
//    {
//        printf("%d ", A[i]);
//        if (A[i]%2==0)
//        {
//            even_B[cnt_even] = A[i];
//            cnt_even++;
//        }
//        else
//        {
//            odd_C[cnt_odd] = A[i];
//            cnt_odd++;
//        }
//    }
//    printf("\n짝수배열 B : ");
//    for (int j=0; j<cnt_even; j++)
//    {
//        printf("%d ", even_B[j]);
//    }
//
//    printf("\n홀수배열 C : ");
//    for (int j=0; j<cnt_odd; j++)
//    {
//        printf("%d ", odd_C[j]);
//    }
//    printf("\n");
//}




// Question 20
//#include <stdio.h>
//int main()
//{
//    int A[]={20, 50, 80};
//    int B[]={10,30,40,60,70,90, 100,110,120,130,140,150};
//    int C[100];
//    int a=0, b=0;
//
//    int size_a = sizeof(A) / sizeof(A[0]);
//    int size_b = sizeof(B) / sizeof(B[0]);
//    int size_c = size_a + size_b;
//
//    for (int i=0;i<size_c ;i++)
//    {
//        if (a==size_a)
//        {
//            C[i] = B[b++];
//        }
//        else if (b==size_b)
//        {
//            C[i] = A[a++];
//        }
//        else if (A[a] < B[b])
//        {
//            C[i] = A[a++];
//        }
//        else
//        {
//            C[i] = B[b++];
//        }
//    }
//
//    for (int i=0;i<size_c ;i++)
//    {
//        printf("%d ", C[i]);
//    }
//}




// Question 21
//#include <stdio.h>
//int main()
//{
//    int A[]={50, 60, 80, 40, 90, 70, 30, 100, 20, 10};
//    int B[]={50, 60, 80, 40, 90, 70, 30, 100, 20, 10};
//
//    int i;
//    for (i=0; i<10; i++)
//    {
//        if (A[i] != B[i])
//        {
//            break;
//        }
//    }
//    if (i==10)
//        printf("두개의 배열은 같습니다!\n");
//    else
//        printf("두개의 배열은 다릅니다!\n");
//}




// Question 22
// selection sort
//#include <stdio.h>
//int main()
//{
//    int i;
//    int M[]={5, 2, 8, 4, 7};
//
//    puts("<<소트전>>");
//    for (int a=0; a<5; a++)
//        printf("M[%d]=%d  ", a, M[a]);
//
//    for (int i=0; i<4; i++){
//        int tmp;
//        for (int j=i+1; j<5; j++){
//            if (M[i] > M[j]){
//                tmp= M[i];
//                M[i]=M[j];
//                M[j] = tmp ;
//            }
//        }
//    }
//    puts("\n<<소트후>>");
//    for (int a=0; a<5; a++)
//        printf("M[%d]=%d  ", a, M[a]);
//}



// Question 23
// bubble sort
//#include <stdio.h>
//int main()
//{
//    int num[]={5,7,8,4,2};
//    int size= sizeof(num)/sizeof(num[0]);
//    int tmp;
//    for (int i=0; i<4;i++){
//        for (int j=0; j<4; j++) {
//            if (num[j] > num[j+1]) {
//                tmp = num[j];
//                num[j] = num[j+1];
//                num[j+1] = tmp;
//            }
//        }
//    }
//
//    printf("소트결과 => ");
//    for (int i=0; i<5; i++)
//    {
//        printf("%d ", num[i]);
//    }
//    printf("\n");
//}




// Question 24
// 오름차순
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//    int numbers[100];
//    int tmp;
//    srand((unsigned)time(NULL)); // 난수의 초기화
//    for (int i=0; i<100; i++)   // 총 100개의 난수
//    {
//        int rnd;
//        rnd = rand()%999+1;  // 1~999까지의 난수를 발생
//        numbers[i] = rnd;
//    }
//
//
//    for (int i=0; i<99;i++)
//    {
//        for (int j=0; j<99; j++)
//        {
//            if (numbers[j] > numbers[j+1])
//            {
//                tmp = numbers[j];
//                numbers[j] = numbers[j+1];
//                numbers[j+1] = tmp;
//            }
//        }
//    }
//
//    int cnt=0;
//    for (int i=0; i<100;i++)
//    {
//        printf("%4d ", numbers[i]);
//        cnt++;
//        if (cnt%10==0)
//            printf("\n");
//    }
//}


// or
// 내림차순
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//    int numbers[100];
//    int tmp;
//    srand((unsigned)time(NULL)); // 난수의 초기화
//    for (int i=0; i<100; i++)   // 총 100개의 난수
//    {
//        int rnd;
//        rnd = rand()%999+1;  // 1~999까지의 난수를 발생
//        numbers[i] = rnd;
//    }
//
//
//    for (int i=0; i<99;i++)
//    {
//        for (int j=0; j<99; j++)
//        {
//            if (numbers[j] < numbers[j+1])  // 여기 부등호 하나만 바꾸면 됨
//            {
//                tmp = numbers[j];
//                numbers[j] = numbers[j+1];
//                numbers[j+1] = tmp;
//            }
//        }
//    }
//
//    int cnt=0;
//    for (int i=0; i<100;i++)
//    {
//        printf("%4d ", numbers[i]);
//        cnt++;
//        if (cnt%10==0)
//            printf("\n");
//    }
//}




// Question 25
// 정렬되어있다고 가정하고
// 재귀함수쓰고
//int M[]={33, 40, 57, 65, 70, 78, 88, 90};
//int start=0, end=7;
//#include <stdio.h>
//int binary_search(int arr[], int find, int start, int end) {
//    int mid = (start+end) / 2;
//    if (arr[mid]==find)
//        return mid+1;
//    if(start==end)
//        return -1;
//    if (arr[mid] > find)
//        return binary_search(arr, find, start, mid-1);
//    else  // else 중요!! 반환할때 안될수도있으니까
//        return binary_search(arr, find, mid+1, end);
//}


//int main() {
//    int M[]={33, 40, 57, 65, 70, 78, 88, 90};
//    int find;
//    int start=0, end=7;
//    printf("정렬후  : ");
//    for (int i=0; i<8; i++)
//        printf("%d ", M[i]);
//
//    printf("\n찾을값  : ");
//    scanf("%d", &find);
//    int r=binary_search(M, find, start, end);
//    if(r>0)
//       printf("%d번째에서 발견됨\n", r);
//    else
//        printf("값이 존재하지 않습니다\n");
//}



// or
// 재귀안쓰고
//#include <stdio.h>
//int main()
//{
//    int M[]={33, 40, 57, 65, 70, 78, 88, 90};
//    int find;
//    int start=0, end=7;
//    printf("정렬후  : ");
//    for (int i=0; i<8; i++)
//    {
//        printf("%d ", M[i]);
//    }
//
//    printf("\n찾을값  : ");
//    scanf("%d", &find);
//
//    while (1)
//    {
//        int mid = (start+end)/2;
//        if (M[mid] == find)
//        {
//            printf("%d번째에서 발견됨\n", mid+1);
//            break;
//        }
//        else if (start==end)
//        {
//            printf("값이 존재하지 않습니다\n");
//            break;
//        }
//
//        else if (M[mid] > find)
//        {
//            end = mid-1;
//        }
//        else if (M[mid] < find)
//        {
//            start = mid+1;
//        }
//    }
//}




// Question 26
//#include <stdio.h>
//int main()
//{
//    int array[]={1,2,3,4,5,6,7,8,9,10};
//    int tmp;
//
//    for (int i=0; i<10; i+=2)
//    {
//        tmp = array[i];
//        array[i] = array[i+1];
//        array[i+1] = tmp;
//    }
//
//    for (int i=0; i<10; i++)
//    {
//        printf("%d ", array[i]);
//    }
//}




// Question 27
//#include <stdio.h>
//int main()
//{
//    int array[]={1,2,3,4,5,6,7,8,9,10};
//    int tmp;
//
//    for (int i=0; i<5; i++)
//    {
//        tmp = array[i];
//        array[i] = array[9-i];
//        array[9-i] = tmp;
//    }
//
//    for (int i=0; i<10; i++)
//    {
//        printf("%d ", array[i]);
//    }
//}




// Question 28
//#include <stdio.h>
//int main()
//{
//    int num, jinsu;
//    int arr[30];
//    int cnt=0;
//    printf("정수값을 입력하세요 : ");
//    scanf("%d", &num);
//
//    printf("몇 진수로 출력할까요? : ");
//    scanf("%d", &jinsu);
//
//    while(num>=jinsu)   // range 맞는지 확인부탁
//    {
//        int remainder = (num % jinsu);  // 10
//        arr[cnt] = remainder;
//        num /= jinsu;   // 5
//        cnt++;
//    }
//    arr[cnt] = num;
//
//    for(int i=cnt; i>=0; i--)
//    {
//        if (arr[i] >= 10)
//        {
//            printf("%c", (char)arr[i]+55);
//        }
//        else
//        {
//            printf("%d", arr[i]);
//        }
//    }
//    printf("\n");
//}




// Question 29
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void determine(int lottery[], int computer[])
//{
//    int cnt=0;
//    for (int i=0; i<3; i++)
//    {
//        for (int j=0; j<6; j++)
//        {
//            if (lottery[i] == computer[j])
//            {
//                cnt++; break;
//            }
//        }
//    }
//
//    if (cnt==2) printf("축하합니다 2등 당첨 !!! 상금은 5000000 입니다~~\n");
//    else if (cnt==3) printf("축하합니다 1등 당첨 !!! 상금은 10000000 입니다~~\n");
//    else printf("꽝\n");
//}
//
//
//int main()
//{
//    srand((unsigned)time(NULL));
//    int lottery[5];
//    int computer[10];
//
//    printf("복권번호를 넣으세요 ");      // 3개의 복권번호 입력
//    for (int i=0; i<3; i++)
//    {
//        int num;
//        scanf("%d", &num);
//        lottery[i] = num;
//    }
//
//
//    printf("컴퓨터 추첨번호 : ");      // 컴퓨터 추첨번호 받기 - 이게 겹치면 안됨
//    for(int i=0; i<6; i++)
//    {
//        int j;
//        int rnd =  rand()%9+1;
//        for (j=0; j<i; j++)
//        {
//            if (rnd == computer[j])
//            {
//                break;
//            }
//        }
//        if (i==j)
//        {
//            printf("%d ", rnd);
//            computer[i] = rnd;
//        }
//        else i--;
//    }
//    printf("\n");
//    determine(lottery, computer);
//}




// Question 30
//#include <stdio.h>
//int main()
//{
//    int num;
//    int arr[15];
//    for (int i=0; i<10; i++)
//    {
//        int tmp;
//        printf("정수 입력  : ");
//        scanf("%d", &num);
//        arr[i] = num;
//
//        for (int j=i; j>0; j--)
//        {
//            if (arr[j] < arr[j-1])
//            {
//                tmp = arr[j];
//                arr[j] = arr[j-1];
//                arr[j-1] = tmp;
//            }
//        }
//
//        printf("=> ");
//        for (int j=0; j<=i; j++)
//        {
//            printf("%d ", arr[j]);
//        }
//        printf("\n");
//    }
//}



// Question 31
// 안에 값을 없앤다는게, 왼쪽으로 한칸씩 땡긴다는건데, 결국 끝에는 1,2,3,4,4 이런식으로 반복되는게 아닌지?
//#include <stdio.h>
//void insert(int arr[], int size )
//{
//    int num, input1;
//    printf("\n몇 번째에 어떤 수를 삽일 할까요 ? ");
//    scanf("%d %d", &num, &input1);
//
//    for (int i=size; i>num; i--)
//    {
//        arr[i] = arr[i-1];
//    }
//
//    arr[num] = input1;
//
//    for (int i=0; i<size+1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}
//
//void delete(int arr[], int size)
//{
//    int num;
//    printf("몇 번째 수를 삭제 할까요 ? ");
//    scanf("%d", &num);
//
//
//    for (int i=num; i<size-1; i++)
//    {
//        arr[i] = arr[i+1];
//    }
//
//    for (int i=0; i<size-1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}
//
//
//#include <stdio.h>
//int main()
//{
//    int  choice;
//    int Arr[10] = {10,20,30,40,50};
//    int size = 5;
//
//
//    while(1)
//    {
//        printf("=== 메뉴 ===\n");
//        printf("1. 삽입\n");
//        printf("2. 삭제\n");
//        printf("3. 종료\n");
//        printf("선택 ==>");
//
//        scanf("%d", &choice);
//
//        if (choice == 1)
//        {
//            insert(Arr, size);
//            size++;
//        }
//        else if (choice==2)
//        {
//            delete(Arr, size);
//            size--;
//        }
//        else break;
//        printf("\n");
//    }
//}


// 추가문제
// Question 19
//#include <stdio.h>
//int main()
//{
//    int num, calculate;
//    int arr[10];
//    int input1;
//    int max=-2147483648;
//    printf("정수개수/계산횟수 : ");
//    scanf("%d%d", &num, &calculate);
//
//    for (int i=0; i<num ; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    for (int i=0; i<calculate; i++)
//    {
//        for (int j=0; j<num; j++)   // 그 줄의 맥스값 구하기
//        {
//            if (arr[j] > max)
//            {
//                max = arr[j];
//            }
//        }
//
//        for (int k=0; k<num; k++)
//        {
//            arr[k] = max - arr[k];  // 맥스값에서 배열의[k]번째 빼면서 정리
//        }
//    }
//
//    printf("%d 번 연산 후 : ", calculate);
//    for (int i=0; i<num ; i++)
//    {
//        printf("%d, ", arr[i]);
//    }
//}




// Question 31
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//    int cnt[6] = {0};
//    int rnd;
//    int num, max=-2147483648;
//    srand((unsigned)time(NULL));
//    for (int i=0; i<50; i++)
//    {
//        rnd = rand()%6+1;
//        cnt[rnd-1]++;
//    }
//
//    for (int i=0; i<6; i++)
//    {
//        if (cnt[i] > max)
//        {
//            num = i+1;
//            max = cnt[i];
//        }
//        printf("%d 번 : %d회\n", i+1, cnt[i]);
//    }
//    printf("가장 많이 나온 번호/횟수 : %d / %d \n", num, max);
//}

