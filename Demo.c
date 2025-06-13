//  #include<stdio.h>
// int main(){
//     printf("Hello World!, I am Juhi Kumari!.....");
//     return 0;
// }

//  c is case sensitive language.
//  .c is an extension of c language file.
//  c language supports 32 keywords.

// #include<stdio.h>
//  int main(){ 
//     printf("first C program..........");
//     return 0 ;
// }

/*
advantages : open source , easy to learn,portable, easy debbuging,dynamic memory allocation
disadvantages: object oriented, exception handling, garbage collrctor,platform dependent
*/

// #include<stdio.h>

// int main()
// {
//     printf("Hello world........");
//     return 0;   
// }

/*
programm debugging: after write a program the next step is to debug the program.
error: syntax , runtime , logical error.
syntax error: syntax error occurs when we violate any gramatical rules of programming language.
Runtime error: any error that causes abnormal program termination during execution.
Logical error: a logical error simply an incorrect translation of either the problem statement or the algorithm.
*/

// #include<stdio.h>
// int main()
// {
//     printf("today is very hot day i feel so tired i want to sleep in kanha godi.");
//     return 0;
// }

/*
what is tokens: token are the smallest unit of a program we can define the token as the smallest individual element.
Classification of tokens:
Tokens: keyword(32 key in c), identifier, string(" "), operators , constant, special symbol,

keywords and how many keywords in c:
keywords is a reversed word whose meaning already define in the compiler.
ex: int,float
There are 32 keywords in C language.
We can't use keywords for our personal work.

32 keywords in C language:
int,char, float double, void ,long ,short ,signed,while,do,for,break,return,if,else etc.

what is Datatype? and how many types of datatype.
Data type is a type of data which is used in the program. In other word we can say that it is used to declare a variable.
Datatype specify how we entered data in our program and what type of data we entered.
Data type are of two types:
1. primary datatype: int , char , flaot ,void .
2. secondary datatype: array,pointer,structure,union.
*/

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int a;
//     char b;
//     float c;
    
//     printf(" %d byte ",sizeof(a));
//     printf("%d byte",sizeof(b));
//     printf("%d byte" ,sizeof(c));
//     getch();
// }

/*
what is identifier: a identifier refer to name i.e used to identify variables function structures and so on.
identifier hamesha alag hota hai.


what is variable? and its type.
The name of memory location is called variable. it is used to store data variable are changable, we can change the value of variable 
during the execution of program and variable can be reused manytimes.
types: local ,global ,static ,automatic ,extension

Types of variable with syntax:
1. Local variable: a variable that is declared inside the function or block is called local variable.
2. global variable: a variable that is declared outside the function or block is called global variable.
3. auto variable: all variable are declared inside the block use automatic variable by default. we can explicity declare an automatically
variable using auto keyword.
4. Static variable: a variable that is declared with the static keyword called static variable. it retains its value between multiple function calls.
5. Extension variable: we can share a variable in multiple sources files by using an external variable.

*/

//  Local variable in C language:
// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int a;
//     printf("%d , a");
//     getch();
// }

//  Static variable
// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int a;
//     int b = 10;
//     static int c;
//     static int d = 20;
//     clrscr();
//     printf("%d %d %d %d",a,b,c,d);
//     getch();

// }

//  Global variable:
// #include<stdio.h>
// int a;
// void main()
// {
//     printf("%d",a);
// }
// void fun()
// {
//     printf("%d",a);

// }

// .................................. Adding two numbers............................

// #include<stdio.h>
// int main()
// {
//     int a = 67, b = 54,add;
//     add = a + b;
//     printf("%d",add);
//     return 0 ;
// }


// ................................ Swapping two numbers ....................................................

// #include<stdio.h>
// int main()
// {
//     int a,b,temp;
//     printf("Enter two numberd:");
//     scanf("%d%d" , &a,&b);

//     temp = a;
//     a = b;
//     b = temp;
//     printf("a = %d b = %d ",a,b);
//     return 0;

// }


// .......................................ASCII VALUE ...............................................
// #include<stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter any character:");
//     scanf("%c",&ch);
//     printf("%d" , ch);
//     return 0 ;
// }


/*
 what is constant? explain its type.
 constant is an entity that refers to fixed value and it can't be modified.
 constant are data values that never change their values during program execution

 TYPES.........
 1. integer constant
 2. character constants
 3. floating point constant
 4. string constant
*/

//  ........................ Integer constant ...............................
// #include<stdio.h>
// void main()
// {
//     const int a = 100;
//     printf("%d" ,a);
//     getch();
// }


// what is loop?
// any repeated task more than one time is called loop.
// three types of loop:
// 1. while loop
// 2.do while loop
// 3. for loop

/*
..............while loop..........................
 A while loop is a pre loop. it first test a specified conditional expression and as long as the condition expression 
 while loop also known as entry control loop. 

 ........... do while loop ................................. 
 do while loop more like while loop accept that it test the condition at the end of the loop body.
 do while loop also known as exit control loop. 

 ............ for loop ................................ 
 A for loop enables us to perform n number of steps together in one line. 
 in for loop a loop variable is used to control the loop. 
*/


// #include<stdio.h>
// int main()
// {
//     //  print natural number:
//     int n; i = 1;
//     printf("Enter any number:");
//     scanf("%d" , &n);

//     for(i = 1;i<=n;i++){
//         printf("%d" , i);
//     }
//     return 0;
// }

//  ................................... While loop .........................................
/*
while loop is a pre test loop it first test a specified conditional expression and as long as the conditional expressionis true loop body statements
will be executed.

syntax: while(condition)
{
---------------------} statement
}
*/

// #include<stdio.h>
// int main()
// {
//     int i = 1;
//     printf("%d" , i);
//     i++;
//     printf("%d" , i);
//     return 0;
// }

/*
................................ do while loop ............................
 do while loop is a post test loop. it is similar to while loop except it execute it body at least once weather the condition is true or false.
 the do while loop terminates when the text expression is evaluated to be zero. 
 
 ................................ for loop ....................................
 for loop execute the statements of program several times repeatedly until a given condition return false.

*/

// #include<stdio.h>
// int main()
// {
//     // input 5 ....> 5 10 15 20.....
//     int n,i;
//     printf("Enter any number:");
//     scanf("%d ,&n");
//     for(i = 1;i<=10; i++)
//     {
//         printf("%d*%d=%d\n",n,i,n*i);

//     }
//     return 0;
// }

// #include<stdio.h>
// main()
// {
//     int n,i,sum=0;
//     printf("enter number:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         sum=sum+i;
//     }
//     printf("sum of N natural number: %d" ,sum);

// }

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i = 1; i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1; i<=5; i++)
//     {
//        for(k=1;k<=i;k++)
//         {
//             printf("*");

//         }
//         printf("/n");
//     }
//     return 0;
// }        for(j = 5;j>=i;j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     for(i=1;i<=5;i++)
//     {
//         for(j=i;j<5;j++)
//         {
//             printf(" ");
//         }

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=3;i++)
//     {
//         for(j=1;j<=5;j++)
//         {
//             printf("*");
//         }
//         printf("/n");
//     }
// }


// #include<stdio.h>
// int main()
// {
//    int i,j;
//    for(i=1;i<=5;i++)
//    {
//     for(j=1;j<=i;j++)
//     {
//         printf("%d" , i);
//     }
//    }
//    printf("\n"); 
//    return 0;
// }

/*
...................................... operator...............................
operator is a symbol that used to perform mathematical or logical operation on variables and values. 

Three types of operator:
1. unary ..> increament/decreament sizeof. 
2. binary ..> arithmetic,logical,relational,bitewise.
3. ternnary ..> 

................................... Arithmetic operator .............................................
it is the most important operators. it takes numerical value in the form of input and procedure numerical value after performing operation.
operator: +(addition) -(substraction) *(multiplication) /(division) %(remainder)
*/

// #include<stdio.h>
// void main()
// {
//     int a = 20,b = 10;
//     printf("%d" , a+b);
//     printf("%d",a-b);
//     printf("%d" , a/b);
//     printf("%d" , a*b);
//     printf("%d" , a%b);
// }

/*
Relational operator in c programming:
Relational operator define some kinds of relation between two operators. it check numerically equally or non equally condition. 
this operators is very useful in conditional program value check condition between two operators.
*/
// #include<stdio.h>
// void main()
// {
//     int a = 5,b = 2;
//     printf("%d" ,a<b);
//     printf("%d" , a>b);
//     printf("%d" , a<=b);
//     printf("%d" , a == b);
// }

/*
....................................... logical operator ............................................ 
Logical operator are used to combine two or more than two relation logically. it always produce single result in the form of true or false
but at atime only one result is valid. 
1.AND 
2. OR 
3.NOT
*/
// #include<stdio.h>
// void main()
// {
//     int a = 5, b = 2;
//     printf("%d" ,(5<2) && (5>2));
//     printf("%d" ,(5<2);; (5>2));
    
// }

/*
............................................ Ternary operator ................................................
conditional operator is a ternary operator because it works on three operands. 
the conditional operator behaves like an if-else statement. 

Syntax: condition ? value-if-true: value-if false.

*/

// #include<stdio.h>
//  int main()
// {
//     int a,b,c,max;
//     printf("Enter three numbers: ");
//     scanf("%d%d%d" ,&a,&b,&c);

//     (a>b)? (a>c?a:c) : (b>c?b:c);
//     printf("%d" , max);
// }


/*
................................................. Assignment operator ..........................................
Assignment operator are used to something to assign the variable or value. 
types: simple assignment(=)
compound assignment ( + = - * / %)
*/

// #include<stdio.h>
// void main()
// {
//     int a =10;
//     printf("%d" , a);
// }


/* 
unary operator:
A operator which contains only style operator called unary operator. 

................................ Bitwise operator.................................................... 
Bitwise operator are used to perform indivudual bits of a number. it can be used only integer type values not float double etc. 

what is if statement? 
if statement is used when we want to test a condition of given condition is true if block will be executed otherwise skip remmaining code.

what is if-else statement?
it is used to perform two operations for a single condition. if the given condition is true then if block executed otherwise else block executed.asm
*/

// #include<stdio.h>
// int main()
// {
//     printf("hii i am juhi i'm very very cute girl");
//     return 0;

// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter any number");
//     scanf("%d",&n);

//     if(n%2==0)
//     {
//         printf("Even number");

//     }
//     else

//     {
//         printf("odd number");

//     }

// }

// #include<stdio.h>
// int main()
// {
//     int y;
//     printf("Enter any year:");
//     scanf("%d" ,&y);
//     if(y%400==0 || y%4==0 && y%100!=0)
//     {
//         printf("year is leap year");
//     }
//     else
//     {
//        printf("year is not leap year"); 
//     }
// }

// #include<stdio.h>
// int main()
// {
//     // input 7 ......> prime number
//     int n, i, count=0;
//     printf("Enter any number:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             count++;
//         }
//     }
//     if(count==2)
//     printf("prime number");
//     else
//     printf("not prime number");
//     return 0;


// }

// #include<stdio.h>
// void main()
// {
//     int n1,n2,i,j;
//     printf("Enter range:");
//     scanf("%d%d" , &n1, &n2);
//     for(i=n1;i<=n2; i++)
//     {
//         for(j=2;j<=i;j++)
//         {
//             if (i%j==0)
//             break;
//         }
//         if(i==j)
//         printf("%d" ,j);
//     }
// }

// #include<stdio.h>
// void main()
// {
//     // input 6 .......> 1+2+3 =6
//     int n,i, sum=0;
//     printf("Enter any number:");
//     scanf("%d,&n");
//     for(i=1;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             sum=sum+i;
//         }
        
//     }
//     if(sum==n)
//     printf("perfect number");
//     else
//     printf("not perfect number");
// }

// #include<stdio.h>
// int main()
// {
//     // input 234 ..........> 432
//     int n,r;
//     printf("Enter number:");
//     scanf("%d" ,&n);
//     while(n>0)
//     {
//         r=n%10;
//         printf("%d" ,r);
//         n=n/10;
//     }
// }

// #include<stdio.h>
// int main()
// {
//     // input 123 .....> 1+2+3 =6
//     int n,r,sum=0;
//     printf("Enter any number:");
//     scanf("%d" ,&n);
//     while(n>0)
//     {
//         r = n%10;
//         sum=sum+r;
//         n=n/10;

//     }
//     printf("Sum of digits: %d",sum);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
    // input 121 .........> 121
    // palindrome number wo number hote hai jinko reverse krne pr same number bane...
    // int n,c, r, s=0;
//     printf("Enter any number:");
//     scanf("%d" ,&n);
//     c=n;
//     while(n>0)
//     {
//         r=n%10;
//         s=r+(s*10);
//         n=n/10;   
//     }
//     if(c==s)
//     printf("palindrome number");
//     else
//     printf("not a palindrome number");
//     return 0;

// }

// #include<stdio.h>
// int main()
// {
//     // input 153.....>1*1*1 + 5*5*5 +3*3*3 = 153
//     //  Armstrong number waise number hote hai jo jitne number digit ke honge uska cube krna hota hai ya square fr plus uske baad result wahi number ata hai.
//     int n,arm=0,r,c;
//     printf("Enter any number:");
//     scanf("%d" ,&n);
//     while(n>0)
//     {
//         r = n%10;
//         arm=(r*r*r)+arm;
//         n=n/10;

//     }
//     if(c==arm)
//     printf("Armstrong number");
//     else
//     printf("not an armstrong number");
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     // age>=18 .........> voting eligible
//     // age<18 ............> not eligible for voting
//     int age;
//     printf("Enter age:");
//     scanf("%d",&age);
//     if(age>=18)
//     {
//         printf("Eligible for voting");
//     }
//     else
//     {
//         printf("age is not eligible for voting");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     // vowel..> a,e,i,o,u
//     // remaining all...> consonant

//     char ch;
//     printf("Enter any character:");
//     scanf("%c" ,&ch);
//     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
//     {
//         printf("character is vowel");

//     }
//     else
//     {
//         printf("character is consonant");
//     }
// }

/*
what is if-else if ladder? 
it is used to performed multiple cases for different conditions. in this statement their is one if condition and multiple else if condition and one of else block.
*/
// #include<stdio.h>
// int main()
// {
//     int a,b,ch;
//     printf("Enter User Choice: ");
//     scanf("%d" ,&ch);
//     printf("Enter Two Number: ");
//     scanf("%d%d" ,&a,&b);


//     if(ch==1)
//     {
//         add=a+b;
//         printf("addition: %d" ,add);

//     }
//     else if(ch==2)
//     {
//         sub=a-b;
//         printf("substraction : %d" ,sub);

//     }

// }

/*
nested if statement:
whenever if satement contain itself another if statement is called nested if statement. 
*/
// #include<stdio.h>
// void main()
// {
//     int y;
//     printf("Enter any year: ");
//     scanf("%d" , &y);
//     if(y%100==0)
//     {
//         if(y%100==0)
//         printf("year is leap year: ");
//         else
//         printf("year is not leap year: ");
//     }
//     else
//     {
//         if(y%4==0)
//         printf("year is leap year: ");
//         else
//         printf("Year is not leap year: ");
//     }
// }

/*
Function in c:
function is the block of statement which can call by another function is called function. 
or....
A function is a set of statement that takes input to do some specific computation and produce output. 

 In c language function is divided into two parts- 
 1. library function 
 2. user define function 

 calling of function
 1.call by value. 
 2. call by refrence. 
  "" no argument and no return value  "
 " no argument and a return value"
  argument and no return value
  argument and a return value"
*/

// #include<stdio.h>
// void add()
// {
//     int a=10,b=20,c;
//     c=a+b;
//     printf("Addition %d" ,c);

// }
// void sub()
// {
//     int a=20,b=10,c;
//     c=a-b;
//     printf("Substraction %d" ,c);

// }
// int main()
// {
//     add();
//     sub();
//     return 0;

// }

/*
what is main()? Explain with example. 
1. main is a user defined function because user is responsible to define the logic inside the main function. 
2. the execution of  program always starts and end with main function. 
3. each and every program has atleast one function which is main function. 
4. the main function may contain number of statements. 

what is actual and formal parameter?
Actual parameter: the parameter that are possed while callingor invoking the function/method is called as actual parameter. 
Example: sum(10,20)

Formal parameter: the parameter which are passed to the function at the time of function definition and declaration is called formal parameter. 

*/

// #include<stdio.h>
// void swap(inta ,intb)
// {
//     int temp;
//     temp a;
//     a = b;
//     b = temp;
//     printf("%d%d" , a,b);
// }
// void main()
// {
//     int x = 10 , y = 20;
//     printf("%d%d",x,y);
//     swap(x,y);
// }

/*
what is call by value? explain with program
in call by value we passes the value of normal variables to the call by value the actual value of variable can't be changed. if you changed the
value of function parameter it is changed for the current function only but it not change the value of variable inside the main function. 

*/

#include<stdio.h>
void swap(intx,inty)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("x=%d y=%d" ,x,y);

}
int main()
{
    int a = 10,b=20;
    swap(a,b);
    printf("a=%d b=%d",a,b);
    return 0;
}







 





