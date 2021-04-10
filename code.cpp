#include<bits/stdc++.h>
using namespace std;

int q_no=1;
int correct=0;
int wrong=0;
bool ask[10]={true, true,true ,true ,true ,true ,true ,true ,true ,true};

void display_random_question();
void display();
void question(string question, string a,string b,string c, string d,char correct_answer);
void result();

int main(){
    int stdhr,i,j;
    printf("Enter time(in hours) you study daily\n");
    scanf("%d",&stdhr);

    if(stdhr>0 && stdhr<3)
    printf("you are giving less time to study.\n Here is some tips regarding it \n Organize lectures notes. ...\nJoin or create a study group. ...\nAromatherapy, plants and music. ...\nLeave time for the last-minute review.\n\n\n");
    else if(stdhr>=3 && stdhr<=6)
    printf("Your time is appropriate.\n As the exam date approaches, say 6 months from exam, \n the study hours need to be increased to 8 hours.\n Give more focus on revision and solving last year's question papers.\n\n\n");
    else if(stdhr> 6)
    printf(" It is not enough to promise yourself you will study for many hours a day \n and eventually lose steam in two weeks. Think about \n creating habits that you can commit to for the foreseeable \n future and design a plan that can be executed with a little extra discipline, motivation and effort on your part.\n\n\n");

    system("pause");

    system("cls");
    char sub[20];
    char sub1[20]="Maths";
    char sub2[20]="Science";
    printf("Enter your favourite subject (from Maths and Science):\n");
    scanf("%s",&sub);
    i=strcmp(sub1,sub);
    j=strcmp(sub2,sub);
    if( i ==0 )
    printf(" Scope of Maths in future are \n 1. Auditor: Auditors examine and prepare financial records while checking for their accuracy, then explaining their findings to key stakeholders.\n2. Data or Research Analyst:Data analysts use advanced mathematical and analytical methods to help businesses investigate complex issues, identify and address inefficiencies, and make strategic, data-driven business decisions.\n4. Medical Scientist:Medical scientists form hypotheses and develop experiments, often using clinical trials and other investigative methods to research their findings.\n\n\n");
    else if( j==0 )
    printf(" Scope of Science in future are \n 1. Biochemists and biophysicists study the chemical and physical properties of living things and biological processes. \n2. Conservationists help landowners and governments find ways to protect natural resources such as soil and water.\n3. Geoscientists search for natural resources or help environmental scientists clean up the environment. To get an entry-level research position\n you will need at least a bachelor's degree in geoscience or earth science, but most research positions require a doctorate.\n\n\n");
   

   
    system("pause");
    system("cls");

    cout<<"\n\n\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n";
          cout<<"*                                                         *\n";
          cout<<"*                      APTITUDE TEST                      *\n";
          cout<<"*                                                         *\n";
          cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n";

    system("pause");


    display();
    return 0;
}

void display(){
    system("cls");
    if(q_no<11)
    {cout<<"Question No:"<<q_no<<endl;}
    display_random_question();
    }

void display_random_question(){

    srand(time(0));
    bool is_question_remaining = false;

    for(int i=0;i<8;i++){
        if (ask[i]){
            is_question_remaining = true;
            break;
        }
    }
    while(is_question_remaining){
        int no= rand()%10;
        if(ask[no]){
            ask[no]=false;

            switch (no)
            {
                case 0:
                question("A and B started a business by investing Rs. 36,000 and RS. 63,000. Find the share of each, out of the annual profit of Rs. 5500.","(A) Rs. 2000, Rs. 3500","(B) Rs. 2500, Rs. 3500","(C) Rs. 3500, Rs. 2500","(D) None of these",'A');
                break;

                case 1:
                question("A starts some business with Rs. 50,000. After 3 months B joins him with Rs. 70,000. At the end of the year. In what ratio should they share the profit ?","(A) 1 : 3","(B) 3 : 2","(C) 1 : 5","(D) None of these",'D');
                break;

                case 2:
                question("A started a business by investing Rs. 36,000. After 4 month B joined him with some investment. At he end of the year, the total profit was divided between them in the ratio of 9:7. How much capital was invested by B in the business?","(A) Rs. 40,000","(B) Rs. 42,000","(C) Rs. 41,000","(D) None of these",'b');
                break;

                case 3:
                question("A started some business with RS 26,000. After 3 month B joined him with Rs. 16,000. After some more time C joined them with Rs. 25,000. At he end of the year, out of a total profit of Rs.15,453 C gets Rs. 3825 as his share. How many month after B joined the business did C join?","(A) 3","(B) 4","(C) 5","(D) None of these",'A');
                break;

                case 4:
                question("A, B and C started a business with their investment in the ratio 1 : 2 : 4. After 6 month A invested the half amount more as before and B invested same the amount as before while C withdrew of the their investment. Find the ratio of their profits at the end of the year.","(A) 5 : 12 : 13 ","(B) 5 : 11 : 14 ","(C) 5 : 12 : 14 ","(D) None of these ",'C');
                break;

                case 5:
                question("A started a business with Rs. 52,000 and after 4 months B joined him with Rs. 39,000. At the end of the year, out of the total profit B received total 20,000 including 25% of the profit as commission for managing the business. What amount did A receive?","(A) Rs. 20,000","(B) Rs. 10,000","(C) Rs. 15,000","(D) None of these",'A');
                break;

                case 6:
                question("A working partner get 20% as his commission of the profit after his commission is paid. If the working partner’s commission is Rs. 8000, Then what is the total profit in the business?","(A) Rs. 47,000","(B) Rs. 45,000","(C) Rs. 48,000","(D) None of these",'C');
                break;

                case 7:
                question("We have to divide a sum of Rs. 13,950 among three person A, B and C. B must get the double of A’s share and C must get Rs. 50 less than the double of B’s share. The share of A will be : ","(A) Rs. 1950","(B) Rs. 1981.25","(C) Rs. 2000","(D) Rs. 2007.75",'C');
                break;

                case 8:
                question("A started business with Rs. 45,000 and B joined after ward with 30,000. If the profit at the end of a year was divided in the ratio 2 : 1 respectively, then B would have joined A for business after.","(A) 1 month","(B) 2 month","(C) 3 month","(D) 4 month ",'C');
                break;

                case 9:
                question("Out of 10 teachers of a school, one teacher retires and in place of him a new teacher 25 yrs. old joins. As a result of it average age of the teachers reduces by 3 yrs. Age of the retired teacher (in yrs.) is.","55","65","45","75",'A');
                break;

            }
        }
    }
    result();
}

void result(){

    cout<<"Total Questions ="<<q_no-1<<endl;
    cout<<"Correct Answers ="<<correct<<endl;
    cout<<"wrong Answers ="<<wrong<<endl;

    if(correct>8)
    cout<<"Excellent"<<endl;
    else if(correct>6)
    cout<<"Very Good"<<endl;
    else if (correct>4)
    cout<<"Average"<<endl;
    else if(correct>2)
    cout<<"Poor"<<endl;
    else
    cout<<"Very Poor"<<endl;

}

void question(string question, string a,string b,string c, string d,char correct_answer){
    cout<<question<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    char answer;
    cin>> answer;
    if(answer==correct_answer)
        correct++;
    else 
        wrong++;
    q_no++;
    display();
    }