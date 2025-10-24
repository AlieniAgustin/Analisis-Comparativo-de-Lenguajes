public class C extends B{

  private int pepe;

  public C(){
    this.pepe = 1;
  }

  public void type() {
    System.out.println("Soy C");
  }
  public void type(B _b) {
    _b.type();
  }
}
