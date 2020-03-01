class Operands{
  int x,y,z;
  Operands(int a, int b, int c)
  {
    x=a;
    y=b;
    z=c;
  }
  void Operations(){
    System.out.println("These are Arithmatic Operations");
    System.out.println("1. Addition\n Eg. x + y= "+(this.x+this.y));
    System.out.println("2. Subtraction\n Eg. z - y= "+(this.z-this.y));
    System.out.println("3. Multiplication\n Eg. x X y= "+(this.x*this.y));
    System.out.println("4. Division\n Eg. z / y= "+(this.z/this.y));
    System.out.println("5. Modulus\n Eg. z % y= "+(this.z%this.y));
    System.out.println("These are Relational Operations");
    System.out.println("1. Equality\n Eg. x equal to y returns "+(this.x==this.y));
    System.out.println("2. Greater Than\n Eg. x is greater than y returns "+(this.x>this.y));
    System.out.println("3. Less Than\n Eg. x is less than y returns "+(this.x<this.y));
    System.out.println("4. Greater Than Or Equal to\n Eg. x is greater than or equal to y returns "+(this.x>=this.y));
    System.out.println("5. Less Than Or Equal to\n Eg. x is less than or equal to y returns "+(this.x<=this.y));
    System.out.println("6. Not Equals to\n Eg. x is not equal to y returns "+(this.x!=this.y));
    System.out.println("These are Boolean Operations");
    System.out.println("1. AND\n Eg. x>y AND x<y returns "+((this.x>this.y)&&(this.x<this.y)));
    System.out.println("1. OR\n Eg. x>y AND x<y returns "+((this.x>this.y)||(this.x<this.y)));
    System.out.println("1. NOT\n Eg. x>y AND x<y returns "+!((this.x>this.y)||(this.x<this.y)));
  }
}
class Operators{
  public static void main(String[] args){
    Operands operands = new Operands(5,6,8);
    operands.Operations();
    // System.out.println("These are ")
    // System.out.println
    // System.out.println
    // System.out.println
    // System.out.println
    // System.out.println
    // System.out.println
    // System.out.println
    // System.out.println


  }
}
