import java.util.*;
public class Searching{
    public static void main()
    {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int a[]=new int[n+1];
        HashMap<Integer,Integer> map=new HashMap<>();
        map.put(0,1);
        for(int i=1;i<=n;i++)
        {
            a[i]=sc.nextInt();
            if(map.get(i)==null)
                map.put(i,0);
            if(map.get(a[i])!=null&&map.get(a[i])>=0)
                map.put(a[i],map.get(i)+1);
            else
                map.put(a[i],1);
            
        }
        
        for(Map.Entry mapElement : map.entrySet())
        {
            if((int)mapElement.getValue()==0)
            System.out.println(mapElement.getKey());
            if((int)mapElement.getValue()==2)
            System.out.println(mapElement.getKey());
        }

    }
}
