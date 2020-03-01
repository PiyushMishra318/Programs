class DigitSum{
  public static void main(String[] args){
    int num=1234,n,sum=0;
    while(num!=0){
      n=num%10;
      sum += n;
      num = num/10;
    }
    System.out.println("Sum : "+sum);
  }
}
