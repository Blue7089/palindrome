#include <iostream>
#include <string>

using namespace std;
string header = "* * * Palindromes * * *",prompt ="Enter aword: ",
line(50,'-');

int main()
{
    string word;
    char key ='y';

    cout<<"\n\t"<<header<<endl;
    while(key=='y'||key=='Y')
    {
           cout<<"\n"<<line<<"\n"<<prompt;
           cin>>word;

           int i=0,j=word.length()-1;
           for(;i<=j;++i,--j)
             if(word[i]!=word[j])
             break;
             if(i>j)
             cout<<"\nThe word "<<word<<" is a pallindrome"<<endl;
             else
             cout<<"\nThe word "<<word<<" is not a pallindrome"<<endl;
            cout<<"\n Repeat? (y/n";
            do
            cin.get(key);
            while(key !='y'&&key!='Y'&&key!='n'&&key!='N');
            cin.sync();

    }
    return 0;
}
