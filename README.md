# EXPERIMENT 15
# Aim
To study and implement Recursion.
# Software Used
Visual Studio Code
# Theory
Recursion is a technique in which a function is repeatedly called until the given condition is satisfied. 

A function which calls itself is called a recursive function. When it is called it executes a set of instructions and then calls itself. This continues till the condtion is satisfied and recursion is stopped and returns a value.

Base conditiopn is the condition which terminates recursion. The function is called till the base condition is satisfied.

The recursive case refers to how the recursive call appears in the function. The recursive case can include multiple recursive calls or different parameters, so that the base condition is satisfied and the recursion is terminated.

Syntax:

```
return_type recursive_func {
   
       // Base Condition
       // Recursive Case
      
}
```
CODES:

1. Factorial
```
#include <iostream>
using namespace std;
int fact(int n){
    if (n<=1){
        return 1;
    }else{
        return (n * fact(n - 1));
    }
}
int main(){
    int X,n;
    cout<<"Enter a number:";
    cin>>n;
    X=fact(n);
    cout<<"Factorial:"<<X<<endl;
    return 0;
}
```

o/p:

![Screenshot 2024-09-27 120006](https://github.com/user-attachments/assets/48c6420c-e699-4133-8d46-4a19d36cef30)

2. Sum of numbers 1 to n
```
#include <iostream>
using namespace std;

int add(int n){
if (n<=1){
return 1;
}
else{
return(n+add(n-1));
}
}
int main(){
int X,n;
cout<<"Enter a number:";
cin>>n;
X=add(n);
cout<<"Sum of numbers is:"<<X<<endl;
return 0;
}
```
o/p:

![Screenshot 2024-09-27 120041](https://github.com/user-attachments/assets/11da1efd-54e3-4f09-938b-961484ad16c9)

3. Reversing a string
```
#include<iostream>
using namespace std;
void reverse(char *str){
    if (*str){
        reverse(str+1);
        cout<<*str;

    }
}
int main(){
    char s[50];
    cout<<"Enter a string:";
    cin>>s;
    cout<<"Reversed string is:";
    reverse(a);
    cout<<endl;
    return0;
}
```

o/p:
**

![Screenshot 2024-09-27 120156](https://github.com/user-attachments/assets/fd970fdf-f693-4a38-82e3-52257779fc98)


4. Reversing a number
 ```
#include<iostream> 
using namespace std;

void print_rev(int i) {
    if (i > 0) {  
        cout << (i % 10);  
        print_rev(i / 10);  
    }
}

int main() {
    int i;
    cout << "Enter the number: ";
    cin >> i; 
    print_rev(i);  
    cout << endl;  
    return 0; 
}
```
  

![Screenshot 2024-09-27 120403](https://github.com/user-attachments/assets/4fca4132-671c-4a22-a4c3-0a052ce495db)



o/p:

![image](https://github.com/user-attachments/assets/72f20b19-40fa-4cef-bf12-28f4526080f3)


# Conclusion
The above codes show how recursion can effectively reverse strings and digits, compute factorials and sums, and improve code readability. They demonstrate how elegant and useful recursion is as a programming tool.
