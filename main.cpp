#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string inp =" ";
    string temp;
    cout<<"enter your message and enter '/end' to submit "<<endl;
    while(true)
    {
        cin>>temp;
        inp = inp + " "+temp;
        if(temp=="/end")
        {
            break;
        }
    }
    //taking input till here from user
    
    //enycrpting starts here
    string encstr="";
    char ch;
    int ch_int;
    for(int i=0;i<inp.length();i++)
    {
        ch = inp.at(i);
        if(ch=='?'||ch=='!'||ch=='.'||ch==','||ch=='/')
        {
            encstr = encstr + ch;
            continue;
        }
        else
        {
            ch_int = (int)ch;
            ch_int = ch_int + 2;
            encstr = encstr + (char)ch_int;
        }
    }
    //encrytping ends here
    cout<<"final string = "+encstr<<endl;
    
    //decrytping starts here
    string decrpstr="";
    char gh;
    int gh_int;
    for(int i=0;i<inp.length();i++)
    {
        gh = encstr.at(i);
        if(gh=='?'||gh=='!'||gh=='.'||gh==','||gh=='/')
        {
            decrpstr = decrpstr + gh;
            continue;
        }
        else
        {
            gh_int = (int)gh;
            gh_int = gh_int - 2;
            decrpstr = decrpstr + (char)gh_int;
        }
    }
     cout<<"final decrpyted string = "+decrpstr<<endl;
    
    //decrytping ends here
    
    // pick up the word after question mark
    
    string code=" ";
    int count=0;
    int whspace=0;
    for(int i=0;i<inp.length();i++)
    {
        if(inp.at(i)=='?')
        {
            count = i+1;
            if(inp.at(count)=='/')
            {
                break;
            }
             if(count>=inp.length())
                {
                    break;
                }
            while(true)
            {
                if(inp.at(count)=='/')
            {
                break;
            }
                code = code + inp.at(count);
                count = count + 1;
                if(inp.at(count)==' ')
                {
                    whspace = whspace + 1;
                    
                }
                if(whspace == 1)
                {
                    break;
                }
            }
            whspace = 0;
        }
        else
        {
            continue;
        }
        
    }
    cout<<"final final final ="+code<<endl;
    
}





