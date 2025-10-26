public class A{

  public void type(){
    System.out.println("Soy A");
  }
 
  public void type(A _a) {
    _a.type();
  }
}
