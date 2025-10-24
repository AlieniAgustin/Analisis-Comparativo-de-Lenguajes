public class A{

  private int pepe;

  public A(){
    this.pepe = 0;
  }

  public void type(){
    System.out.println("Soy A");
  }
 
  public void type(A _a) {
    _a.type();
    System.out.println(this.pepe); //por que imprime 0 ?
    //this.type(); //esta haciendo _a.type()
  }
}
