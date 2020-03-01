class Box
{
  int length,breadth,height;
  public void setDim(int l, int b, int h )
  {
    length=l;
    breadth=b;
    height=h;
  }
  public void showDim()
  {
    System.out.println("Length:\n"+length+"\nBreadth:\n"+breadth+"\nHeight:\n"+height);
  }
}
class NewBox{
  public static void main(String[] args)
  {
    Box SmallBox=new Box();
    SmallBox.setDim(5,6,4);
    SmallBox.showDim();
  }
}
