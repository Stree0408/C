// *** Stack
//후입선출법으로 입출력이 일어나는 구조
//출력 순서가 역순으로 이루어져야할 경우 사용
//에디터에서 되돌리기 기능을 구현할 때 사용
//함수 호출해서 복귀 주소를 기억하는데 사용
//배열, 링크드리스트로 구현

// 보통 스택은 링크드리스트보다는 배열로 만들음

//overflow : occurs when you try to push an element onto a stack that is already full
//underflow : occurs when you try to pop an element from an empty stack


// <스택 ADT>
//Create() 스택을 생성
//is_empty(s) 스택이 비어있는지를 검사
//is_full(s) 스택이 가득 찼는지 검사
//push(s,e) 스택의 맨 위에 요소 e를 추가
//pop(s)  스택의 맨 위에 있는 요소를 삭제
//peek(s) 스택의 맨 위에 있는 요소를 삭제하지 않고 반환


// 상수 선언 방법
//const int a=100;
//#define MAX_STACK_SIZE 100;
//enum KK{a=100};



// 1. 배열로 스택을 구현하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_STACK_SIZE 4
//typedef int element;
//element stack[MAX_STACK_SIZE];
//int top = -1;
//
//int is_empty() {
//    return (top == -1);
//}
//int is_full()
//{
//    return (top == (MAX_STACK_SIZE-1));
//}
//void push(element item)
//{
//    if (is_full()) {
//        fprintf(stderr,"스택 포화 에러\n");
//        return;
//    }
//    else stack[++top] = item;
//}
//element pop()
//{
//    if (is_empty()) {
//        fprintf(stderr, "스택 공백 에러\n");
//        exit(1);
//    }
//    else return stack[top--];
//}
//element peek()
//{
//    if (is_empty()) {
//        fprintf(stderr, "스택 공백 에러\n");
//        exit(1);
////        exit() : causes an immediate termination of entire program. No further code after the exit() call will be executed
//    }
//    else return stack[top];
//}
//
//
//
//int main()
//{
//    push(1);
//    push(2);
//    push(3);
//    push(4);
//    push(5);                // 스택 포화 에러
//    printf("%d\n", pop());  // 4
//    printf("%d\n", pop());  // 3
//    printf("%d\n", peek()); // 2
//    printf("%d\n", pop());  // 2
//    printf("%d\n", pop());  // 1
//    printf("%d\n", pop());  // 스택 공백 에러
//    printf("%d\n", is_empty());  // 이거 왜 프린트안됨?????
//    printf("%d\n", top); // 이것도 안됨???? 저 스택 공백 에러 띄우는 pop뒤에 오는거 프린트 안됨, exit해서 그럼?
//}





// 2. 학생의 학번, 이름, 주소를 스택에 넣어 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//#define MAX_STACK_SIZE 100
//#define MAX_STRING 100
//typedef struct {
//    int student_no;
//    char name[MAX_STRING];
//    char address[MAX_STRING];
//}element;
//element stack[MAX_STACK_SIZE];
//int top = -1;
//
//
//int is_empty()
//{
//    return (top == -1);
//}
//int is_full()
//{
//    return (top == (MAX_STACK_SIZE-1));
//}
//void push(element item)
//{
//    if (is_full()) {
//        fprintf(stderr,"스택 포화 에러\n");
//        return;
//    }
//    else stack[++top] = item;
//}
//element pop()
//{
//    if (is_empty()) {
//        fprintf(stderr, "스택 공백 에러\n");
//        exit(1);
//    }
//    else return stack[top--];
//}
//element peek()
//{
//    if (is_empty()) {
//        fprintf(stderr, "스택 공백 에러\n");
//        exit(1);
//    }
//    else return stack[top];
//}
//
//
//int main()
//{
//    element ie, oe;     // input element, output element
//    int choice;
//    while (1)
//    {
//        printf("1.push 2.pop 3.peek 4.종료");
//        scanf("%d", &choice);
//        if (choice ==1){
//            printf("번호 이름 주소  :");
//            scanf("%d %s %s", &ie.student_no, ie.name, ie.address);
//            push(ie);
//        }
//        if (choice ==2){
//            oe = pop();
//            printf("name: %s\n", oe.name);
//            printf("address: %s\n", oe.address);
//            printf("student number: %d\n", oe.student_no);
//        }
//        if (choice ==3){
//            oe = peek();
//            printf("name: %s\n", oe.name);
//            printf("address: %s\n", oe.address);
//            printf("student number: %d\n", oe.student_no);
//        }
//        if (choice == 4) break;
//    }
//}




// 3. 위 프로그램의 전역변수 대신 구조체를 사용하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_STACK_SIZE 100
//#define MAX_STRING 100
//typedef struct {
//    int student_no;
//    char name[MAX_STRING];
//    char address[MAX_STRING];
//}element;
//
//typedef struct {
//    element stack[MAX_STACK_SIZE];
//    int top;
//}StackType;
//
//
//void init(StackType *s) {
//    s->top = -1;
//}
//// 공백 상태 검출 함수
//int is_empty(StackType *s)
//{
//    return (s->top == -1);
//}
//// 포화 상태 검출 함수
//int is_full(StackType *s)
//{
//    return (s-> top == (MAX_STACK_SIZE-1));
//}
//// 삽입 함수
//void push(StackType *s, element item)
//{
//    if (is_full(s)) {
//        fprintf(stderr,"스택 포화 에러\n");
//        return;
//    }
//    else s->stack[++(s->top)] = item;
//}
//// 삭제 함수
//element pop(StackType *s)
//{
//    if (is_empty(s)) {
//        fprintf(stderr, "스택 공백 에러\n");
//        exit(1);
//    }
//    else return s->stack[(s->top)--];
//}
//// 피크함수
//element peek(StackType *s)
//{
//    if (is_empty(s)) {
//        fprintf(stderr, "스택 공백 에러\n");
//        exit(1);
//    }
//    else return s->stack[(s->top)];
//}
//
//
//
//int main()
//{
//    StackType s;
//    element ie, oe;
//    int choice;
//    init(&s);
//    while (1)
//    {
//        printf("1.push 2.pop 3.peek 4.종료");
//        scanf("%d", &choice);
//        if (choice ==1){
//            printf("번호 이름 주소  :");
//            scanf("%d %s %s", &ie.student_no, ie.name, ie.address);
//            push(&s, ie);
//        }
//        if (choice ==2){
//            oe = pop(&s);
//            printf("name: %s\n", oe.name);
//            printf("address: %s\n", oe.address);
//            printf("student number: %d\n", oe.student_no);
//        }
//        if (choice==3){
//            oe = peek(&s);
//            printf("name: %s\n", oe.name);
//            printf("address: %s\n", oe.address);
//            printf("student number: %d\n", oe.student_no);
//        }
//        if (choice == 4) break;
//    }
//}




// 4. 연결리스트로 스택을 구현하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_STACK_SIZE 100
//#define MAX_STRING 100
//
//typedef int element;
//typedef struct StackNode{
//    element item;
//    struct StackNode *link;
//}StackNode;
//
//
//typedef struct {
//    StackNode *top;
//}LinkedStackType;
////StackNode *top; 써도 가능
//
//
//
//// 초기화 함수
//void init(LinkedStackType *s) {
//    s->top = NULL;
//}
//// 공백 상태 검출 함수
//int is_empty(LinkedStackType *s) {
//    return (s->top == NULL);
//}
//// linked list are dynamically allocated, so they are NEVER FULL
//// 포화 상태 검출 함수
//int is_full(LinkedStackType *s) {
//    return 0;
//}
////push(&s,1);
////push(&s,2);
////push(&s,3);
//void push(LinkedStackType *s, element item) {
//    StackNode *temp=(StackNode *)malloc(sizeof(StackNode));
//    if( temp == NULL ){
//        fprintf(stderr, "메모리 할당에러\n");
//        return;
//    }
//    else{
//        temp->item = item;
//        temp->link = s->top;
//        s->top = temp;
//    }
//}
//element pop(LinkedStackType *s) {
//    if( is_empty(s) ) {
//        fprintf(stderr, "스택이 비어있음\n");
//        exit(1);
//    }
//    else{
//        StackNode *temp=s->top; 
//        int item = temp->item;
//        s->top = s->top->link;
//        free(temp);
//        return item;
//    }
//}
//element peek(LinkedStackType *s) {
//    if( is_empty(s) ) {
//        fprintf(stderr, "스택이 비어있음\n");
//        exit(1);
//    } 
//    else {
//        return s->top->item;
//    }
//}
//
//
//
//int main()
//{
//    LinkedStackType s;
//    init(&s);
//    push(&s,1);
//    push(&s,2);
//    push(&s,3);
//    printf("%d\n", pop(&s));    // 3
//    printf("%d\n", pop(&s));    // 2
//    printf("%d\n", pop(&s));    // 1
//    printf("%d\n", is_empty(&s));   // 1
//}



// 7. 스택을 이용하여 미로찾기를 하여 봅시다.
//#include <stdio.h>
//#include <string.h>
////#include <conio.h>
//
//#define MAX_STACK_SIZE 100
//#define MAZE_SIZE 6
//
//
//typedef struct StackObjectRec {
//    short r;
//    short c;
//} StackObject;
//
//StackObject stack[MAX_STACK_SIZE];
//int top = -1;
//StackObject here={1,0}, entry={1,0};
//
//char maze[MAZE_SIZE][MAZE_SIZE] = {
//    {"1", "1","1","1","1","1"},
//    {"e", "0","1","0","0","1"},
//    {"1", "0","0","0","1","1"},
//    {"1", "0","1","0","1","1"},
//    {"1", "0","1","0","0","x"},
//    {"1", "1","1","1","1","1"},
//};
//
//void initialize()
//{
//    top = -1;
//}
//
//int isEmpty()
//{
//    return (top == -1);
//}
//int isFull()
//{
//    return (top == (MAX_STACK_SIZE-1));
//}
//
//void push(StackObject item)
//{
//    if ( isFull() ) {
//        printf("stack is full\n");
//    }
//    else stack[++top] = item;
//}
//
//
//
//// ?????? 이부분 ????? no return value for true case
//StackObject pop()
//{
//    if (isEmpty() ) {
//        printf("stack is empty\n");
//        
//    }
//    else
//        return stack[top--];
//}
//
//
//void printStack()
//{
//    int i;
//    for (i=5; i>top; i--)
//        printf("|      |\n");
//    for (i=top; i>=0; i--)
//        printf("|(%01d,%01d)|\n", stack[i].r, stack[i].c);
//    printf("-------\n");
//}
//
//
//void pushLoc (int r, int c)
//{
//    if (r <0 || c <0 ) return;
//    if ( maze[r][c] != '1' && maze [r][c] != '.') {
//        StackObject tmp;
//        tmp.r = r;
//        tmp.c = c;
//        push(tmp);
//    }
//}
//
//
//
//void printMaze(char m[MAZE_SIZE][MAZE_SIZE])
//{
//    int r,c;
//    printf("\n\n");
//    for (r=0; r<MAZE_SIZE; r++) {
//        for (c=0; c<MAZE_SIZE; c++) {
//            if ( c== here.c && r == here.r )
//                printf("m ");
//            else {
//                if (m[r][c] == 0 ) printf("0 ");
//                else printf("%c ", m[r][c]);
//            }
//        }
//        printf("\n");
//    }
//    printf("\n\n");
//}
//
//
//int main()
//{
//    int r,c;
//    here = entry;
//    printMaze(maze);
//    printStack();
//    while ( maze[here.r][here.c] != 'x') {
//        printMaze(maze);
//        r = here.r;
//        c = here.c;
//        maze[r][c] = '.';
//        pushLoc(r-1, c);
//        pushLoc(r+1, c);
//        pushLoc(r, c-1);
//        pushLoc(r, c+1);
//        printStack();
//        if (isEmpty() ) {
//            printf("실패\n");
//            return 0;
//        }
//        else
//            here = pop();
//        printMaze(maze);
//        printStack();
//        getchar();
//    }
//    printf("성공\n");
//}






// 미로문제
//// 다음과 같은 미로에서 탐색을 하였을 경우에 알고리즘의 각 단계에서의 스택의 모습을 그려 보고 프로그램을 실행하여 확인하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_STACK_SIZE 100
//#define ROW 6
//#define COLUMN 7
//
//
//typedef struct StackObject {
//    int x;
//    int y;
//}StackObject;
//
//
//StackObject stack[MAX_STACK_SIZE];
//int top;
//StackObject entry = {1,0}, here = {1,0}, Exit = {4,6};
//
//
//int MAZE[6][7] = {
//    {0, 0, 0, 0, 0, 0, 0},
//    {0, 1, 1, 1, 1, 1, 1},
//    {0, 0, 0, 0, 1, 0, 0},
//    {0, 0, 1, 0, 1, 0, 0},
//    {0, 1, 0, 1, 1, 0, 0},
//    {0, 0, 0, 0, 0, 0, 0},
//};
//
//
//
//// 스택 초기화 함수
//void init ()
//{
//    top = -1;
//}
//
//// 공백 상태 검출 함수
//int is_empty() {
//    return (top == -1);
//}
//
//// 포화 상태 검출 함수
//int is_full()
//{
//    return (top == (MAX_STACK_SIZE-1));
//}
//
//// 삽입함수
//void push(StackObject item)
//{
//    if ( is_full() ) {
//        fprintf(stderr,"스택 포화 에러\n");
//        return;
//    }
//    else stack[++top] = item;
//}
//
//
//// 삭제함수
//StackObject pop()
//{
//    if (is_empty() ) {
//        fprintf(stderr, "스택 공백 에러\n");
//        exit(1);
//    }
//    else return stack[top--];
//}
//
//
//// 피크함수
//StackObject peek()
//{
//    if (is_empty()) {
//        fprintf(stderr, "스택 공백 에러\n");
//        exit(1);
//    }
//    else return stack[top];
//}
//
//
//void display_maze()
//{
//    for (int i=0; i<6; i++) {
//        for (int j=0; j<7; j++) {
//            printf("%d ", MAZE[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n\n");
//}
//
//
//void printStack()
//{
//    for (int i=top; i>=0; i--)
//    {
//        printf("|(%d,%d)|\n", stack[i].x, stack[i].y);
//    }
//}
//
//
//
//int checkPath(int row, int col)
//{
//    // ROW=6， COLUMN=7
//    // 6행 7열
//    if (row < 0 || row > ROW  || col < 0 || col > COLUMN)   // 배열 범위 벗어나면 return
//        return 0;
//    if (MAZE[row][col] == 0 ){
//        StackObject data = {here.x, here.y};
//        push(data);             // 스택에 넣어줌
//        here.x = row;           // here 업데이트
//        here.y = col;
//        return 1;
//    }
//    return 0;
//}
//
//
//
//
//int main()
//{
//    init();     // 스택 초기화
//    display_maze(); // initial maze
//    
//
//    
//    int row,col;
//    while (here.x != Exit.x || here.y != Exit.y) {
//        
//        
//        
//        row=here.x;
//        col=here.y;
//        MAZE[row][col] = 2;     // 지나간 곳이라고 바꿔놓음
//
//        
//        
//        while (1){
//            if (checkPath(row-1,col) == 1) {
//                break;
//            }
//            else if (checkPath(row,col+1) == 1) {
//                break;
//            }
//            else if (checkPath(row+1,col) == 1) {
//                break;
//            }
//            else if (checkPath(row,col-1) == 1) {
//                break;
//            }
//            else {
//                if (is_empty()){
//                    printf("스택이 비어있습니다\n");
//                    return 0;       // ???? 이 리턴은 어디에서 나오는 리턴임?
//                }
//                else {
//                    here = pop();
//                    printf("%d %d\n", here.x, here.y);
//                }
//                break;
//            }
//
//        }
//        printStack();
//
//        display_maze();
//    }
//    
//}



// or



//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_STACK_SIZE 100
//#define ROW 6
//#define COLUMN 7
//
//
//typedef struct StackObject {
//    int x;
//    int y;
//}StackObject;
//
//
//StackObject stack[MAX_STACK_SIZE];
//int top;
//StackObject entry = {1,0}, here = {1,0}, Exit = {4,6};
//
//
//int MAZE[6][7] = {
//    {0, 0, 0, 0, 0, 0, 0},
//    {0, 1, 1, 1, 1, 1, 1},
//    {0, 0, 0, 0, 1, 0, 0},
//    {0, 0, 1, 0, 1, 0, 0},
//    {0, 1, 0, 1, 1, 0, 0},
//    {0, 0, 0, 0, 0, 0, 0},
//};
//
//
//
//// 스택 초기화 함수
//void init ()
//{
//    top = -1;
//}
//
//// 공백 상태 검출 함수
//int is_empty() {
//    return (top == -1);
//}
//
//// 포화 상태 검출 함수
//int is_full()
//{
//    return (top == (MAX_STACK_SIZE-1));
//}
//
//// 삽입함수
//void push(StackObject item)
//{
//    if ( is_full() ) {
//        fprintf(stderr,"스택 포화 에러\n");
//        return;
//    }
//    else stack[++top] = item;
//}
//
//
//// 삭제함수
//StackObject pop()
//{
//    if (is_empty() ) {
//        fprintf(stderr, "스택 공백 에러\n");
//        exit(1);
//    }
//    else return stack[top--];
//}
//
//
//// 피크함수
//StackObject peek()
//{
//    if (is_empty()) {
//        fprintf(stderr, "스택 공백 에러\n");
//        exit(1);
//    }
//    else return stack[top];
//}
//
//
//void display_maze()
//{
//    for (int i=0; i<6; i++) {
//        for (int j=0; j<7; j++) {
//            printf("%d ", MAZE[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n\n");
//}
//
//
//void printStack()
//{
//    for (int i=top; i>=0; i--)
//    {
//        printf("|(%d,%d)|\n", stack[i].x, stack[i].y);
//    }
//}
//
//
//
//int checkPath(int row, int col)
//{
//    // ROW=6， COLUMN=7
//    // 6행 7열
//    if (row < 0 || row > ROW  || col < 0 || col > COLUMN)   // 배열 범위 벗어나면 return
//        return 0;
//    if (MAZE[row][col] == 0 ){
//        StackObject data = {here.x, here.y};
//        push(data);             // 스택에 넣어줌
//        here.x = row;           // here 업데이트
//        here.y = col;
//        return 1;
//    }
//    return 0;
//}
//
//
//
//
//int main()
//{
//    init();     // 스택 초기화
//    display_maze(); // initial maze
//
//
//
//    int row,col;
//    while (here.x != Exit.x || here.y != Exit.y) {
//
//
//
//        row=here.x;
//        col=here.y;
//        MAZE[row][col] = 2;     // 지나간 곳이라고 바꿔놓음
//
//
//
//        while (1){
//            if (checkPath(row-1,col) == 1) {
//                break;
//            }
//            else if (checkPath(row,col+1) == 1) {
//                break;
//            }
//            else if (checkPath(row+1,col) == 1) {
//                break;
//            }
//            else if (checkPath(row,col-1) == 1) {
//                break;
//            }
//            else {
//                if (is_empty()){
//                    printf("스택이 비어있습니다\n");
//                    return 0;       // ???? 이 리턴은 어디에서 나오는 리턴임?
//                }
//                else {
//                    here = pop();
//                    printf("%d %d\n", here.x, here.y);
//                }
//                break;
//            }
//
//        }
//        printStack();
//
//        display_maze();
//    }
//
//}




// Question 5. 스택을 사용하여 10 진수를 2진수로 변환하는 프로그램을 작성하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_STACK_SIZE 100
//
//typedef int element;
//typedef struct {
//    element stack[MAX_STACK_SIZE];
//    int top;
//} StackType;
//
//
//
//// 스택 초기화 함수
//void init (StackType *s)
//{
//    s->top = -1;
//}
//
//// 공백 상태 검출 함수
//int is_empty(StackType *s) {
//    return (s->top == -1);
//}
//
//// 포화 상태 검출 함수
//int is_full(StackType *s)
//{
//    return (s->top == (MAX_STACK_SIZE-1));
//}
//
//// 삽입함수
//void push(StackType *s, element item)
//{
//    if ( is_full(s) ) {
//        fprintf(stderr,"스택 포화 에러\n");
//        return;
//    }
//    else s->stack[++(s->top)] = item;
//}
//
//
//// 삭제함수
//element pop(StackType *s)
//{
//    if (is_empty(s) ) {
//        fprintf(stderr, "스택 공백 에러\n");
//        exit(1);
//    }
//    else return s->stack[(s->top)--];
//}
//
//// 피크함수
//element peek(StackType *s)
//{
//    if (is_empty(s)) {
//        fprintf(stderr, "스택 공백 에러\n");
//        exit(1);
//    }
//    else return s->stack[(s->top)];
//}
//
//
//void decimal_to_binary(StackType *s, int num)
//{
//    while (num != 0) {
//        push(s, num%2);
//        num /= 2 ;
//    }
//}
//
//
//int main()
//{
//    StackType s;
//    init(&s);
//    
//    int num;
//    printf("10진수 값 입력 : ");
//    scanf("%d",&num);
//    
//    printf("2진수 ==> ");
//    decimal_to_binary( &s ,num);
//    
//    while ( !is_empty(&s) ) {
//        printf("%d", pop(&s));
//    }
//    printf("\n");
//}





// Question 9
// 스택을 사용하여 계산기 프로그램을 작성하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//#define MAX_STACK_SIZE 100
////#define TRUE 1
////#define FALSE 0
//
//typedef char element;
//typedef struct {
//    element stack[MAX_STACK_SIZE];
//    int top;
//} StackType;
//
//
//// 스택 초기화 함수
//void init (StackType *s)
//{
//    s->top = -1;
//}
//
//// 공백 상태 검출 함수
//int is_empty(StackType *s) {
//    return (s->top == -1);
//}
//
//// 포화 상태 검출 함수
//int is_full(StackType *s)
//{
//    return (s->top == (MAX_STACK_SIZE-1));
//}
//
//// 삽입함수
//void push(StackType *s, element item)
//{
//    if ( is_full(s) ) {
//        fprintf(stderr,"스택 포화 에러\n");
//        return;
//    }
//    else s->stack[++(s->top)] = item;
//}
//
//
//// 삭제함수
//element pop(StackType *s)
//{
//    if (is_empty(s) ) {
//        fprintf(stderr, "스택 공백 에러\n");
//        exit(1);
//    }
//    else return s->stack[(s->top)--];
//}
//
//// 피크함수
//element peek(StackType *s)
//{
//    if (is_empty(s)) {
//        fprintf(stderr, "스택 공백 에러\n");
//        exit(1);
//    }
//    else return s->stack[(s->top)];
//}
//
//// 연산자의 우선순위를 반환한다.
//int precedence(char ch) 
//{
//    switch (ch) {
//        case '(': case ')': return 0;
//        case '+': case '-': return 1;
//        case '*': case '/': return 2;
//    }
//    return -1;
//}
//
//
//
//// 3가지 컨디션
////1. stack == isempty() && 문자열 끝이면 O
////2. stack == empty인데 문자열이 끝이 아니면 X
////3. 문자열 끝인데, stack != empty이면 X
//int checkParenthesis(char *exp)
//{
//    StackType s;
//    init(&s);    // top에 -1 설정 (꼭 해야됨)
//
//    char ch, stackCh;
//    int i=0;
//    while (exp[i] != 0) {
//        ch = exp[i];
//        
//        switch (ch) {
//            case '(': case'{': case'[':
//                push(&s, ch);
//                break;
//            case ')': case'}': case']':
//                if (is_empty(&s)) return 0;      // 문자열 끝이아닌데, 스택이 비어있으면 X
//                else {
//                    stackCh=pop(&s);
//                    if ((ch == ')' && stackCh != '(') ||
//                        (ch == '}' && stackCh != '{') ||
//                        (ch == ']' && stackCh != '['))
//                        return 0;
//                }
//                break;
//        }
//        i++;
//    }
//    if (!is_empty(&s)) return 0;     // 문자열이 끝, Stack != Empty이면 X
//    return 1;       // 문자열이 끝, Stack == empty이면 O
//}
//
//
//
//// 후위표기법 변환
//void infix_to_postfix(char *exp, char *postExp) {
//    StackType s;
//    init(&s);    // top에 -1 설정 (꼭 해야됨)
//
//    
//    char ch;
//    int i=0;    // exp용
//    int j=0;    // postExp용
//    
//    while (exp[i] != 0) {
//        ch = exp[i];
//        switch (ch) {
//            case '+': case '-': case '*': case '/':
//                if (is_empty(&s) || precedence(ch) > precedence( peek(&s) )) {
//                    push(&s, ch);
//                }
//                else {
//                    while( precedence(ch) <= peek(&s) )
//                        postExp[j++] = pop(&s);
//                }
//                break;
//                
//            case '(':   // if incoming symbol is '(', push()
//                push(&s, ch);
//                break;
//                
//            case ')':   // if incoming symbol is ')', pop() until '(' is found
//                while(peek(&s)!='(')
//                    postExp[j++] = pop(&s);
//                pop(&s);
//                break;
//                
//            default:    // print operands as they arrive
//                postExp[j++] = ch;
//
//                break;
//        }
//        i++;
//    }
//    while (!is_empty(&s))   // At the end of the expressiopn, pop() all operators of stack
//        postExp[j++] = pop(&s);
//    postExp[j]=0;
//}
//
//
//
//// 계산
//int calculation(char *postExp)
//{
//    StackType s;
//    init(&s);    // top에 -1 설정 (꼭 해야됨)
//
//    int i=0, result;
//    int n1, n2;
//    
//
//    char ch;
//    char tmp;
//    while ( postExp[i] != 0 ) {
//        ch = postExp[i];
//        
//        switch (ch) {
//            case '+': 
//                n2 = pop(&s) - '0';     // int형으로 변환
//                n1 = pop(&s) - '0';
//                result = n1 + n2;
//                push(&s, result + '0' );     // ascii-code로 보냄
//                break;
//            case '-':
//                n2 = pop(&s) - '0';
//                n1 = pop(&s) - '0';
//                result = n1 - n2;
//                push(&s, result + '0' );     // ascii-code로 보냄
//                break;
//            case '*':
//                n2 = pop(&s) - '0';
//                n1 = pop(&s) - '0';
//                result = n1 * n2;
//                push(&s, result + '0' );     // ascii-code로 보냄
//                break;
//            case '/':
//                n2 = pop(&s) - '0';
//                n1 = pop(&s) - '0';
//                result = n1 / n2;
//                push(&s, result + '0' );     // ascii-code로 보냄
//                break;
//            default:
//                push(&s, ch );
//                break;
//        }
//        i++;
//    }
//    result = pop(&s) - '0' ;  // 다 끝나면 stack에서 꺼냄, 다만 다시 int 형으로 변환
//    return result;
//}
//
//
//
//
//int main()
//{
////    char exp[] = "1+2*3";
////    char exp[] = "(1+2)*3";
//    char exp[] = "((1-2)+3)*(5-2)";
//    char postExp[30];
//    printf("%s\n", exp);
//    
//    
//    // 괄호 검사
//    if (checkParenthesis(exp) == 1) {
//        printf("괄호검사성공!!\n\n");
//
//        //     후위 표기법
//        infix_to_postfix(exp, postExp);
//        printf("%s\n\n", postExp);
//        
//        //     계산
//        int result = calculation(postExp);
//        printf("%d\n", result);
//    }
//    
//    else {
//        printf("괄호검사실패\n");
//        return 0;
//    }
//}








// Question 10
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_STACK_SIZE 100
//
//typedef struct {
//    int height;
//    int index;
//}element;
//
//
//typedef struct StackType {
//    element stack[MAX_STACK_SIZE];
//    int top;
//}StackType;
//
//
//// 스택 초기화 함수
//void init (StackType *s)
//{
//    s->top = -1;
//}
//
//// 공백 상태 검출 함수
//int is_empty(StackType *s) {
//    return (s->top == -1);
//}
//
//
//// 포화 상태 검출 함수
//int is_full(StackType *s)
//{
//    return (s->top == (MAX_STACK_SIZE-1));
//}
//
//// 삽입함수
//void push(StackType *s, element item)
//{
//    if ( is_full(s) ) {
//        fprintf(stderr,"스택 포화 에러\n");
//        return;
//    }
//    else s->stack[++(s->top)] = item;
//}
//
//
//// 삭제함수
//element pop(StackType *s)
//{
//    if (is_empty(s) ) {
//        fprintf(stderr, "스택 공백 에러\n");
//        exit(1);
//    }
//    else return s->stack[(s->top)--];
//}
//
//
//// 피크함수
//element peek(StackType *s)
//{
//    if (is_empty(s)) {
//        fprintf(stderr, "스택 공백 에러\n");
//        exit(1);
//    }
//    else return s->stack[(s->top)];
//}
//
//
//int checkTower(StackType *s, element tmp)
//{
//    int result=0;
//    
//    if (tmp.index == 1) {
//        push(s, tmp);
//        return 0;
//    }
//    
//    if (tmp.height >= peek(s).height) {
//        while (!is_empty(s)) {
//            if (tmp.height < peek(s).height) break;
//            pop(s);
//        }
//        if (!is_empty(s))
//            result = peek(s).index;
//        push(s, tmp);
//    }
//    else {
//        result= peek(s).index;
//        push(s, tmp);
//    }
//    
//    return result;
//}
//
//
//int main()
//{
//    StackType s;
//    init(&s);
//    
//    element tmp;
//    int cnt=0;
//    
//    
//    int towerNum, height;
//    printf("탑의 개수 : ");
//    scanf("%d", &towerNum);
//    
//    for (int i=0; i<towerNum; i++) {
//        printf("%d 번째 탑의 높이 : ", i+1);
//        scanf("%d", &tmp.height);
//        cnt++;
//        tmp.index=cnt;
//        printf("==>수신가능한 탑 %d번\n\n", checkTower(&s, tmp));
//        
////        for (int i=s.top; i>-1; i--){
////            printf("%d\n", s.stack[i].height);
////        }
////        printf("\n\n");
//        
//    }
//}





// or



//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_STACK_SIZE 100
//
//typedef struct {
//    int height;
//    int index;
//}element;
//
//
//typedef struct StackType {
//    element stack[MAX_STACK_SIZE];
//    int top;
//}StackType;
//
//
//// 스택 초기화 함수
//void init (StackType *s)
//{
//    s->top = -1;
//}
//
//// 공백 상태 검출 함수
//int is_empty(StackType *s) {
//    return (s->top == -1);
//}
//
//
//// 포화 상태 검출 함수
//int is_full(StackType *s)
//{
//    return (s->top == (MAX_STACK_SIZE-1));
//}
//
//// 삽입함수
//void push(StackType *s, element item)
//{
//    if ( is_full(s) ) {
//        fprintf(stderr,"스택 포화 에러\n");
//        return;
//    }
//    else s->stack[++(s->top)] = item;
//}
//
//
//// 삭제함수
//element pop(StackType *s)
//{
//    if (is_empty(s) ) {
//        fprintf(stderr, "스택 공백 에러\n");
//        exit(1);
//    }
//    else return s->stack[(s->top)--];
//}
//
//
//// 피크함수
//element peek(StackType *s)
//{
//    if (is_empty(s)) {
//        fprintf(stderr, "스택 공백 에러\n");
//        exit(1);
//    }
//    else return s->stack[(s->top)];
//}
//
//element compare;
//
//void checkTower(StackType *s, element tmp)
//{
//    while ( compare.height <=  tmp.height && compare.index!=0) {
//        pop(s);
//        compare=peek(s);
//    }
//
//}
//
//
//int main()
//{
//    StackType s;
//    init(&s);
//    
//    element tmp;
//    compare.height=compare.index=0;
//    
//    
//    int cnt=0;
//    
//    
//    int towerNum, height;
//    printf("탑의 개수 : ");
//    scanf("%d", &towerNum);
//    
//    for (int i=0; i<towerNum; i++) {
//        printf("%d 번째 탑의 높이 : ", i+1);
//        scanf("%d", &tmp.height);
//        tmp.index=++cnt;
//        
//        checkTower(&s, tmp);
//        printf("==>수신가능한 탑 : %d\n\n", compare.index);
//        push(&s, tmp);
//        
////        for (int i=s.top; i>-1; i--){
////            printf("%d\n", s.stack[i].height);
////        }
////        printf("\n\n");
//        
//    }
//}
//
