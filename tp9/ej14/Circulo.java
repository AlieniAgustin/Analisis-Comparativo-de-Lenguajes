public class Circulo extends FiguraGeometrica{

  private double radio;

  public Circulo(double radio){
    this.radio = radio;
  }

  public double calcularArea(){ return 3.14 * radio * radio;
  }

  public double calcularPerimetro(){
    return 2.0 * 3.14 * radio;
  }


}
