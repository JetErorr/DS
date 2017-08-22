#define MAXSIZE 5

typedef struct stack
{
  int stk[MAXSIZE];
  int top;
} STACK;

STACK *s;

void push(void);
int  pop(void);
void display(void);

void push ()
{

    int num;
    if (s->top == (MAXSIZE - 1))
    {
        printf ("Stack is Full\n");
        return;
    }
    else
    {
        printf ("Enter the element to be pushed\n");
        scanf ("%d", &num);
        s->top = s->top + 1;
        s->stk[s->top] = num;
    }
    return;
}
int pop ()
{
    int num;
    if (s->top == - 1)
    {
        printf ("Stack is Empty\n");
        return (s->top);
    }
    else
    {
        num = s->stk[s->top];
        printf ("poped element is = %dn", s->stk[s->top]);
        s->top = s->top - 1;
    }
    return(num);
}
void display ()
{
    int i;
    if (s->top == -1)
    {
        printf ("Stack is empty\n");
        return;
    }
    else
    {
        printf ("\n The status of the stack is \n");
        for (i = s->top; i >= 0; i--)
        {
            printf ("%d\n", s->stk[i]);
        }
    }
    printf ("\n");
}
