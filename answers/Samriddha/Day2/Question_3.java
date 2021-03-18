import java.util.*;
class Question_1
{
    int x, rev,f,x1;
    Question_3(int x2)
    {
        x=x2;
        rev=0;
        f=2;
        x1=0;
    }
    int isprime(int n)
    {
        if(x==n)
            return 1;
        else if (x%n==0 || x==1)
            return 0;
        else
            return isprime(n+1);
    }
    void isEmirp()
    {
        int n=x;
        x1=n;
        while(n!=0)
        {
            rev=rev*10 + n%10;
            n=n/10;

        }
        int ans1=isprime(f);
        x=rev;
        f=2;
        int ans2=isprime(f);
        if(ans1==1 && ans2==1)
            System.out.println(x1+" is an Emirp no!");
        else
            System.out.println(x1+" is not an Emirp no.!");

    }
    public static void main(String[] args)
    {
        int e;
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the number of your choice:");
        e=sc.nextInt();
        Question_3 emp=new Question_3(e);
        emp.isEmirp();

    }
} 
