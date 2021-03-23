class ques1d5
{
    public static void main(String args[])
    {
        long x=0,y=1,z=0;
        System.out.print(x+","+y);
        for(int i=1;i<49;i++)
        {
            z=x+y;
            System.out.print(","+z);
            x=y;
            y=z;
        }
    }
}
