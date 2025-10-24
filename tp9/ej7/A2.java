public class A2{
  public String m1(A2 x){
    return "AA2";
  }

  public String m2 (A2 x){
    return "Paso por A - m2(A2) "+ this.m1(x) ; 
  }
}
