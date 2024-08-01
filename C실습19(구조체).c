// 1. 구조체 변수와 필드에 대하여 알아봅시다.
//#include <stdio.h>
//#include <string.h>
//
//struct Student{
//    int no;
//    char name[10];
//    int k,e,m,tot;
//    float av;
//};
//
//int main()
//{
//    struct Student st;
//    st.no=1;
//    strcpy(st.name, "홍길동");
//    st.k=100;
//    st.e=90;
//    st.m=85;
//    st.tot=st.k+st.e+st.m;
//    st.av=st.tot/3.0;
//    
//    printf("%d %s %d %d %d %d %.2f",st.no, st.name, st.k, st.e, st.m, st.tot, st.av);
//}



// 2. 구조체 변수의 초기화에 대하여 알아봅시다.
//#include <stdio.h>
//#include <string.h>
//
//struct Student {
//    int no;
//    char name[10];
//    int k,e,m,tot;
//    float av;
//};
//
//int main()
//{
//    struct Student st={1,"이순신", 70,80,90};
//    
//    st.tot=st.k+st.e+st.m;
//    st.av=st.tot/3.0;
//    
//    printf("%d %s %d %d %d %d %.2f",st.no, st.name, st.k, st.e, st.m, st.tot, st.av);
//}



// 3. 동일한 자료형을 갖는 구조체끼리 치환하여 봅시다.
//#include <stdio.h>
//#include <string.h>
//struct Student {
//    int no;
//    char name[10];
//    int k,e,m,tot;
//    float av;
//};
//typedef struct Student Std;
//int main()
//{
//    Std st1= {1,"이순신", 70,80,90};
//    st1.tot=st1.k+st1.e+st1.m;
//    st1.av=st1.tot/3.0;
//    Std st2=st1;
//    
//    printf("%d %s %d %d %d %d %.2f",st1.no, st1.name, st1.k, st1.e, st1.m, st1.tot, st1.av);
//    printf("%d %s %d %d %d %d %.2f",st2.no, st2.name, st2.k, st2.e, st2.m, st2.tot, st2.av);
//}



// 4. 함수의 매개변수로 구조체 변수를 사용하여 봅시다.
//#include <stdio.h>
//struct KT
//{
//    char name[10];
//    int nai;
//    double ki;
//};
//typedef struct KT Gu;
//void disp( Gu M )
//{
//    printf("이름=%s\n", M.name);
//    printf("나이=%d\n", M.nai);
//    printf("키=%.1f\n", M.ki);
//}
//
//int main()
//{
//    Gu dt1 = {"홍길동", 105, 110.5};
//    Gu dt2 = {"유관순", 20, 55.5};
//    disp (dt1);
//    printf("\n");
//    disp (dt2);
//}



// 5. 구조체 값을 함수에서 변경하여 반환하여 봅시다.
//#include <stdio.h>
//#include <string.h>
//struct KT
//{
//    char name[10];
//    int nai;
//    double ki;
//};
//typedef struct KT Gu;
//void disp( Gu M )
//{
//    printf("이름=%s\n", M.name);
//    printf("나이=%d\n", M.nai);
//    printf("키=%.1f\n", M.ki);
//}
//Gu change(Gu M)
//{
//    Gu tmp;
//    strcpy(tmp.name, M.name);
//    tmp.ki=100;
//    tmp.nai=130;
//    return tmp;
//}
//int main()
//{
//    Gu dt1 = {"홍길동", 105, 110.5};
//    disp(dt1);  // 홍길동 105 110.5
//    dt1=change(dt1);
//    printf("\n");
//    disp(dt1);  // 홍길동 130 100
//}



// 6. 구조체 배열을 사용하여 봅시다.
//#include <stdio.h>
//struct Employee
//{
//    int age;
//    double height;
//};
//
//int main()
//{
//    struct Employee M[3]= {10,110.5, 20,120.5, 30,130.5};
//    printf("%5d%10.1f\n", M[0].age, M[0].height);
//    printf("%5d%10.1f\n", M[1].age, M[1].height);
//    printf("%5d%10.1f\n", M[2].age, M[2].height);
//}


// 7. 구조체 배열을 출력하는 함수를 작성하여 봅시다.
//#include <stdio.h>
//typedef struct Employee
//{
//    int age;
//    double height;
//}Emp;
//
//void disp(Emp Fm[], int cnt)
//{
//    for (int i=0; i<cnt; i++)
//    {
//        printf("%5d%10.1f\n", Fm[i].age, Fm[i].height);
//    }
//}
//
//int main()
//{
//    Emp M[3] = {10,110.5, 20,120.5, 30,130.5};
//    disp(M,3);
//}



// 8. 다음 프로그램을 입력하고 실행하여 봅시다.
//#include <stdio.h>
//struct Person
//{
//    char name[20];
//    char phoneNum[20];
//    int age;
//};
//int main()
//{
//    struct Person arr[3]= {
//        {"이승기", "010-1212-0001", 21},   // 첫 번째 요소의 초기화
//        {"정지영", "010-1313-0002", 22},   // 두 번째 요소의 초기화
//        {"한지수", "010-1717-0003", 19}    // 세 번째 요소의 초기화
//    };
//    int i;
//    for (i=0; i<3; i++)
//        printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
//    return 0;
//}



// 9. 포함구조체를 사용하여 봅시다.
//#include <stdio.h>
//struct Sight
//{
//    float left;
//    float right;
//};
//struct Person
//{
//    struct Sight sig;
//    char name[20];
//    char phoneNum[20];
//    int age;
//};
//
//int main()
//{
//    struct Person man={1.5, 2.0, "이승기", "010-1212-0001", 21};
//    printf("%.2f %.2f %s %s %d \n", man.sig.left, man.sig.right, man.name,
//           man.phoneNum, man.age);
//    return 0;
//}




// 숙제
// Question 1
//#include <stdio.h>
//struct point {
//    int x,y;
//};
//
//int equal(struct point p1, struct point p2) {
//    if (p1.x == p2.x && p1.y == p2.y)
//        return 1;
//    else
//        return 0;
//}
//
//int main() {
//    struct point p1 = {1,2};
//    struct point p2 = {3, 5};
//    
//    if (equal(p1, p2))
//        printf("두 점은 일치합니다\n");
//    else
//        printf("두 점은 일치하지 않습니다\n");
//    return 0;
//}




// Question 5
//#include <stdio.h>
//#include <string.h>
//struct food {
//    char name[15];
//    int calories;
//};
//
//int main() {
//    struct food Food_Array[3] = {{"hamburger", 900}, {"bulgogi",500}, {"sushi",700}};
//    int sum=0;
//    
//    for (int i=0; i<3; i++)
//        sum += Food_Array[i].calories;
//    printf("전체 칼로리는 %d 칼로리입니다.\n", sum);
//}




// Question 7
//#include <stdio.h>
//#include <string.h>
//#define SIZE 200
//struct Wc {
//    char word[30];
//    int count;
//};
//
//
//
//int main() {
//    struct Wc simbol_table[SIZE];
//    
//    char fruit[15];
//    int i,j,k=0;
//    for (i=0; i<7; i++)
//    {
//        printf("단어를 입력하세요 : ");
//        scanf("%s", fruit);
//        for (j=0; j<i; j++) {
//            if ( strcmp(simbol_table[j].word, fruit) == 0) {
//                (simbol_table[j].count)++;
//                break;
//            }
//        }
//        if (j==i){
//            strcpy(simbol_table[k].word, fruit);
//            simbol_table[k].count = 1;
//            k++;
//        }
//    }
//    for (int v=0; v<k; v++)
//        if (simbol_table[v].count >= 1)
//            printf("%s : %d\n", simbol_table[v].word, simbol_table[v].count);
//}



// Question 8
//#include <stdio.h>
//#include <string.h>
//struct info {
//    char productName[15];
//    int price, numSales, stock;
//};
//
//void registration(struct info arr[],int i) {
//    scanf("%s", arr[i].productName );
//    scanf("%d %d %d", &arr[i].price, &arr[i].numSales, &arr[i].stock);
//}
//
//void calculate(struct info arr[],int i) {
//    int total=0;
//    
//    for (int j=0; j<i; j++)
//        total += (arr[j].price * arr[j].numSales);
//    printf("총 매출액은 : %d\n\n", total);
//}
//int main()
//{
//    int num, i=0;
//    struct info arr[100];
//    
//    while (1) {
//        printf("===메뉴\n");
//        printf("1. 상품판매등록\n");
//        printf("2. 총 매출액\n");
//        printf("3. 종료\n");
//        scanf("%d", &num);
//        if (num == 1)
//            registration(arr, i);
//        else if (num == 2)
//            calculate(arr,i);
//        else
//            break;
//        i++;
//    }
//}



// Question 9   // 하지말고
//#include <stdio.h>
//#include <string.h>
//struct dataBase {
//    char title[20], singer[20], location[20], genre[20];
//};
//
//void add(struct dataBase arr[],int i) {
//    scanf("%s %s %s %s", arr[i].title, arr[i].singer, arr[i].location, arr[i].genre);
//}
//
//void calculate(struct data arr[],int i) {
//    int total=0;
//
//    for (int j=0; j<i; j++)
//        total += (arr[j].price * arr[j].numSales);
//    printf("총 매출액은 : %d\n\n", total);
//}
//
//int main()
//{
//    int num, i=0;
//    struct dataBase arr[100];
//
//    while (1) {
//        printf("=======\n");
//        printf("1. 추가\n");
//        printf("2. 삭제\n");
//        printf("3. 출력\n");
//        printf("4. 검색\n");
//        printf("5. 정렬\n");
//        printf("6. 종료\n");
//        scanf("=> %d", &num);
//        if (num == 1)
//            add(arr, i);
//        else if (num == 2)
//            delete(arr,i);
//        else if (num == 3)
//            print(arr,i);
//        else if (num == 4)
//            search(arr,i);
//        else if (num == 5)
//            sort(arr,i);
//        else
//            break;
//        i++;
//    }
//}




// Question 11
//#include <stdio.h>
//struct info {
//    int num;
//    char name[20], phoneNum[20];
//    int age, rank;
//};
//typedef struct info INFO;
//void printout(INFO arr[])
//{
//    for (int i=0; i<5; i++) {
//        printf("%d %s %s %d %d\n", arr[i].num, arr[i].name,  arr[i].phoneNum, arr[i].age, arr[i].rank );
//    }
//}
//
//
//int main()
//{
//    INFO arr[5];
//    for (int i=0; i<5; i++) {
//        scanf("%d", &arr[i].num);
//        scanf("%s %s", arr[i].name, arr[i].phoneNum);
//        scanf("%d", &arr[i].age);
//    }
//    
//    for (int i=0; i<5; i++) {
//        arr[i].rank = 1;
//        for (int j=0; j<5; j++) {
//            if (arr[j].age < arr[i].age)
//                (arr[i].rank)++;
//        }
//    }
//    printout(arr);
//    printf("\n\n");
//    
//
//    for (int i=0; i<4; i++) {
//        INFO tmp;
//        for (int j=i+1; j<5; j++) {
//            if (arr[i].rank > arr[j].rank) {
//                tmp= arr[i];
//                arr[i]=arr[j];
//                arr[j] = tmp ;
//            }
//        }
//    }
//    printout(arr);
//}



// Question 16
//#include <stdio.h>
//#include <string.h>
//struct Info {
//    char productName[20];
//    int price, quantity, amount;
//};
//struct Info info[8];
//struct Info partialSum[8];
//
//
//void input(struct Info arr[], int i) {
//    scanf("%s %d%d",arr[i].productName,&arr[i].price,&arr[i].quantity);
//    arr[i].amount = (arr[i].quantity * arr[i].price);
//}
//void output(struct Info arr[], int i) {
//    printf("%15s %10d%10d%10d\n"," ",arr[i].price,arr[i].quantity,arr[i].amount);
//}
//
//void outputNoname(struct Info arr[], int i) {
//    printf(" %10d%10d%10d\n",arr[i].price,arr[i].quantity,arr[i].amount);
//}
//
//void outputSum(struct Info arr[], int i) {
//    printf("%15s %10s%10d%10d\n",strcat(arr[i].productName, " Sum") ," ",arr[i].quantity,arr[i].amount);
//}
//
//int main() {
//    for (int i=0; i<8 ; i++) {      // 인풋받으면서 판매액계산
//        input(info, i);
//    }
//    
//    
//    for (int i=0; i<7; i++) {       // 소트하고
//        struct Info tmp;
//        for (int j=i+1; j<8; j++) {
//            if (strcmp(info[i].productName, info[j].productName) > 0) {
//                tmp= info[i];
//                info[i]=info[j];
//                info[j] = tmp ;
//            }
//        }
//    }
//    
//    for (int i=0; i<8 ; i++) {  // 출력
//        output(info, i);
//    }
//    
//    int totalQuantity=0, totalAmount=0, k=0;
//    for (int i=0; i<8 ; i++) {  // 부분합
//        if (strcmp(info[i].productName, partialSum[k].productName) == 0) {
//            partialSum[k].quantity += info[i].quantity;
//            partialSum[k].amount += info[i].amount;
//        }
//        else {
//            k++;
//            strcpy(partialSum[k].productName , info[i].productName);
//            partialSum[k].quantity = info[i].quantity;
//            partialSum[k].amount = info[i].amount;
//        }
//        totalQuantity += info[i].quantity;
//        totalAmount += info[i].amount;
//    }
//    
//    
//    printf("\n\n");
//    printf("%35s\n", "*** Sales Sheet ***");
//    printf("%15s %10s%10s%10s\n","productName","price", "quantity", "amount");
//    int i=0;
//    
//    for (int j=1; j<=k ; j++) {  // 출력  k == 3
//        printf("%15s", info[i].productName);
//        outputNoname(info, i); i++;
//        while (strcmp(info[i].productName, partialSum[j].productName) == 0) {
//                output(info, i);
//            i++;
//        }
//        outputSum(partialSum, j);
//        
//    }
//    printf("%15s %10s%10d%10d\n", "total", " ",totalQuantity,totalAmount);
//}



// input
//chocolate 1000 2
//mongsil 1200 4
//banana 1500 5
//chocolate 1000 6
//banana 1500 2
//mongsil 1200 4
//banana 1500 2
//chocolate 1000 1 





// Question 17
//#include <stdio.h>
//#include <string.h>
//typedef struct Info {
//    char department[20], name[20];
//    long baseSalary, allowance, total;
//}Info;
//Info info[7];
//Info partialSum[7];
//
//
//typedef struct summarySheet {
//    char department[20];
//    int arr[8];
//}summarySheet;
//summarySheet summary[4];  // 전역변수의 값은 자동으로 0으로 초기화가됨 (int 안에서하면 전역변수아님)
//
//
//void input(struct Info arr[], int i) {
//    scanf("%s%s %d%d",arr[i].department,arr[i].name,&arr[i].baseSalary, &arr[i].allowance);
//    arr[i].total = (arr[i].baseSalary + arr[i].allowance);
//}
//void output(struct Info arr[], int i) {
//    printf("%12s%10s%10d%10d%10d\n", arr[i].department,arr[i].name,arr[i].baseSalary,
//           arr[i].allowance, arr[i].total);
//}
//
//int main() {
//    for (int i=0; i<7 ; i++) {      // 인풋받으면서 급여총액 계산
//        input(info, i);
//    }
//    
//    
//    for (int i=0; i<6; i++) {       // 소트하고
//        struct Info tmp;
//        for (int j=i+1; j<7; j++) {
//            if (strcmp(info[i].department, info[j].department) > 0) {
//                tmp= info[i];
//                info[i]=info[j];
//                info[j] = tmp ;
//            }
//        }
//    }
//    
//    //    for (int i=0; i<7 ; i++) {  // 출력
//    //        output(info, i);
//    //    }
//    //
//    
//    int totalBaseSalary=0, totalAllowance=0, totalTotal=0, k=-1;
//    for (int i=0; i<7 ; i++) {  // 부분합
//        if (strcmp(info[i].department, partialSum[k].department) == 0) {
//            partialSum[k].baseSalary += info[i].baseSalary;
//            partialSum[k].allowance += info[i].allowance;
//            partialSum[k].total += info[i].total;
//            
//        }
//        else {
//            k++;
//            strcpy(partialSum[k].department , info[i].department);
//            partialSum[k].baseSalary = info[i].baseSalary;
//            partialSum[k].allowance = info[i].allowance;
//            partialSum[k].total = info[i].total;
//            
//        }
//        totalBaseSalary += info[i].baseSalary;
//        totalAllowance += info[i].allowance;
//        totalTotal += info[i].total;
//    }
//    strcpy(partialSum[k+1].department , "Total amount");
//    partialSum[k+1].baseSalary = totalBaseSalary;
//    partialSum[k+1].allowance = totalAllowance;
//    partialSum[k+1].total = totalTotal;
//    
//    //    printf("\n\n");
//    //    for (int i=0; i<=k+1 ; i++) {  // 출력
//    //        output(partialSum, i);
//    //    }
//    int notes[8]={50000, 10000, 5000, 1000, 500, 100, 50, 10};
//    printf("\n\n");
//    printf("%40s\n", "Summary Sheet\n");
//    printf("%-30s%-30s\n", "Department Name", "Currency");
//    printf("%22s%9s%9s%9s%9s%9s%9s%9s\n\n", "50,000", "10,000", "5,000", "1,000",
//           "500", "100", "50", "10");
//    
//    
//    for (int i=0; i<=k+1 ; i++) {  // 출력
//        strcpy(summary[i].department, partialSum[i].department);
//        
//        printf("%-12s", partialSum[i].department);
//        long tmp = partialSum[i].total;
//
//        for (int j=0; j<8; j++) {
//            while (tmp / notes[j] > 0) {
//                tmp -= notes[j];
//                (summary[i].arr[j])++;
//            }
//            printf("%9d", summary[i].arr[j]);
//        }
//        printf("\n");
//    }
//}
    
    
// or
//    for (int i=0; i<=k+1 ; i++) {  // 출력
//        printf("%-12s", partialSum[i].department);
//        long num=50000, tmp = partialSum[i].total;
//
//        for (int j=0; j<8; j++) {
//            int cnt=0;
//            while (tmp / num > 0) {
//                tmp -= num;
////                printf("%d\n", tmp);
//                cnt++;
//            }
//            printf("%9d", cnt);
//            if (j%2 == 0)
//                num /= 5;
//            else
//                num /= 2;
//        }
//        printf("\n");
//    }
    
// 토탈 계산방식 내꺼가 맞음
// 구조체 만들어서 풀어보기



// input
//general kim 1540000 53900
//human na 1500000 52500
//sales hong 1698000 59430
//human lee 2470000 86450
//sales kang 2496000 87360
//human lee 3478000 121730
//general kim 1600000 56000
