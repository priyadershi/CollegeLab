// User-defined Header File
//Function-like Macros for Aritmetic Operation

//Arithmetic fuctions

void add(int,int);
void sub(int,int);
void mul(int,int);
void div(float,float);

void add(int a,int b)
{
    printf("sum of %d & %d : %d",a,b,a+b);
}

void sub(int a,int b)
{
    printf("Subtraction of %d & %d : %d",a,b,a-b);
}

void mul(int a,int b)
{
    printf("Multiplication of %d & %d : %d",a,b,a*b);
}

void div(float a,float b)
{
    printf("Division of %.1f & %.1f: %.2f ",a,b,a/b);
}
