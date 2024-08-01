void myabs(int *a);
void SwapIntPtr(int *p1, int *p2);


void SwapIntPtr(int *p1, int *p2)
{
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp; 
}


void myabs(int *a)
{
    if (*a<0)
        *a = -*a;
}
