#include <iostream>
void start_game();
void end_game(int score);
using namespace std; 
int main(){
    
    string user_input ;
    cout<< "========== Welcome ==========="<<endl;
    cout<< " if you want to play game then enter 'play' to start : ";
    cin>>user_input;

    if(user_input == "play")
    {
        string name;
        cout<<"\n Enter your name:";
        cin>>name;
        cout<<"\n Hello "<< name <<"!"<<endl;
        start_game();
    } else{
    cout<<"\n You chose not to play. Goodbye!"<<endl;
    }
}
void start_game(){
    char answer;
    int score = 0;

/// Qucestion start here........
//Q1:    
    cout<< " \n (1) What does CPU stand for? "<< endl;
    cout<<" a) Central Processing Unit  "<< endl;
    cout<<" b) Computer Personal Unit  "<< endl;
    cout<<" c) Central Program Utility  "<< endl;
    cout<<" d) Control Panel Unit "<< endl;
    cout<< " please enter 'a' 'b' 'c' or  'd' and press enter :";
    cin>> answer;
    if (answer =='a'){
        cout<<"\n Right answer !"<<endl;
        score++;
    } else {
        cout << "\n Wrong Answer !!"<<endl;
    }

//Q2:
    cout<< " \n (2) What does RAM stand for? "<< endl;
    cout<<"a) Random Access Memory "<< endl;
    cout<<"b) Read Access Memory  "<< endl;
    cout<<"c) Real Application Module " << endl;
    cout<<"d) Run Action Method "<< endl;
    cout<< " please enter 'a' 'b' 'c' or  'd' and press enter :";
    cin>> answer;
    if (answer =='a'){
        cout<<"\n Right answer !"<<endl;
        score++;
    } else {
        cout << "\n Wrong Answer !!"<<endl;
    }


//Q3:    
    cout<< " \n (3) Which language is used to create web pages? "<< endl;
    cout<<"a) C++ "<< endl;
    cout<<"b) Python "<< endl;  
    cout<<"c) HTML "<< endl;
    cout<<"d) Java "<< endl;
    cout<< " please enter 'a' 'b' 'c' or  'd' and press enter :";
    cin>> answer;
    if (answer =='c'){
        cout<<"\n Right answer !"<<endl;
        score++;
    } else {
        cout << "\n Wrong Answer !!"<<endl;
    }


//Q4:
    cout<< " \n (4) What is the brain of the computer? "<< endl;
    cout<<"a) RAM  "<< endl;
    cout<<"b) CPU  "<< endl;  
    cout<<"c) Hard Disk "<< endl;
    cout<<"d) Keyboard "<< endl;
    cout<< " please enter 'a' 'b' 'c' or  'd' and press enter :";
    cin>> answer;
    if (answer =='b'){
        cout<<"\n Right answer !"<<endl;
        score++;
    } else {
        cout << "\n Wrong Answer !!"<<endl;
    }


//Q5:   
    cout<< " \n (5) What is the shortcut key for copying in a computer? "<< endl;
    cout<<"a) Ctrl + C "<< endl;
    cout<<"b) Ctrl + V "<< endl;  
    cout<<"c) Ctrl + X "<< endl;
    cout<<"d) Ctrl + Z "<< endl;
    cout<< " please enter 'a' 'b' 'c' or  'd' and press enter :";
    cin>> answer;
    if (answer =='a'){
        cout<<"\n All Right answer Congrats !!"<<endl;
        score++;
    } else {
        cout << "\n Wrong Answer !!"<<endl;
    }


    end_game(score);
}
void end_game(int score){
    cout<<"\n Thanks for playing "<<endl;
    cout<<"Your score is: "<< score <<"/5" <<endl;
}