class question2
{ 
    public static void main (String args[])
    {
        for(int k=1;k<=4;k++)
        {
            for(int j=0;j<4-k;j++)
            {
                System.out.print(" ");
            }
            for (int j=0;j<k;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
