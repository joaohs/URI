#include<iomanip>
#include<iostream>
#include<string>
#include<sstream>

using namespace std;

class SLLNode
{
    double data;
    SLLNode *top;
    SLLNode *ptr;
public:
    SLLNode()
    {
        top = NULL;
        ptr =  NULL;
    }

    bool isEmpty()
    {
        return top == 0;
    }

    void pushVal(double val)
    {
        SLLNode *next = new SLLNode;
        next -> data = val;
        next -> ptr = top;
        top = next;
    }

    double popVal()
    {
        if (isEmpty())
        {
            cout << "Error: Too many operators" << endl;
        }
        else
        {
        SLLNode *next = top -> ptr;
        double ret = top -> data;
        delete top;
        top = next;
        return ret;
        }

    }

    void print()
    {
        cout << top -> data << endl;
    }
};


bool isOperator(const string& input)
{
    string ops[] = {"+", "-", "*", "/"};
    for(int i = 0; i < 4; i++)
    {
        if(input == ops[i])
        {
            return true;
        }
    }
    return false;
}


void performOp(const string& input, SLLNode& stack)
{
    double fVal, sVal;
    int errorCheck = 0;

    sVal = stack.popVal();
    fVal = stack.popVal();

    if(input == "+")
    {
        stack.pushVal(fVal + sVal);
    }
    else if(input == "-")
    {
        stack.pushVal(fVal - sVal);
    }
    else if(input == "*")
    {
        stack.pushVal(fVal * sVal);
    }
    else if(input == "/" && sVal != 0)
    {
        stack.pushVal(fVal / sVal);
    }


    if(input == "/" && sVal == 0)
    {
        cout << "Error: Division by zero" << endl;
        errorCheck = 1;
    }

    if(errorCheck == 0)
    {
    stack.print();
    }
}

int main()
{
// http://stackoverflow.com/questions/19308298/postfix-notation-calculator-rpn-problems-c

    cout << "::::::::::::::::RPN CALCULATOR:::::::::::::::::" << endl;
    cout << "::TYPE IN A POSTFIX EXPRESSION OR 'q' TO QUIT::" << endl;
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::" << endl << endl;

    string input;
    SLLNode stack;
    while(true)
    {
        cin >> input;
        double num;

        if(istringstream(input) >> num)
        {
            stack.pushVal(num);
        }
        else if (isOperator(input))
        {
            performOp(input, stack);
        }
        else if (input == "q")
        {
            return 0;
        }
    }
}
