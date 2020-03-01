class Fibonacci{
  public static void main(String[] args) {
    int n=10,t1=0,t2=1;
    int i=1;
    while(i<=n){
      System.out.println(t1);
      int sum = t1+t2;
      t1=t2;
      t2=sum;
      i++;
    }
  }
}
