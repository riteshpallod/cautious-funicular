#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

struct Stack
{
    vector<int> array;
    int top;
    int size;
};

struct Stack* createStack(int size)
{
    struct Stack *stack = (struct Stack *) malloc(sizeof(struct Stack));  //can use new
    stack->size = size;
    stack->array.reserve(stack->size);
    stack->top = -1;
    return stack;
} 

int isEmpty(struct Stack *stack)
{
    if (stack->top == -1)
        return 1; //true
    return 0; //false
}

void repeatedDoubling(struct Stack* stack)
{
    cout << "[doubling stack]" << endl;
    stack->size = stack->size * 2;
    stack->array.resize(stack->size);
}

void push(struct Stack *stack, int element)
{
    /*
    if (stack->top == (stack->size -1)) //full stack
        cout << "full stack" << endl;
    else 
    {
        stack->top++;
        stack->array[stack->top] = element; 
    }*/

    repeatedDoubling(stack);
    stack->top++;
    stack->array[stack->top] = element;    
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
    stack = createStack(1);

    cout << isEmpty(stack) << endl;
    
    push(stack, 11);
    push(stack, 6);
    cout << pop(stack) << endl;
    cout << pop(stack) << endl;
    cout << pop(stack) << endl;

    return 0;
}