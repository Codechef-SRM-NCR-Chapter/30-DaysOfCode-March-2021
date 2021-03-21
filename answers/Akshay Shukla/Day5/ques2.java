class ques2d5
{
    static int isP(int num)
    {
        if(num==1)
        return 0;
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            return 0;
        }
        return 1;
    }
    public static void main(String args[])
    {
        int j=1;
        for(int i=0;i<4;i++)
        {
            for(int k=0;k<=i;k++)
            {
                if(isP(j)==1)
                System.out.print("# ");
                else
                System.out.print("* ");
                j++;
            }
            System.out.println();
        }
    }
}
