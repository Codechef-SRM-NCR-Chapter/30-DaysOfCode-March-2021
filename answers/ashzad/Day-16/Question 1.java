import java.util.*;
public class Count
{
    public static void main(String[]args)
    {
        HashMap<Integer,Integer> map=new HashMap<>();
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements in the  array in 0 and 1:");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        for(int i:arr)
        {
            if(map.containsKey(i))
            map.put(i,map.get(i)+1);
            else
            map.put(i,1);
        }
        int c=0;
        for(int i:arr)
        {
            if(i==1 && map.containsKey(i))
            {
                c=map.get(i);
                break;
            }
        }
        System.out.println("Output = "+c);
    }
}
        
