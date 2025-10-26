public class Test{
  public static void main(String[] args){
    A a = new A();
    B b= new B();
    B c = new C();

    a.type(b);
    b.type(a);
    b.type(b);
    c.type((A) c);
    c.type((C) c);
  }
}
