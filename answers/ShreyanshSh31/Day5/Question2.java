
class pattern 
{
    

    boolean isprime(int n)
    {
        int count=0;
        boolean flag=false;
        for(int i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count==1)
            return true;
        else
            return false;
    }

    void pattern()
    {
        boolean z;int c=1;
        for(int i=1;i<=4;i++)
        {
            for(int j=1;j<=i;j++)
            {

                z=isprime(c);

                if(z==true)
                {
                    System.out.print("# ");
                }
                else
                {
                    System.out.print("* ");
                }
                c++;
            }
            System.out.println();
        }
    }

    public static void main(String X[])
    {
        pattern obj= new pattern();
        obj.pattern();
    }
}
