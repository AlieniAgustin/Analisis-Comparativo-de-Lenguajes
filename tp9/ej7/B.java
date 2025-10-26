public class B extends A2 {
  public String m1 (B x) { return "BA2" ; }
  public String m2 (B x) { return "Paso por B - m2(B) "+ this.m1(x) ; }
  public String m2 (A2 x) { return "Paso por B - m2(A2) "+ this.m1(this) ; }
}
