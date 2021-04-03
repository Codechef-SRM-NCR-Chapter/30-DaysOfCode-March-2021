import java.util.*;
class shaurya
{
    public static String sortString(String inputString)
    {
        char tempArray[] = inputString.toCharArray();
        Arrays.sort(tempArray);
        return new String(tempArray);
    }
    public static void main (String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("ENter the number of elements in an array");
        int n=sc.nextInt();
        System.out.println("ENter the sum you want");
        int k = sc.nextInt();
        int w,x,y,z;
        int[] arr=new int[n];
        for(x=0;x<n;x++)
        {
            arr[x]=sc.nextInt();
        }
        String s="";int c=0;
        for(w=0;w<n;w++)
        {
            for(x=w+1;x<n;x++)
            {
                for(y=x+1;y<n;y++)
                {
                    for(z=y+1;z<n;z++)
                    {
                        if( w!=x && x!=y && y!=z )
                        {
                            // if(arr[w]!=arr[x] && arr[w]!=arr[y] && arr[w]!= arr[z] && arr[x]!=arr[y] && arr[x]!=arr[z] && arr[y]!=arr[z])
                            // {
                                if( (arr[w]+arr[x]+arr[y]+arr[z]) ==k )
                                {
                                    // System.out.println(arr[w]+" , "+ arr[x]+" , "+ arr[y]+" , "+ arr[z]);
                                    s=s+(Integer.toString(arr[w])+Integer.toString(arr[x])+Integer.toString(arr[y])+Integer.toString(arr[z])+" ");
                                    c++;
                                    // System.out.println(s);
                                }
                            // }
                        }
                    }
                }
            }
        }
        // StringBuffer sb=new StringBuffer(s);
        String s1="";
        String star[]=new String[c];
        String star2[]=new String[0];
        y=0;
        for(x=0;x<s.length();x++)
        {
            if(s.charAt(x)!=32)
            {
            s1=s1+s.charAt(x);
            }
            else
            {   
                s1=sortString(s1);
                // boolean flag=false;
                // // star = Arrays.copyOf(star, star.length + 1);
                // for(z=0;z<star.length;z++)
                // {
                //     if(s1.equals(star[z]))
                //     {
                //         flag =false;
                //     }
                //     else
                //     {
                //         flag=true;
                //     }
                // }
                // if(flag==true)
                // {
                    star[y]=s1;
                    y++;
                    // star = Arrays.copyOf(star, star.length + 1);
                // }
                s1="";
            }
        }
        z=0;
        for(x=0;x<star.length;x++)
        {
            boolean flag=true;
            for(y=x+1;y<star.length;y++)
            {
            // System.out.println(star[x]);
                if(star[x].equals(star[y]))
                {
                    flag=false;
                }
            }
            if(flag==true)
            {
                star2 = Arrays.copyOf(star2, star2.length + 1);
                star2[z]=star[x];
                z++;
            }
        }
        for(x=0;x<star2.length;x++)
        System.out.println(star2[x]);
    }
}
