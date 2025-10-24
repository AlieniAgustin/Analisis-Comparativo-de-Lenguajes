public class Main{
  public static void main(String[] args) {
    A2 a = new A2 ();
    A2 b2 = new B ();
    B b3 = new B();
    System.out.println (a.m2 (b3));
    System.out.println (b2.m2 (b2)); //b2 es un A2
    System.out.println (b3.m2 ((B)b2));
    System.out.println (b3.m2 (a));
  }

}
