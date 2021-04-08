import java.util.*;
class shaurya
{
    static int n,sp=-1;
    static char[] arr;
    public static void push(char ch)
    {
        sp=sp+1;
        arr[sp]=ch;
    }
    public static char pop()
    {
        int num=sp;
        sp=sp-1;
        return arr[num];
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the string");
        String s=sc.nextLine();
        // arr=s.toCharArray();
        arr=new char[s.length()];
        boolean flag=true;
        for (int x= 0; x< s.length(); x++)
        {
            char ch = s.charAt(x);
            if (ch=='(' || ch=='[' || ch=='{')
            {
                push(ch);
                continue;
            }
            if (sp==-1)
            {
                flag= false;
                break;
            }
            char c;
            switch (ch) {
            case ')':
                c = pop();
                if (c == '{' || c == '[')
                    flag=false;
                break;
            case '}':
                c = pop();
                if (c == '(' || c == '[')
                    flag=false;
                break;
 
            case ']':
                c =pop();
                if (c == '(' || c == '{')
                    flag=false;
                break;
                }
        }
        if(sp!=-1)
        {
            flag=false;
        }
        System.out.println(flag);
        }
    }
