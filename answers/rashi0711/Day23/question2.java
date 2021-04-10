import java.util.*;

	public class good {

		

		public static void main(String[] args) {
			
			Scanner sc=new Scanner(System.in);
			int t=sc.nextInt();int u=0;int f=0;int i;
			while(u<t)
			{
				Queue<Integer> q=new LinkedList<>();
			
				int n=sc.nextInt();
				for(i=0;i<=n;i++)
				{
					if(Math.pow(2,i)>=n)
					{
						f=1;
						break;
						
					}
				}
				int l=1;int k=0;
				while(k<=Math.pow(2, i))
				{
					int flag=check(l);
					if(flag==1)
					{
						q.add(l);
						k++;
					}l++;
				}
			
			for(int p=0;p<n-1;p++)
			{
				q.remove();
			}
			System.out.println("output"+q.remove());
	        u++;
		}

	}
		public static int check(int n)
		{
			int f=0;
		
			while(n!=0)
			{
				int b=n%10;
				if(b==1||b==2)
				{
					f=1;
				}
				else
				{
					f=0;break;
				}
				n=n/10;
			}
			return f;
		}
	}
