#include "Balanced_String.h"

/*
If User enter any string word ,will return true ,because stack not store any of them.(empty stack)
*/

bool check(char open ,char close)
{
    return (open=='('&&close==')')  ? true  : ( (open=='{'&& close=='}') ?  true :((open=='['&&close==']') ? true :  false) ) ;
}

/*Balanced String*/
bool S2P2(string exp)
{
    stack<char>S;
    rep0(i,exp.length())
    {
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
        {
              S.push(exp[i]);
        }
        else if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
        {
            if( (S.empty()) || !( check(S.top(),exp[i]) ))
            {
               return false;
            }
            else
            {
                S.pop();
            }
        }
    }


    return S.empty();
}


