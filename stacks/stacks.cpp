#include <iostream>
#include <stdlib.h>

using namespace std;

struct Stack
{
    int *array;
    int top;
    int size;
};

struct Stack* createStack(int size)
{
    struct Stack *stack = (struct Stack *) malloc(sizeof(struct Stack));  //can use new
    stack->size = size;
    stack->array = (int *) malloc(stack->size*sizeof(int));
    stack->top = -1;
    return stack;
} 

int isEmpty(struct Stack *stack)
{
    if (stack->top == -1)
        return 1; //true
    return 0; //false
}

void push(struct Stack *stack, int element)
{
    if (stack->top == (stack->size -1)) //full stack
        cout << "full stack" << endl;
    else 
    {
        stack->top++;
        stack->array[stack->top] = element; 
    }    
}

int pop(struct Stack* stack)
{
    if (isEmpty(stack))
    {
        cout << "empty stack" << endl;
        return -999;        
    }
    else
    {
        return stack->array[stack->top--];
    }
}

int main()
{
    struct Stack *stack;
    stack = createStack(12);

    cout << isEmpty(stack);
    
    push(stack, 11);
    push(stack, 6);
    cout << pop(stack) << endl;
    cout << pop(stack) << endl;
    cout << pop(stack) << endl;

    return 0;
}