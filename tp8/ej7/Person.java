public class Person{
    private int dni;
    private String lastName;

    public Person(int dni, String lastName){
        this.dni = dni;
        this.lastName = lastName;
    }

    @Override
    public void finalize() throws Throwable{ 
        String msg = "Se va a destruir la persona con dni " + dni + "\n";
        System.out.println(msg);
        super.finalize();
    }

    @Override
    public String toString(){
        String answer = lastName + " con dni " + dni + "\n";
        return answer;
    } 
    
    public int getDni(){return dni;}
}