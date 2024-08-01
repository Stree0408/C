//// 1. 배열기반 원형큐를 작성하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//
//
//#define MAX_QUEUE_SIZE 10
//
//typedef int element;
//typedef struct {
//    element queue[MAX_QUEUE_SIZE];
//    int front, rear;
//} QueueType;
//
//
//
//void error (char *message)
//{
//    fprintf(stderr, "%s\n", message);
//    exit(1);
//}
//
//// 초기화 함수
//void init(QueueType *q)
//{
//    q->front = q->rear = 0;
//}
//
//// 공백 상태 검출 함수
//int is_empty(QueueType *q)
//{
//    return (q->front == q->rear);
//}
//
//// 포화 상태 검출 함수
//int is_full(QueueType *q)
//{
//    return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
//}
//
//// 삽입 함수
//void enqueue (QueueType *q, element item)
//{
//     if (is_full(q))
//         error("큐가 포화상태입니다");
//    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
//    q->queue[q->rear] = item;
//}
//
//// 삭제 함수
//element dequeue (QueueType *q)
//{
//    if (is_empty(q))
//        error("큐가 공백상태입니다");
//    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
//    return q->queue[q->front];
//}
//
//element peek(QueueType *q)
//{
//    if (is_empty(q))
//        error("큐가 공백상태입니다");
//    return q->queue[(q->front + 1) % MAX_QUEUE_SIZE];
//}
//
//
//int main()
//{
//    QueueType q;
//    init(&q);       // 초기화해주고
//    
//    int cho,num;
//    printf("front=%d rear=%d\n", q.front, q.rear);
//    
//    while(1) {
//        printf("1.enqueue 2.dequeue 3.종료");
//        scanf("%d", &cho);
//        if (cho==1) {
//            printf("정수입력 : ");
//            scanf("%d", &num);
//            enqueue(&q, num);
//            printf("front=%d rear=%d\n", q.front, q.rear);
//            printf("%d\n", q.front);
//            printf("%d\n", peek(&q));
//        }
//        
//        if (cho == 2) {
//            printf("dequeue()=%d\n", dequeue(&q));
//            printf("front=%d rear=%d\n", q.front, q.rear);
//        }
//        if (cho == 3 ) break;
//    }
//}



// singly linked list
// 2. 연결리스트 기반 큐를 구현하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int element;    // 요소의 타입
//typedef struct QueueNode {  // 큐의 노드의 타입
//    element item;
//    struct QueueNode *link;
//} QueueNode;
//
//
//typedef struct {    // 큐 ADT 구현
//    QueueNode *front, *rear;
//} QueueType;
//
//
//// 오류 함수
//void error (char *message)
//{
//    fprintf(stderr, "%s\n", message);
//    exit(1);
//}
//
//// 초기화 함수
//void init(QueueType *q)
//{
//    q->front = q->rear = 0;
//}
//
//// 공백 상태 검출 함수
//int is_empty(QueueType *q)
//{
//    return (q->front == NULL);
//}
//
//// 포화 상태 검출 함수
//int is_full(QueueType *q)
//{
//    return 0;
//}
//
//
//// 삽입 함수
//void enqueue (QueueType *q, element item)
//{
//    QueueNode *temp = (QueueNode *)malloc(sizeof(QueueNode));
//    if (temp == NULL)
//        error("메모리를 할당할 수 없습니다");
//    else {
//        temp->item = item;      // 데이터 저장
//        temp->link = NULL;      // 링크 필드를 NULL
//        if (is_empty(q)) {      // 큐가 공백이면
//            q->front = temp;
//            q->rear = temp;
//        }
//        else {                  // 큐가 공백이 아니면
//            q->rear->link = temp;   // 순서가 중요
//            q->rear = temp;
//        }
//    }
//}
//
//
//// 삭제 함수
//element dequeue (QueueType *q)
//{
//    QueueNode *temp = q->front;
//    element item;
//    if (is_empty(q))    // 공백상태
//        error("큐가 비어 있습니다");
//    else {
//        item = temp->item;      // 데이터를 꺼낸다
//        q->front = q->front->link;  // front를 다음노드를 가르키도록 한다.
//        if (q->front == NULL)   // 공백상태
//            q->rear = NULL;
//        free(temp);     // 동적메모리 해제
//        return item;    // 데이터 반환
//    }
//    return 1;  // 아무거나 집어넣어도 여차피 여기까지 안와서 상관 ㄴ
//}
//
//
//// peek 함수
//element peek(QueueType *q)
//{
//    element item;
//    if (is_empty(q))
//        error("큐가 비어 있습니다");
//    else {
//        item = q->front->item;  // 데이터를 꺼낸다
//        return item;            // 데이터 반환
//    }
//    return 1;       // 아무거나 집어넣어도 여차피 여기까지 안와서 상관 ㄴ
//}
//
//
//int main()
//{
//    QueueType q;
//    init(&q);
//    int cho,num;
//    printf("front=%d rear=%d\n", q.front, q.rear);
//    
//    while(1) {
//        printf("1.enqueue 2.dequeue 3.종료");
//        scanf("%d", &cho);
//        if (cho ==1) {
//            printf("정수입력 :");
//            scanf("%d", &num);
//            enqueue(&q, num);
//        }
//        if (cho==2) {
//            printf("dequeue()=%d\n", dequeue(&q));
//        }
//        if (cho==3) break;
//    }
//}




// circular array 사용
// 3. 은행서비스 시뮬레이션 프로그램을 작성하여 봅시다.
// 큐잉이론에 따라 시스템의 특성을 시뮬레이션 하여 분석하는 데 이용
// 큐잉모델은 고객에 대한 서비스를 수행하는 서버와 서비스를 받는 고객들로 이루어 진다
// 은행에서 고객이 들어와서 서비스를 받고 나가는 과정을 시뮬레이션
// 고객들이 기다리는 평균시간을 계산


//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//
//#define TRUE 1
//#define FALSE 0
//#define MAX_QUEUE_SIZE 100
//typedef struct {
//    int id;
//    int arrival_time;
//    int service_time;
//} element;
//
//
//typedef struct {
//    element queue[MAX_QUEUE_SIZE];
//    int front, rear;
//} QueueType;
//
//
//static QueueType queue;
//
//
//// 초기화 함수
//void init(QueueType *q)
//{
//    q->front = q->rear = 0;
//}
//
//
//// 공백 상태 검출 함수
//int is_empty(QueueType *q)
//{
//    return (q->front == q->rear);
//}
//
//// 포화 상태 검출 함수
//int is_full(QueueType *q)
//{
//    return ((q->rear + 1 ) % MAX_QUEUE_SIZE == q->front);
//}
//
//
//// 삽입 함수
//void enqueue (QueueType *q, element item)
//{
//    if (is_full(q)) {
//        fprintf(stderr, "큐가 포화 상태입니다\n");
//        return;
//    }
//    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
//    q->queue[q->rear] = item;
//}
//
//// 삭제 함수
//element dequeue (QueueType *q)
//{
//    if (is_empty(q)) {
//        fprintf(stderr, "큐가 공백상태입니다\n");
//        exit(1);
//    }
//    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
//    return q->queue[q->front];
//}
//
//
//
//// 시뮬레이션에 필요한 여러가지 상태 변수
//int duration = 10;  // 시뮬레이션 시간
//double arrival_prob = 0.7;  // 하나의 시간 단위에 도착하는 평균 고객의 수
//int max_serv_time = 5; // 하나의 고객에 대한 최대 서비스 시간
//int Clock;
//
//
//
//// 시뮬레이션의 결과
//int customers;      // 전체 고객수
//int served_customers;   // 서비스받은 고객수
//int waited_time;    // 고객들이 기다린 시간
//
//
//double Random()
//{
//    return rand() / (double)RAND_MAX;       // 0.0 ～ 1.0 값을 리턴
//}
//
//
//
//// 랜덤 숫자를 생성하여 고객이 도착했는지 도착하지 않았는지를 판단
//int is_customer_arrived()
//{
//    if ( Random() < arrival_prob)
//        return TRUE;
//    else return FALSE;
//}
//
//
//
//// 새로 도착한 고객을 큐에 삽입
//void insert_customer(int arrival_time)
//{
//    element customer;
//    
//    customer.id = customers++;
//    customer.arrival_time = arrival_time;
//    customer.service_time = (int)(max_serv_time * Random()) + 1;
//    enqueue(&queue, customer);
//    printf("고객 %d이 %d분에 들어옵니다. 서비스시간은 %d분입니다.\n",
//           customer.id, customer.arrival_time, customer.service_time);
//}
//
//
//
//// 큐에서 기다리는 고객을 꺼내어 고객의 서비스 시간을 반환
//int remove_customer()
//{
//    element customer;
//    int service_time = 0;
//    
//    if (is_empty(&queue)) return 0;
//    
//    customer = dequeue(&queue);
//    service_time = customer.service_time - 1;
//    served_customers++;
//    waited_time += Clock - customer.arrival_time;
//    printf("고객 %d이 %d분에 서비스를 시작합니다. 대기시간은 %d분이었습니다.\n",
//           customer.id, Clock, Clock - customer.arrival_time);
//    return service_time;
//}
//    
//
//// 통계치를 출력
//void print_stat()
//{
//    printf("서비스받은 고객수 = %d\n", served_customers);
//    printf("전체 대기 시간 = %d분\n", waited_time);
//    printf("1인당 평균 대기 시간 = %f분\n", (double)waited_time / served_customers);
//    printf("아직 대기중인 고객수 = %d\n\n", customers - served_customers);
//}
//
//
//
//int main()
//{
//    int service_time = 0;
//    
//    Clock = 0;
//    while (Clock < duration) {
//        Clock++;
//        printf("현재시각=%d\n", Clock);
//        if (is_customer_arrived()) {
//            insert_customer(Clock);
//        }
//        if (service_time > 0)
//            service_time--;
//        else {
//            service_time = remove_customer();
//        }
//    }
//    printf("\n\n");
//    print_stat();
//}





// Question 1
// 원형큐에 존재하는 요소의 개수를 반환하는 get_count() 함수를 작성하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_QUEUE_SIZE 6
//
//typedef int element;
//typedef struct {
//    element queue[MAX_QUEUE_SIZE];
//    int front, rear;
//} QueueType;
//
//
//
//void error (char *message)
//{
//    fprintf(stderr, "%s\n", message);
//    exit(1);
//}
//
//
//// 초기화 함수
//void init(QueueType *q)
//{
//    q->front = q->rear = 0;
//}
//
//// 공백 상태 검출 함수
//int is_empty(QueueType *q)
//{
//    return (q->front == q->rear);
//}
//
//// 포화 상태 검출 함수
//int is_full(QueueType *q)
//{
//    return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
//}
//
//
//// 삽입 함수
//void enqueue (QueueType *q, element item)
//{
//     if (is_full(q))
//         error("큐가 포화상태입니다");
//    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
//    q->queue[q->rear] = item;
//}
//
//
//// 삭제 함수
//element dequeue (QueueType *q)
//{
//    if (is_empty(q))
//        error("큐가 공백상태입니다");
//    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
//    return q->queue[q->front];
//}
//
//
//element peek(QueueType *q)
//{
//    if (is_empty(q))
//        error("큐가 공백상태입니다");
//    return q->queue[(q->front + 1) % MAX_QUEUE_SIZE];
//}
//
//
//int countQueue (QueueType *q)
//{
//    if (q->rear > q-> front)
//        return q->rear - q->front;
//    else
//        return MAX_QUEUE_SIZE - q->front + q->rear;
//}
//
//
//int main()
//{
//    QueueType q;
//    init(&q);
//    
//    int input, num ;
//    
//    while (1) {
//        printf("1.enqueue 2.dequeue 3.큐의개수 4.종료 ");
//        scanf("%d" , &input);
//        
//        if (input == 1 ){
//            printf("정수입력 : ");
//            scanf("%d" , &num);
//            enqueue(&q, num);
//        }
//        else if (input == 2 )
//            printf("dequeue() =%d\n", dequeue(&q));
//        else if (input == 3 )
//            printf("큐의 개수 : %d\n", countQueue(&q));
//        else if (input == 4 ) break;
//        
//        printf("front=%d rear=%d\n", q.front, q.rear);
//    }
//}







// Question 2
// 두 개의 스택을 사용하여 큐를 구현하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_STACK_SIZE 10
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
//element dequeue(StackType *s1, StackType *s2)
//{
//    if (is_empty(s1) && is_empty(s2)) {     // 여기 컨디션 확인
//        fprintf(stderr, "스택 공백 에러\n");
//        exit(1);
//    }
//    if (is_empty(s2)) {
//        for (int i=s1->top; i>-1; i--) {
//            push(s2, pop(s1));
//        }
//    }
//    return pop(s2);
//}
//
//
//
//int main()
//{
//    StackType s1, s2;
//    init(&s1);
//    init(&s2);
//    
//    
//    printf("큐에 숫자 0~9를 추가합니다.\n");
//    for (int i=0; i<10; i++){
//        push(&s1, i);
//    }
//    
//    printf("큐 크기: %d\n", s1.top + s2.top + 2);
//    printf("peek: %d\n", peek(&s1));
//    printf("dequeue: %d\n", dequeue(&s1, &s2) );
//    printf("dequeue: %d\n", dequeue(&s1, &s2) );
//    printf("dequeue: %d\n", dequeue(&s1, &s2) );
//    printf("큐 크기: %d\n", s1.top + s2.top + 2);
//}




// Question 4
//#include <stdio.h>
//#include <stdlib.h>
//
//
//#define MAX_QUEUE_SIZE 8
//
//typedef int element;
//typedef struct {
//    element queue[MAX_QUEUE_SIZE];
//    int front, rear;
//} QueueType;
//
//
//
//void error (char *message)
//{
//    fprintf(stderr, "%s\n", message);
//    exit(1);
//}
//
//// 초기화 함수
//void init(QueueType *q)
//{
//    q->front = q->rear = 0;
//}
//
//// 공백 상태 검출 함수
//int is_empty(QueueType *q)
//{
//    return (q->front == q->rear);
//}
//
//// 포화 상태 검출 함수
//int is_full(QueueType *q)
//{
//    return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
//}
//
//
//// 삽입 함수
//void enqueue (QueueType *q, element item)
//{
//     if (is_full(q))
//         error("큐가 포화상태입니다");
//    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
//    q->queue[q->rear] = item;
//}
//
//// 삭제 함수
//element dequeue (QueueType *q)
//{
//    if (is_empty(q))
//        error("큐가 공백상태입니다");
//    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
//    return q->queue[q->front];
//}
//
//element peek(QueueType *q)
//{
//    if (is_empty(q))
//        error("큐가 공백상태입니다");
//    return q->queue[(q->front + 1) % MAX_QUEUE_SIZE];
//}
//
//
//int main()
//{
//    QueueType q;
//    init(&q);
//    
//    int num;
//    int result[MAX_QUEUE_SIZE-2];
//    printf("카드 장수 : ");
//    scanf("%d", &num);
//    
//    for (int i=0; i<num; i++)
//        enqueue(&q, i+1);
//    
//    int j=0, k=0;
//    while ( (q.front+1) % MAX_QUEUE_SIZE != q.rear) {
//        if (j%2==0)    // 짝수면
//            result[k++] = dequeue(&q);
//        else
//            enqueue(&q, dequeue(&q));
//        
//        j++;
//    }
//    
//    
//    printf("버린카드 : ");
//    for (int i=0; i<MAX_QUEUE_SIZE-2; i++)
//        printf("%d ", result[i]);
//    printf("\n");
//    
//    printf("마지막에 남은 카드 : %d\n\n" , peek(&q));
//}




// Question 5
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_QUEUE_SIZE 8
//
//typedef int element;
//typedef struct {
//    element queue[MAX_QUEUE_SIZE];
//    int front, rear;
//} QueueType;
//
//
//
//void error (char *message)
//{
//    fprintf(stderr, "%s\n", message);
//    exit(1);
//}
//
//
//// 초기화 함수
//void init(QueueType *q)
//{
//    for (int i=0; i<MAX_QUEUE_SIZE; i++) {
//        q->queue[i]=0;
//    }
//    q->front = q->rear = 0;
//}
//
//// 공백 상태 검출 함수
//int is_empty(QueueType *q)
//{
//    return (q->front == q->rear);
//}
//
//// 포화 상태 검출 함수
//int is_full(QueueType *q)
//{
//    return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
//}
//
//
//// 삽입 함수
//void enqueue (QueueType *q, element item)
//{
//     if (is_full(q))
//         error("큐가 포화상태입니다");
//    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
//    q->queue[q->rear] = item;
//}
//
//// 삭제 함수
//element dequeue (QueueType *q)
//{
//    if (is_empty(q))
//        error("큐가 공백상태입니다");
//    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
//    return q->queue[q->front];
//}
//
//element peek(QueueType *q)
//{
//    if (is_empty(q))
//        error("큐가 공백상태입니다");
//    return q->queue[(q->front + 1) % MAX_QUEUE_SIZE];
//}
//
//
//int main()
//{
//    QueueType q;
//    init(&q);
//
//
//    int numPeop, interval;
//    printf("총인원 간격 : ");
//    scanf("%d %d", &numPeop, &interval);
//
//
//    for (int i=0; i<numPeop; i++) {
//        enqueue(&q, i+1);
//    }
//
//
//    int i=0, j=0;
//    element result[MAX_QUEUE_SIZE-1]={0};
//    while ( (q.front+1) % MAX_QUEUE_SIZE != q.rear) {
//        i++;
//        if ( i % interval == 0 ) {
//            result[j++]= dequeue(&q);
//        }
//        else{
//            enqueue(&q, dequeue(&q));
//        }
//    }
//    result[j] = dequeue(&q);
//
//    
//    printf("제거되는 순서 <");
//    for (int i=0; i<MAX_QUEUE_SIZE-1; i++) {
//        printf("%d, ", result[i]);
//    }
//    printf(">\n\n");
//}



// or



//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_QUEUE_SIZE 8
//
//typedef int element;
//typedef struct {
//    element queue[MAX_QUEUE_SIZE];
//    int front, rear;
//} QueueType;
//
//
//
//void error (char *message)
//{
//    fprintf(stderr, "%s\n", message);
//    exit(1);
//}
//
//
//// 초기화 함수
//void init(QueueType *q)
//{
//    for (int i=0; i<MAX_QUEUE_SIZE; i++) {
//        q->queue[i]=0;
//    }
//    q->front = q->rear = 0;
//}
//
//// 공백 상태 검출 함수
//int is_empty(QueueType *q)
//{
//    return (q->front == q->rear);
//}
//
//// 포화 상태 검출 함수
//int is_full(QueueType *q)
//{
//    return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
//}
//
//
//// 삽입 함수
//void enqueue (QueueType *q, element item)
//{
//     if (is_full(q))
//         error("큐가 포화상태입니다");
//    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
//    q->queue[q->rear] = item;
//}
//
//// 삭제 함수
//element dequeue (QueueType *q)
//{
//    if (is_empty(q))
//        error("큐가 공백상태입니다");
//    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
//    return q->queue[q->front];
//}
//
//element peek(QueueType *q)
//{
//    if (is_empty(q))
//        error("큐가 공백상태입니다");
//    return q->queue[(q->front + 1) % MAX_QUEUE_SIZE];
//}
//
//
//int checkQueue(QueueType *q)
//{
//    for (int i=0; i<MAX_QUEUE_SIZE; i++)
//    {
//        if (q->queue[i] != 0){
//            return 1;
//        }
//    }
//    return 0;
//}
//
//
//
//int main()
//{
//    QueueType q;
//    init(&q);
//    
//
//    int numPeop, interval;
//    printf("총인원 간격 : ");
//    scanf("%d %d", &numPeop, &interval);
//
//    
//    for (int i=0; i<numPeop; i++) {
//        enqueue(&q, i+1);
//    }
//    
//
//    int i=0, j=0;
//    element result[MAX_QUEUE_SIZE-1]={0};
//    while ( checkQueue(&q) ) {
//        if (q.queue[(q.front+1)%MAX_QUEUE_SIZE] != 0) {
//            i++;
//            if ( i%interval == 0 ) {
//                result[j++] = dequeue(&q);
//                q.queue[q.front] = 0;
//            }
//            else
//                q.front = (q.front + 1) % MAX_QUEUE_SIZE;
//            q.rear = (q.rear +1) % MAX_QUEUE_SIZE;
//        }
//        else {
//            q.front = (q.front + 1) % MAX_QUEUE_SIZE;
//            q.rear = (q.rear +1) % MAX_QUEUE_SIZE;
//        }
//        
//
//    }
//    
//    printf("제거되는 순서 <");
//    for (int i=0; i<MAX_QUEUE_SIZE-1; i++) {
//        printf("%d, ", result[i]);
//    }
//    printf(">\n\n");
//}


