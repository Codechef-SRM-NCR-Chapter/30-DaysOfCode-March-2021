public class day3 {
    public static void main(String[] args){
        
//        question1
    Scanner inp=new Scanner(System.in);
    System.out.print("Give the number of terms, whose sum is required : ");
    int n=inp.nextInt();
      
    int num=0;
    int sum=0;
    int pos;
    for(pos=1;pos<=n;pos++){
        num=num*10+pos;
        sum=sum+num;
    }
    System.out.print("The sum of "+n+" terms is : "+sum);
      
  }
}
