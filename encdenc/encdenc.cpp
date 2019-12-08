/*
 * encdenc.cpp
 *
 *  Created on: Jun 1, 2017
 *      Author: Sudip
 */
#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    string inp1="abcde";
    cout<<" This is a program that encrypt or decrypt any given String."<<endl;
    cout<<"       ------"<<endl;
    cout<<" Press | ok | to continue."<<endl;
    cout<<"       ------"<<endl;
    getline(cin, inp1);
    for (int i=0;i<inp1.length();i++)
    {
    inp1[i] = tolower(inp1[i]);

    }
    if (inp1 =="ok")
    {
        string inp2 ="efgh";
      cout<<"Do you want to encrypt a string or decrypt a string ?" <<endl;
      cout<<"       ---------                     ----------"<<endl;
      cout<<"Press | encrypt | for encryption and | decrypt | for decryption." <<endl;
      cout<<"       ---------                      ----------"<<endl;
       getline(cin, inp2);
      for (int i=0;i<inp2.length();i++)
         {
             inp2[i] = tolower(inp2[i]);

         }

        int num;
        if(inp2 =="encrypt" )
        {

            string s;
            char store;
            int temp;
            int temp1;
            string last;
           string master = "abcdefghijklmnopqrstuvwxyz";
           string nmaster = "123456789~!@#$%^&*()_+";

            cout<<" enter a string."<<endl;
             getline(cin, s);

            cout<<"Enter the key for encryption."<<endl;
            cin>>num;



     for (int i=0; i<s.length(); i++)
     {
        s [i] = tolower(s[i]);
        store = s.at(i);


        if (isalpha(store))
        {
        temp = master.find(store,0);
        temp = (temp+num)%26;
        store = master.at(temp);
        }
        else if (store != ' ')
        {
        temp1 = nmaster.find(store,0);
        temp1 = (temp1+num)%22;
        store = nmaster.at(temp1);


        }

        last = last+store;


     }

    cout<<last;


        }
        else if(inp2 =="decrypt" )
        {
            string s;
            char store;
            int temp;
            int temp1;
            string last;
           string master = "abcdefghijklmnopqrstuvwxyz";
           string nmaster = "123456789~!@#$%^&*()_+";

            cout<<" enter a string."<<endl;
             getline(cin, s);
            cout<<"Enter the key for encryption."<<endl;
            cin>>num;


     for (int i=0; i<s.length(); i++)
     {
        s [i] = tolower(s[i]);
        store = s.at(i);
        if (isalpha(store))
        {
         temp = master.find(store,0);
        temp = (temp-num+26);
        temp = temp %26;
        store = master.at(temp);
        }
         else if (store != ' ')
        {
        temp1 = nmaster.find(store,0);
        temp1 = (temp1-num+22);
        temp1 = temp1 %22;
        store = nmaster.at(temp1);


        }

        last = last+store;

        }
        cout<<last;
    }
    else
    {
        cout<<"See You Later"<<endl;
        cout<<" Run the program again to restart."<<endl;
    }


    return 0;

}
}



