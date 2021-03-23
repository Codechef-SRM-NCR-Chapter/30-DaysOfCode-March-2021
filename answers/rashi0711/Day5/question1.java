public class fibonacciseries {

	public static void main(String[] args) {
		int a=0;int b=1;
		System.out.print(a+" "+b+" ");
		int i=1;
		while(i<=48)
		{
			int c=a+b;
			System.out.print(c+" ");
			a=b;
			b=c;
			i++;
		}
		
	}

}
