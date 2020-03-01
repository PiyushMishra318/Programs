import java.util.Scanner;

class BubbleSort{
  public static void main(String[] args) {
    int n,i,j,swap;
    Scanner in = new Scanner(System.in);
    System.out.println("Input no.of elements");
    n = in.nextInt();
    int array[] = new int[n];
    System.out.println("Enter integers:");
    for(i=0;i<n;i++){
      array[i]= in.nextInt();
    }
    for(i=0;i<n-1;i++){
      for(j=0;j<n-i-1;j++){
        if(array[j]>array[j+1]){
          swap = array[j];
          array[j] = array[j+1];
          array[j+1] = swap;
        }
      }
    }
    System.out.println("Sorted Array:");
    for(i=0;i<n;i++){
      System.out.println(array[i]);
    }
  }
}
