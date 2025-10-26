public class C extends B{

  public void type() {
    System.out.println("Soy C");
  }
  public void type(B _b) {
    _b.type();
  }
}
