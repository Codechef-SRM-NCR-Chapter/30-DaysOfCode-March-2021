class fibonacci_series
{  
    public static void main(String args[])  
    {    
        int n1=0;
        int n2=1;
        int n3;
        int c=50;    
        System.out.print(n1+" "+n2);

        for(int i=2;i<=c;i++)   
        {    
            n3=n1+n2;    
            System.out.print(" "+n3);    
            n1=n2;    
            n2=n3;    
        }    

    }
}
