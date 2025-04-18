/*Fonte: http://stackoverflow.com/questions/19341982/evaluating-postfix-expression-pop-returns-incorrect-values-to-calculate-funct
 * Adaptado por: Joao Henrique 
 * Intencionalmente foi mantida a funcao que avalia a expressao pos fixa */

#include <iostream>
using namespace std;

/*The node of the stack:*/
class node {
 public:
	char value;
	node* next;
}; 

/*The basic stack class:*/
class stack {
 public:
	int size;
	node* top;
	stack() { /*default constructor for stack*/
		size=0;
		top=NULL;
	}

	void push(char);
	char pop();
	char topstack();
	void print();
	bool isEmpty();
};

/*Stack's push function:*/
void stack::push(char e) {
	node *temp; 
	temp =new node;
	temp->next = top;
	temp->value=e;
	top=temp;
	size++;
}

/*Stack's pop function:*/
char stack::pop() {    
	char d;
	if (isEmpty()) {
	    cout<<"\nStack is Empty\n";
	    return '!';
	}
	else {
	    node *temp = top;
	    top=top->next;
	    d=temp->value;
	    delete temp;
	    size--;
	}
    	return d;
}

/*Returns a copy of the stack's top element.*/
char stack::topstack() {    
	if(size==0)
	    return '\0';
	else
	return top->value;
}

/*To print the stack's members.*/
void stack::print() {	//cout<<"PRINTING STACK\n";
	int s=size;
	for(int i=0; i<s; i++)
	cout<< pop() <<"\n";
}

/*Function to determine whether the stack is empty. Returns true for empty.*/
bool stack::isEmpty() {
	if(size==0) { return true; }
	return false;
}

/*Class, the instance of which will convert infix to postfix.*/
class expEvaluator {
 public:
	char infix[5000];
	char postfix[5000];
	int ps; /*counter variable to be used for index of the postfix array.*/
	stack s; /*The stack through which the operations will be performed.*/
	expEvaluator() { ps=0; } /*Constructor.*/

	bool isOp(char a){ /*Function to determine whether the character is an operator.*/
		if(a=='+' || a=='-' || a=='*' || a=='/' || a=='^' || a=='%' )
        		return true;
    		else
        		return false;
	}

bool precedence(char a, char b) {/*To determine the precedence of operators. True means 'a' is of same or lower precedence than 'b'.*/
    if(a=='+' || a=='-')				return true;
    	else if (a=='*' || a=='/') {
        	if(b=='+' || b=='-')            	return false;
        		else if(b=='*' || b=='/')       return true;
    		}
    	else if (a=='^' || a=='%')      		return false;
}

/*The function that will convert the given infix statement to postfix.*/
void convertToPostfix()
{
 int l=0; /*To keep count of the number of characters entered in infix form.*/

 while(cin>>infix) {
    l=0; ps=0;
    for(int i=0; infix[i]!='\0'; i++) {
        l++;
    }
    for(int i=0; i<l; i++) {
        if(infix[i]=='(')
            s.push(infix[i]);
        else if(isOp(infix[i])) { /*If character at infix[i] is an operator*/
            while(isOp(s.topstack()) && precedence(infix[i], s.topstack())) { /*popping operators from stack to postfix array till operator of lower precedence is met.*/
                    postfix[ps]=s.pop();
                    ps++;
            }
        s.push(infix[i]); /*then push the operator onto the stack.*/
        }
        else if(infix[i]==')') { /*if right bracket encountered.*/
            while(s.topstack()!='(') { /*till left bracket is not encountered,*/
                postfix[ps]=s.pop(); 
                ps++; /*keep popping elements to postfix array.*/
            }
            s.pop(); /*pop left bracket when encountered.*/
        }
        else { /*if just an operand is encountered.*/
            postfix[ps]=infix[i]; /*copy to postfix array.*/
            ps++;
        }
    }
    while(!(s.isEmpty())) { /*When end of array is reached (the previous loop ends only then) and its not empty,*/
        postfix[ps]=s.pop(); /*pop all elements from stack onto the postfix array.*/
        ps++;
    }
    postfix[ps]='\0';
    cout << postfix << endl;
 }
}

/*Function to calculate the result, when two operands and operator are passed to it.*/
int calculate(int op1, int op2, char operand) {
        if(operand == '+')	{ return op1 + op2; }
        else if(operand == '-') { return op1 - op2; }
        else if(operand == '*') { return op1 * op2; }
        else if(operand == '/') { return op1 / op2; }
        else if(operand == '%') { return op1 % op2; }
        else if(operand == '^') { return op1 ^ op2; }           
}

/*Function to evaluate the postfix expression:*/
void evalPfExpression() {
    ps = 0;
    while(postfix[ps]!='\0') {
        if (!isOp(postfix[ps])) {
            s.push(postfix[ps]);
            ps++;
        }
        else if(isOp(postfix[ps])) {/*******NOT POPPING CORRECT VALUES.*******/
            int x = s.pop() - 48; //Second operand.
            int y = s.pop() - 48; //First operand.
            int res = calculate(y, x, postfix[ps]);  /*The result of two operands calculation*/
            s.push(res);                             /*is returned to the variable 'res' and pushed*/
            ps++;                                    /*to the stack*/
        }
    }
    int result = s.pop(); //When '\0' is encountered, loop stops and the final      result is popped
}
};

int main(void) {
 int N;

 cin >> N;
 expEvaluator e1;
 e1.convertToPostfix();
 e1.evalPfExpression();
 return 0;
}
