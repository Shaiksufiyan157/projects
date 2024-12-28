#include<iostream>
using namespace std;
int add(){
    cout<<"ENTER THE OPERANDS";
    int a,b;
     cout<<"operand 1::";
    cin>>a;
    cout<<"\noperand 2::";
    cin>>b;

    return a+b;

}


int div(){
    cout<<"ENTER THE OPERANDS";
    int a,b;
     cout<<"operand 1::";
    cin>>a;
    cout<<"\noperand 2::";
    cin>>b;

    return a/b;

}

    int sub(){
    cout<<"ENTER THE OPERANDS";
    int a,b;
   cout<<"operand 1::";
    cin>>a;
    cout<<"\noperand 2::";
    cin>>b;

    return a-b;

}

    int mul(){
    cout<<"ENTER THE OPERANDS";
    int a,b;
    cout<<"operand 1::";
    cin>>a;
    cout<<"\noperand 2::";
    cin>>b;

    return a*b;

}
void fi(){
    float feet;
    cout<<"enter the feet\n";
    cin>>feet;
    cout<<feet*12<<"inch\n";
    cout<<"---------------------\n";
}
void mc(){
     float meter;
    cout<<"enter the meter\n";
    cin>>meter;
    cout<<meter*100<<"cm\n";
    cout<<"---------------------\n";
}
void lm(){
     float liter;
    cout<<"enter the liter\n";
    cin>>liter;
    cout<<liter*1000<<"ml\n";
    cout<<"---------------------\n";
}
void uc()
{
    cout<<"----------unit convertor----------";
cout<<"1)feet to inch\n2)meter to centimeter\n3)liter to mililiter\n------press 0 to exit------\n";
int choice;
cin>>choice;
switch (choice)
{
    case 0:
    return;
case 1: fi();
    break;
case 2: mc();
    break;
case 3: lm();
    break;
default: cout<<"try again";
    break;
}
uc();
}
void id(){
    int rupee;
    cout<<"ENTER THE AMOUNT IN RUPEE\n";
    cin>>rupee;
    cout<<0.012*rupee<<"USD"<<endl;
     cout<<"------------------------------";
}
void di(){
    int dollor;
   cout<<"ENTER THE AMOUNT IN DOLLOR\n";
    cin>>dollor;
    cout<<83.72*dollor<<"INR"<<endl;
     cout<<"------------------------------";
}
void ip(){
    int rupee;
   cout<<"ENTER THE AMOUNT IN RUPEE\n";
    cin>>rupee;
    cout<<0.0089*rupee<<"POUND"<<endl;
     cout<<"------------------------------";
}
void pi(){
    int pound;
   cout<<"ENTER THE AMOUNT IN POUND\n";
    cin>>pound;
    cout<<111.94*pound<<"INR";
    cout<<"------------------------------";
}
void cc(){
    cout<<"\n-------------CURRENCY CONVERTOR-------------\n";
    cout<<"select the type of currency convertor:\n1)INR TO DOLLOR\n2)DOLLOR TO INR\n3)INR TO POUND\n4)POUND TO INR\n---------PRESS 0 TO EXIT---------\n";
    int choice;
    cout<<"choice:";
    cin>>choice;
    switch (choice)
    {
    case 0: return;
        break;
        case 1: id();
        break;
        case 2: di();
        break;
        case 3: ip();
        break;
        case 4: pi();
        break;
    default: cout<<"try again";
        break;
    }
    cc();
}

void ar(){
    cout<<"\t\t-------ARITHEMATIC CALCULATOR-------\n";
    char op;
    cout<<"ENTER THE OPERATOR(+,-,*,/ or 0 to exit):\n ";
    cin>>op;
    switch (op)
    {
    case '+': cout<<"RESULT:"<<add();
        break;
    case '-': cout<<"RESULT:"<<sub();
       break;
    case '*': cout<<"RESULT:"<<mul();
       break;
    case '/': cout<<"RESULT:"<<div();
        break;
    case '0':
    return ;

    default: cout<<"INVALID CHOICE TRY AGAIN\n";
    break;
       
    }
    ar();
    return ;
}
int calculator(){
  
    cout<<"\t----------SELECT THE TYPE OF THE CALCULATOR----------\n";
    cout<<"1) ARITHMETIC CALCULATOR\n2) UNIT CONVERTOR\n3) CURRENCY CONVERTOR\n------PRESS 0 TO EXIT------\n";
    int choice;
    cout<<"choice::";
    cin>>choice;
    switch (choice)
    {
    case 1: ar();
        break;
        case 2: uc();
        break;
        case 3: cc();
        break;
        case 0: exit(0);
        break;
    
    default:cout<<"INVALID CHOICE TRY AGAIN\n";
        break;
    }
    calculator();
    }


int main(){
    cout<<"\t\t----------BASIC CALCULATOR AND CONVERTOR----------\n";
    int choice;
    do{
        cout<<"\tPRESS 1 TO START THE OPERATIONS OR PRESS 0 TO END THE OPERATION\n";
        cout<<"choice:";
        cin>>choice;
        switch (choice)
        {
        case 1: calculator();
        break;
        case 0: cout<<"YOU HAVE TERMINATED THE PROGRAM PLEASE RUN GAIN";
        exit(0);
            break;
        
        default:cout<<"CHOICE CAN BE 1 OR 0";
            break;
        }
    

    }while(choice!=0);
    return 0;
}