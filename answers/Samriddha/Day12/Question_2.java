import java.util.*;
class Question_2
{
    static Scanner sc = new Scanner(System.in);
    static int n,l;
    int SubStringCounting(char str[],int n)
    {
        int c=0; int c1 = 0;
        for (int i = 0; i<n; i++)
        { if (str[i] == '1')
            { 
                c1++;
                for (int j = i + 1; j< n; j++)
                { 
                    if (str[j] == '1')
                        c++;
                }
            }
        }
        return (c+c1);
    }
    public static void main(String[] args)
    {
        Question_2 obj = new Question_2();
        System.out.print("Enter the no. of entries you wanna make : ");
        n=sc.nextInt();
        for(int i=1;i<=n;i++)
        {
            System.out.print("Enter the length of the string : ");
            l = sc.nextInt();
            System.out.print("Enter the string : ");
            String s = sc.next();
            char str[] = s.toCharArray();
            System.out.println(obj.SubStringCounting(str, l));
        }
    }
}
